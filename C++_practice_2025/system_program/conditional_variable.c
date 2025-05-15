
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

int status=0;
pthread_cond_t cond;
pthread_mutex_t mutexstatus;

void* wait1(void *data)
	{
		pthread_mutex_lock(&mutexstatus);
		printf("\nthread is waiting");

		while(!status)
		{
		printf("Before conditional wait status value=%d ",status);
		pthread_cond_wait(&cond,&mutexstatus);
		printf("After conditional wait status value=%d ",status);
			
		}
		printf("\n thread in signal : condition true");
		pthread_mutex_unlock(&mutexstatus);
		return 0;
	}

	
void* signal1(void *data)
	{
		pthread_mutex_lock(&mutexstatus);
			status=1;
		printf("\n thread in signal : statustrue");
		pthread_mutex_unlock(&mutexstatus);
		
		pthread_cond_signal(&cond);
		return 0;
	}	

int main()
{
	
	pthread_t waitid,signalid;
	printf("\n it is started");
	
	pthread_cond_init(&cond,NULL);

	pthread_create(&waitid,NULL,wait1,NULL);
	pthread_create(&signalid,NULL,signal1,NULL);
	
	pthread_join(waitid,NULL);
	pthread_join(signalid,NULL);
	printf("\n End of program");

	return 0;	
}

