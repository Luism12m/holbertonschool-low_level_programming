#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

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
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];

if (argc != 3)
{
dprintf(2, "Uso: cp file_from file_to\n");
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: No se puede leer el archivo %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(2, "Error: No se puede escribir en el archivo %s\n", argv[2]);
exit(99);
}
while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(2, "Error: No se puede escribir en el archivo %s\n", argv[2]);
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(2, "Error: No se puede leer el archivo %s\n", argv[1]);
exit(98);
}
if (close(fd_from) == -1)
{
dprintf(2, "Error: No se puede cerrar fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(2, "Error: No se puede cerrar fd %d\n", fd_to);
exit(100);
}
return (0);
}
