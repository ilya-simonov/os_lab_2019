#include "swap.h"

void Swap(char *left, char *right)
{
	char *x;
    x =*right;
    *right=*left;
    *left = x;
}
