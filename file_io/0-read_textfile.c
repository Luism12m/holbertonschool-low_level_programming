#include "main.h"

/**
 * read_textfile - Lee un archivo y lo imprime en la salida estandar.
 * @filename: Nombre del archivo a leer.
 * @letters: Numero de letras a leer e imprimir.
 *
 * Return: El nuero de letras realmente leidas e ipresas,o 0 si falla.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd; 
  char *buffer;  
  ssize_t bytes_read, bytes_written;
  if (filename == NULL)
    return (0);

  fd = open(filename, O_RDONLY);
  if (fd == -1) {
    perror("Error opening file");
    return (0);
  }
  
  buffer = malloc(sizeof(char) * letters);
  if (buffer == NULL) {
    perror("Memory allocation failed");
    close(fd);
    return (0);
  }

  bytes_read = read(fd, buffer, letters);
  if (bytes_read == -1) {
    perror("Error reading file");
    free(buffer);
    close(fd);
    return (0);
  }

  bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
  if (bytes_written == -1 || bytes_written != bytes_read) {
    perror("Error writing to stdout");
    free(buffer);
    close(fd);
    return (0);
  }
  free(buffer);
  close(fd);

  return (bytes_read);
}
