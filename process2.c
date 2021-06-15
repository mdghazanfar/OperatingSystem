#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
int a = 100;
int main()
{
    pid_t pid;
    pid = vfork();
    if (pid < 0)
    {
        perror("Child process creation failed\n");
        return 1;
    }
    if (pid == 0)
    {
        printf("Child process creation successful\n");
        a = 300;
        exit(0);
    }
    else if (pid > 0)
    {
        sleep(2);
        printf("This is the parent process\n");
        printf("%d\n", a);
    }
    return 0;
}