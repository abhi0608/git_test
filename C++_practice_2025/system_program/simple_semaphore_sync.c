#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

int a,b,sum=0;
sem_t inputsync,procsync;

void *inputthread(){
        while(1)
        {
                sem_wait(&procsync);
                printf("\n IN INPUT THREAD---------------------------------> \n");
                printf("\n Enter the two variable \n"); /*procsync direct enter in critical section because procsyn initialize with 1*/
                scanf("%d%d",&a,&b);
                printf("Inputs %d and %d",a,b);
                sem_post(&inputsync);
        }
}

void *procthread(){
        while(1)
        {
                sem_wait(&inputsync);
                printf("\n IN PROC THREAD with result -----------------------> \n");
                sum=a+b;
                printf("\n sum =%d",sum);
                sem_post(&procsync);
        }
}

int main()
{
	pthread_t inputTID,procTID;

	if(sem_init(&inputsync,0,0) != 0)
		perror("init failed\n");
	if(sem_init(&procsync,0,1)!=0)
		perror("init failed\n");

	if(pthread_create(&inputTID,NULL,inputthread,NULL)!=0)
		perror("unsuccessful Ithread creation\n");
	if(pthread_create(&procTID,NULL,procthread,NULL)!=0)
		perror("unsuccessful Pthread creation\n");

	pthread_join(inputTID,NULL);
	pthread_join(procTID,NULL);

	sem_destroy(&inputsync);
	sem_destroy(&procsync);
		return 0;
}
