/**
 * read_textfile - read and print
 * @filename: const char
 * @letters: size_t
 *
 * Return: 0, bytesRead
 */
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
FILE *file;
ssize_t bytesRead;
if (filename == NULL)
{
return (0);
}
file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}
buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
fclose(file);
return (0);
}
bytesRead = fread(buffer, sizeof(char), letters, file);
if (bytesRead <= 0)
{
fclose(file);
free(buffer);
return (0);
}
buffer[bytesRead] = '\0';
printf("%s", buffer);
fclose(file);
free(buffer);
return (bytesRead);
}

