#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int size;
    int rear;
    int front;
    int *Q;
};

void create(struct Queue *q, int size){
    q->size = size;
    q->rear = q->front = -1;
    q->Q = (int *)malloc(sizeof(int)*size);
}

void enqueue(struct Queue *q, int element){
    if(q->rear == q->size-1)
        return;
    q->rear++;
    q->Q[q->rear]=element;
}
int dequeue(struct Queue *q){
    if(q->front == q->rear)
        return -1;
    q->front++;
    int x = q->Q[q->front];
    return x;

}
void Display(struct Queue q){
    for(int i=q.front+1;i<=q.rear;i++)
        printf("%d ",q.Q[i]);
    printf("\n");
}


int main()
{
    struct Queue myque;
    create(&myque,5);

    enqueue(&myque,10);
    enqueue(&myque,20);
    enqueue(&myque,30);
    enqueue(&myque,40);
    enqueue(&myque,50);

    dequeue(&myque);

    Display(myque);
    return 0;
}
