#include <stdio.h>
#include <pthread.h>

#define MAX_NUM 20

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

int number=0;
int isOdd=0;
void *printNumbers(void *arg) {
    
    pthread_mutex_lock(&mutex);
       while(number<21)
       {
           if((*(int*)arg==0) && number%2==0 && isOdd==0)
           {
               printf("args=%d",*(int*)arg);
               printf("Even =%d\n",number);      
               isOdd=1;
           }
           else if( (*(int*)arg==1) && number%2==1 && isOdd==1)
           {
            printf("args=%d",*(int*)arg);
            printf("odd =%d\n",number);
          
              isOdd=0;
           }
           number++;   
       }
       pthread_mutex_unlock(&mutex);
       
       /*
       while(number<20 && (*(int*)arg==1) && isOdd)
       {
           if(number%2==1)
           {
                printf("args=%d",*(int*)arg);
                printf("Odd =%d\n",number);
               
           }
           number++;
       }
    */
       
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