/* In this program when thread_fun1 writing and  giving signal for thread_fun2 which is waiting for signal 
 * from thread_fun1 to read in thread_fun2 .
 * after that thread_fun2 will write and giving signal for thread_fun1 which is waiting for signal from thread_fun2 to read in thread_fun1.
*/
#include <semaphore.h>
#include <sys/types.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

sem_t s1;
sem_t s2;

volatile int X;
volatile int Y;

void* thread_fun1(void* val)
{
   while(1)
   {
   X = rand()%1000; // write
   printf("After thread ID A writes to X, X = %d\n", X);
   sem_post(&s1); // signal
   sem_wait(&s2); // wait
   printf("After thread ID A reads from Y, Y = %d\n", Y); // read
   sleep(3);
   }
}

void* thread_fun2(void* val)
{
   while(1)
   {
    sem_wait(&s1); // wait
    printf("After thread ID B reads from X, X = %d\n", X); // read
    Y = rand()%1000; // write
    printf("After thread ID B write to Y, Y = %d\n", Y);
    sem_post(&s2); // signal
    sleep(3);
   }
}
int main()
{
void* status;

pthread_t thread1;
pthread_t thread2;
srand(time(NULL));

// initialize semaphores to zero
sem_init(&s1, 0, 0);   /*second argument showing 0 means semaphore shared between threds*//*third argument showing 0 means value of semaphore*/
sem_init(&s2, 0, 0);

pthread_create(&thread1,NULL, &thread_fun1, NULL);
pthread_create(&thread2,NULL, &thread_fun2, NULL);

pthread_join(thread1, &status);
pthread_join(thread2, &status);

sem_destroy(&s1);
sem_destroy(&s2);
return 0;
}
