Resources
Read or watch:

File descriptors
How to Use the I/O System Calls Open, Close, Read and Write.
C Programming in Linux Tutorial - open() read() write() Functions
man or help:

open
close
read
write
dprintf
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
Look for the right source of information online
How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls open, close, read and write
What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc Allowed syscalls: read, write, open, close
You are allowed to use _putchar
You t have to push _putchar.c, we will use our file. If you do it t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you t have to push them to your repo (if you do we t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
t forget to push your header file
All your header files should be include guarded
Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...
Tasks
0. Tread lightly, she is near
mandatory
Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0
julien@ubuntu:~/File descriptors and permissions$ cat Requiescat
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.
julien@ubuntu:~/File descriptors and permissions$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
  *
   * Return: Always 0.
    */
    int main(int ac, char **av)
    {
        ssize_t n;

    if (ac != 2)
        {
	        dprintf(2, "Usage: %s filename\n", av[0]);
		        exit(1);
			    }
			        n = read_textfile(av[1], 114);
				    printf("\n(printed chars: %li)\n", n);
				        n = read_textfile(av[1], 1024);
					    printf("\n(printed chars: %li)\n", n);
					        return (0);
						}
						julien@ubuntu:~/File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
						julien@ubuntu:~/File descriptors and permissions$ ./a Requiescat
						Requiescat
						by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
julien@ubuntu:~/File descriptors and permissions$
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: file_io
File: 0-read_textfile.c

0/9 pts
1. Under the snow
mandatory
Create a function that creates a file.
OA
Prototype: int create_file(const char *filename, char *text_content);
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure (file can not be created, file can not be written, , etcfailswrite Donwondonwondonetc