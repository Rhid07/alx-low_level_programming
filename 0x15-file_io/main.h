#ifndef RHID07_H
#define RHID07_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>


ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(const char *s);
int create_file(const char *filename, char *text_content);

#endif
