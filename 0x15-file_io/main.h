#ifndef RHID07_H
#define RHID07_H


 
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(const char *s);
int create_file(const char *filename, char *text_content);

#endif
