#ifndef RHID_H
#define RHID_H

#include <stdio.h>

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif
