#ifndef HEADER
#define HEADER

void *malloc_checked(unsigned int);

int _strlen(char *);

char *_memset(char *, char, unsigned int);

char *string_nconcat(char *, char *, unsigned int);

void *_calloc(unsigned int, unsigned int);

int *array_range(int, int);

int *set_range(int *, int, int);

#endif
