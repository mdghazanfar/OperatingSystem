#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    char *arr[] = {"./addCVP5", NULL};
    fork();
    execvp(arr[0], arr);
    return 0;
}