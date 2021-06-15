#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
int count = 0;
int storage[5];
void *producer(void *);
void *consumer(void *);
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_t thread1, thread2;

int main()
{
    int a = 1;
    while (a != 0)
    {
        int n;
        printf("Enter your choice: \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            pthread_create(&thread1, NULL, &producer, NULL);
            pthread_join(thread1, NULL);
            break;
        case 2:
            pthread_create(&thread2, NULL, &consumer, NULL);
            pthread_join(thread2, NULL);
            break;
        case 3:
            a = 0;
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
    exit(0);
}

void *producer(void *dummy1)
{
    while (count < 5)
    {
        printf("Enter value into storage as producer: \n");
        int x;
        scanf("%d", &x);
        pthread_mutex_lock(&mutex);
        storage[count] = x;
        printf("Value Entered: %d\n", storage[count]);
        count++;
        pthread_mutex_unlock(&mutex);
    }
}

void *consumer(void *dummy2)
{
    pthread_mutex_lock(&mutex);
    int y = storage[count - 1];
    printf("Value got by the consumer: %d\n", y);
    count--;
    pthread_mutex_unlock(&mutex);
}
