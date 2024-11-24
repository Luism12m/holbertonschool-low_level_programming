#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * open_file - Abre un archivo
 * @filename: Nombre del archivo
 * @flags: Flags para abrir el archivo
 * @mode: Modo para crear el archivo si no existe
 *
 * Return: Descriptor de archivo
 */
int open_file(const char *filename, int flags, int mode)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
dprintf(2, "Error: No se puede abrir el archivo %s\n", filename);
exit(98);
}
return (fd);
}

/**
 * copy_content - Copia el contenido de un archivo a otro
 * @fd_from: Descriptor del archivo de origen
 * @fd_to: Descriptor del archivo de destino
 */
void copy_content(int fd_from, int fd_to)
{
int bytes_read, bytes_written;
char buffer[1024];

while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(2, "Error: No se puede escribir en el archivo\n");
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(2, "Error: No se puede leer el archivo\n");
exit(98);
}
}

/**
 * close_file - Cierra un archivo
 * @fd: Descriptor del archivo
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(2, "Error: No se puede cerrar el archivo %d\n", fd);
exit(100);
}
}

/**
 * main - Copia el contenido de un archivo a otro
 *
 * @argc: Numero de argumentos
 * @argv: Arreglo de argumentos
 *
 * Return: 0 en exito, codigo de error en fallo
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
{
dprintf(2, "Uso: cp file_from file_to\n");
exit(97);
}
fd_from = open_file(argv[1], O_RDONLY, 0);
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
copy_content(fd_from, fd_to);
close_file(fd_from);
close_file(fd_to);
return (0);
}
