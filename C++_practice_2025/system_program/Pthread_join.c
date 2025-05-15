/* pthread_join- It will wait for termination of thread */
#include <pthread.h>
#include <stdio.h>
void* func(void* arg)
{
    printf("Inside the thread\n");
    return 0;
}
int main() /*main thread*/
{
    pthread_t ptid;
    pthread_create(&ptid, NULL, &func, NULL);
    printf("This line may be printed before thread resource release\n");
    pthread_join(ptid,NULL);
    printf("After join \n");
   return 0;
}
