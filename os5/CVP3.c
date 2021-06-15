#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter name: \n");
    char n[100];
    scanf("%[^.]", n);
    printf("Hello %s\n", n);
    return 0;
}
