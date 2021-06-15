#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *countPrime();
void *countNonprime();
pthread_t thread1, thread2;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int count, i, j, k;

int main()
{
    for (i = 1; i <= 20; i++)
    {
        pthread_create(&thread1, NULL, &countPrime, NULL);
        pthread_create(&thread2, NULL, &countNonprime, NULL);
        pthread_join(thread1, NULL);
        pthread_join(thread2, NULL);
    }
    exit(0);
}

void *countPrime()
{
    pthread_mutex_lock(&mutex);
    count = 0;
    for (j = 1; j <= i; j++)
    {
        if (i % j == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("Prime Number is :- %d\n", i);
    }
    pthread_mutex_unlock(&mutex);
}

void *countNonprime()
{
    pthread_mutex_lock(&mutex);
    count = 0;
    for (k = 1; k <= i; k++)
    {
        if (i % k == 0)
        {
            count++;
        }
    }
    if (count != 2)
    {
        printf("Non Prime Number is :- %d\n", i);
    }
    pthread_mutex_unlock(&mutex);
}