#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
 * main - Copia el contenido de un archivo a otro archivo.
 *
 * @argc: El numero de argumentos.
 * @argv: El arreglo de argumentos.
 *
 * Return: 0 en exito, un codigo de error distinto de cero en fallo.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];

/* Verifica el numero de argumentos */
if (argc != 3)
{
dprintf(2, "Uso: cp file_from file_to\n");
exit(97);
}

/* Abre el archivo de origen */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: No se puede leer el archivo %s\n", argv[1]);
exit(98);
}

/* Abre el archivo de destino */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(2, "Error: No se puede escribir en el archivo %s\n", argv[2]);
exit(99);
}

/* Copia el contenido de file_from a file_to */
while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(2, "Error: No se puede escribir en el archivo %s\n", argv[2]);
exit(99);
}
}

/* Verifica si hubo error en la lectura */
if (bytes_read == -1)
{
dprintf(2, "Error: No se puede leer el archivo %s\n", argv[1]);
exit(98);
}

/* Cierra los descriptores de archivo */
if (close(fd_from) == -1)
{
dprintf(2, "Error: No se puede cerrar el descriptor de archivo %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(2, "Error: No se puede cerrar el descriptor de archivo %d\n", fd_to);
exit(100);
}
return (0);
}
