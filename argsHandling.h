#ifndef ARGS_HANDLING
#define ARGS_HANDLING

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX_FILENAME_LENGHT 60
#define ENCRYPT 1
#define DECRYPT 0

int strToNumber(char* str);
char** getFileNames(long unsigned *numF);

#endif
