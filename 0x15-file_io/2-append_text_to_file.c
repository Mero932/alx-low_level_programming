#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: const char.
 * @text_content: char
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
file = fopen(filename, "a");
if (file == NULL)
{
printf("Failed to open the file.\n");
return (0);
}
fprintf(file, "%s", text_content);
fclose(file);
return (1);
}
