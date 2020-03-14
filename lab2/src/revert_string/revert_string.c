#include "revert_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RevertString(char *str)
{
	int i;
    int n = strlen(str);
    char *reverted = malloc(sizeof(char) * (n + 1));
	for (i=0; i<n;i++)
    {
        reverted[n-i-1]=str[i];
    }  
    strcpy(str, reverted);
    free(reverted);
}

