

ftok()     It is used to generate a unique key.

shmget()   Upon successful completion, shmget() 
           returns an identifier for the shared memory segment.

shmat()    Before you can use a shared memory segment, you have to attach yourself
           to it using shmat(). Here, shmid is a shared memory ID and shmaddr specifies
           the specific address to use but we should set it to zero and OS will automatically
           choose the address.

shmdt()-   When you’re done with the shared memory segment,
           your program should detach itself from it using shmdt().

shmctl()-  When you detach from shared memory, it is not destroyed.
           So, to destroy shmctl() is used.