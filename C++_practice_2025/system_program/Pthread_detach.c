/* pthread_detach- It does not wait for termination of thread. main thread can be terminated before calling thread */
#include <pthread.h>
#include <stdio.h>
void* func(void* arg)
{
	int i=1;
	for(i=1;i<=10;i++){
         sleep(1);
         printf("hello %d\n",i);
	}
	 return 0;
}
int main() /*main thread*/
{
    pthread_t ptid;
    pthread_create(&ptid, NULL, &func, NULL);
    printf("This line may be printed before thread resource release\n");

    pthread_detach(ptid);
    sleep(11);
    /*Sleep for 11 seconds because if main function exits, then other threads will
      be also be killed. Sleep for 11 seconds, so that detached exits by then*/
    printf("After detached\n");
   return 0;
}
