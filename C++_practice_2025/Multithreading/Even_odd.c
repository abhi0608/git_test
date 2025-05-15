#include <stdio.h>
#include <pthread.h>

#define MAX_NUM 20

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

int number=0;
int isOdd=0;
void *printNumbers(void *arg) {
    
       pthread_mutex_lock(&mutex); 
       while(number<21 && (*(int*)arg==0) && !isOdd)
       {
           if(number%2==0)
           {
               printf("args=%d",*(int*)arg);
               printf("Even =%d\n",number);
               
           }
           if(number==20)
           {
               number=0;
               isOdd=1;
           }
           number++;
       }
       while(number<20 && (*(int*)arg==1) && isOdd)
       {
            if(number%2==1)
           {
                printf("args=%d",*(int*)arg);
                printf("Odd =%d\n",number);
               
           }
           number++;
       }
       pthread_mutex_unlock(&mutex);
}

int main() {
    pthread_t t1, t2;
    int even=0;
    int odd=1;
    pthread_create(&t1, NULL, printNumbers,(void*)&even);
    pthread_create(&t2, NULL, printNumbers,(void*)&odd);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&mutex);
   

    return 0;
}