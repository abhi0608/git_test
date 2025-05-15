
/*The call pthread_cond_wait performs three actions:
 *
 *   1.  unlock the mutex
 *   2.  waits (sleeps until pthread_cond_signal is called on the same condition variable). It does 1 and 2 atomically.
 *   3.  Before returning, locks the mutex
 *
 *       */
/*pthread_cond_broadcast or pthread_cond_signal call-> Provide signal for pthread_conditional_wait call */

/*Advantage-  it can access critical section of other thread  also. 
 *
 */
 #include<stdio.h>
 #include<pthread.h>
 #include<sched.h>
 #include<semaphore.h>
 int status=0;
 pthread_cond_t cond;
 pthread_mutex_t mutexstatus;
 void* even_odd(void *data)
     {
         int number=0;
         pthread_mutex_lock(&mutexstatus);
         while(number<5)
         {
              number++;
             if(*(int*)data==1)
             {
                 if(number%2==0)
                 printf("\nthread even ,number=%d %d\n",*(int*)data,number);
             }
             if(*(int*)data==0)
             {
                 if(number%2==1)
                 printf("\nthread odd number=%d %d\n",*(int*)data,number);
             }
            
             if(number==5 && *(int*)data==1)
             {
                 printf("\ngiving chance for odd thread\n");
                 pthread_cond_wait(&cond,&mutexstatus);
             }
              if(number==5 && *(int*)data==0)
             {
                pthread_cond_signal(&cond);
                printf("\nodd thread done\n");
             }
         }
         pthread_mutex_unlock(&mutexstatus);
         return 0;
 }
 
 int main()
 {
     
     pthread_t t1,t2;
     sem_t s1;
     sem_init(&s1, 0, 1);
     
     printf("\n it is started");
     int even=1,odd=0;
     pthread_cond_init(&cond,NULL);
     
     
     pthread_create(&t1,NULL,even_odd,(void*)&even);
     sem_post(&s1);
     
     sem_wait(&s1);
     pthread_create(&t2,NULL,even_odd,(void*)&odd);
     
 
     pthread_join(t1,NULL);
     pthread_join(t2,NULL);
     printf("\n End of program");
 
     return 0;	
 }
 
 