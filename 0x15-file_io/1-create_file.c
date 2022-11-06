#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - check the code for Holberton School students.
* @filename: file to create.
* @text_content: info to write into the file.
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t nletters;
if (!filename)
{
return (1);
}
fd = open("filename", O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
printf("file can not be created, file can not be written, write");
return (-1);
}
if (text_content)
{
nletters = write(fd, text_content, 12);
if (nletters == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
