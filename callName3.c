#include <stdio.h>
#include <unistd.h>
int main()
{
    fork();
    char *arr[] = {"./nameCVP4", NULL};
    execvp(arr[0], arr);
    return 0;
}