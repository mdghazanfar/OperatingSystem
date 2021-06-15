

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    pid_t pid, mypid, myppid;
    pid = getpid();
    printf("Process Id before fork %d\n", pid);
    pid = fork();
    if (pid < 0)
    {
        perror("Failure\n");
        return 1;
    }
    if (pid == 0)
    {
        printf("Child process creation successful\n");
        mypid = getpid();
        myppid = getppid();
        printf("Process Id and PPID is %d and %d\n", mypid, myppid);
    }
    else
    {
        sleep(2);
        printf("This is the parent process\n");
        mypid = getpid();
        myppid = getppid();
        printf("Process ID and PPID is %d and %d\n", mypid, myppid);
        printf("Process ID of the Child process is %d\n", pid);
    }
}
