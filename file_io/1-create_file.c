#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * create_file - creates a file with specified content.
 * @filename: the name of the file to be created.
 * @text_content: the content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
perror("Error opening/creating file");
return (-1);
}

if (text_content != NULL)
{
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
perror("Error writing to file");
close(fd);
return (-1);
}
}

if (close(fd) == -1)
{
perror("Error closing file");
return (-1);
}
return (1);
}
