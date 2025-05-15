// C Program to Show how to use the Volatile Keyword

#include <pthread.h>
#include <stdio.h>

// Volatile variable to be accessed by multiple threads
volatile int volVar = 0;

// Mutex for synchronization
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

// Function to increment the volatile variable
void* incValue(void* arg)
{
    for (int i = 0; i < 10; i++) {
        // Lock the mutex before accessing volVar
        pthread_mutex_lock(&mtx);
        volVar++;
        // Unlock the mutex after modifying volVar
        pthread_mutex_unlock(&mtx);
    }
    return NULL;
}

int main()
{
    pthread_t t1, t2;

    // Create two threads to increment volVar
    pthread_create(&t1, NULL, incValue, NULL);
    pthread_create(&t2, NULL, incValue, NULL);

    // Wait for both threads to finish
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    // Output the final value of volVar
    printf("Final value of volVar: %d\n", volVar);

    return 0;
}
