#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
int *ptr;
ptr=(int *)malloc(sizeof(20));
free(ptr);
}

