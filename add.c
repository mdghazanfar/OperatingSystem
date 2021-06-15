//First type the code to add numbers.

#include <stdio.h>
#include <unistd.h>
    int
    main()
{
    int a = 5, b = 6;
    int sum = a + b;
    printf("The sum is %d\n", sum);
    return 0;
}


 /* Then create an executable file for the program.
Type gcc <file name> -o <executable file name> in the terminal.
In this case,
gcc addCVP.c –o addCVP5
Then type the program to call this process using execvp()
*/

