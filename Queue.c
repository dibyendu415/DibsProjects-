#include <stdio.h>
#include<stdlib.h>
#define SIZE 5

void insert(int);

int find_min();
int q[SIZE];
int front=-1,rear=-1;
void insert(int n)
{
    if(rear==SIZE-1)
    {
        printf("Queue overflow");
        exit(1);
    }
    else
    {
        if(front==-1)
            front=0;
        rear++;
        q[rear]=n;
    }
}
int find_min()
{
    front=0;
    int min=q[front];
    for(int i=front;i<=rear;i++)
    {
        if(min>q[i])
        min=q[i];
    }
    return min;
}
int main()
{
    int val;
    scanf("%d",&n);
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&val);
        insert(val);
    }
    for(int i=0;i<SIZE;i++)
    {
        val=find_min();
    }
    printf("Smallest Number:%d",val);
    return 0;
}
