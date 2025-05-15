/* pthread_rwlock_wrlock --> Inside write lock only write1 operation will perform
                            and other read or write operation will not perform till write1 unlock */
/*pthread_rwlock_rdlock--> Inside read lock only all read threads can perform operation and 
                          write operation will not perform or all reader will read same value*/
/*pthread_rwlock_unlock--> unlock read or write lock*/
/*all readers threads(thread2 and thread3) will read the same value which is updated by writer thread1 */

#include<stdio.h>
#include<pthread.h>

int count = 2;
pthread_rwlock_t rwlck;

void* thread1(void *data)
{	
	while(1)
	{
		pthread_rwlock_wrlock(&rwlck);  /*write lock*/
		sleep(3);
		printf("Inside thread1\n");
		count++;                /*writing value in count variable*/
		printf("thread1: increase count to Count value is %d\n",count);
		pthread_rwlock_unlock (&rwlck);/*write unlock*/
		printf("Thread 1 terminates \n");
		
	}
	return 0;
};
void* thread2(void *data)
{
	pthread_rwlock_rdlock (&rwlck);  /*read lock*/
	sleep(2);
	printf("Inside thread2\n");
	printf("thread2:Read count value is %d\n",count);
	printf("Thread 2 terminates \n");
	pthread_rwlock_unlock (&rwlck); /*read unlock*/
    return 0;
};

void* thread3(void *data)
{
	pthread_rwlock_rdlock(&rwlck);   /* read locak*/
	sleep(1);
	printf("Inside thread 3 \n");
        printf("thread3:Read Count value is %d\n",count);
	printf("Thread 3 terminates \n");
	pthread_rwlock_unlock (&rwlck);/*read unlock*/
    return 0;
};

int main()
{
	pthread_t th1ID,th2ID,th3ID;
	pthread_rwlock_init (&rwlck,NULL);
	pthread_create(&th1ID,NULL,thread1,NULL);
	pthread_create(&th2ID,NULL,thread2,NULL);
	pthread_create(&th3ID,NULL,thread3,NULL);

	pthread_join(th1ID,NULL);
	pthread_join(th2ID,NULL);
	pthread_join(th3ID,NULL);
	pthread_rwlock_destroy (&rwlck);
	return 0;
}
