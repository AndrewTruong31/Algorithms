#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int countIntsFromFile(FILE *fp);
int *getIntFromFile(FILE *fp, int num);
int isNumber(char *in);
void printArray(int *arr, int num);
