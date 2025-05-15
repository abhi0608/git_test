/*
    primefact function is uncovered in Assignment 6
*/
#include<iostream>
#include<string.h>
using namespace std;

void sort(int A[],int size,bool asc=true);

void rotate(int A[],int size,int d=1,int n=1);
void sortStrings(char *A[],int size,bool=true);

void sort(int A[],int size,bool asc)
{
    int r,i,t;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            
            if(asc==true && A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
            else if(asc==false && A[i]<A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t; 
            }
        }
    }
}

void rotate(int A[],int size,int d,int n)  //1 2 3 4 5 f
{
    int i,t,r;
    if(d==1)
    {   
        for(r=1;r<=n;r++)
        {
            t=A[size-1];
            for(i=size-1;i>0;i--)
            {
                A[i]=A[i-1];
            }
            A[0]=t;
        }
    }
    if(d==-1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[0];
            for(i=1;i<size;i++)
            {
                A[i-1]=A[i];
            }
            A[size-1]=t;
        }
    }
}
void sortStrings(char *A[],int size,bool asc)
{
    int r,i;
    char temp[100];
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {        
            if(asc==true && strcmp(A[i],A[i+1])>0)
            {
                strcpy(temp,A[i]);
                strcpy(A[i],A[i+1]);
                strcpy(A[i+1],temp);
            }
            else if(asc==false && strcmp(A[i],A[i+1])<0)
            {
                strcpy(temp,A[i]);
                strcpy(A[i],A[i+1]);
                strcpy(A[i+1],temp); 
            }
        }
    }
}
int main()
{
    char str[][20]={"Kanpur","jaipur","Bhopal"};
    /*int A[]={1,2,3,4,5};
    rotate(A,5,-1,2);
      for(int i=0;i<5;i++)
      {
            cout<<A[i]<<" ";
      }*/
      char *ptrArr[3];
       for(int i=0;i<3;i++)
      {
        ptrArr[i]=str[i];
      }
      cout<<endl;
      sortStrings(ptrArr,3,false);
      for(int i=0;i<3;i++)
      {
            cout<<ptrArr[i]<<" ";
      }
      cout<<endl;
    return 0;
}