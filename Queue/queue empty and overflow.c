#include<stdio.h>
#define MAX 5
int queue_array[MAX];
int rear=-1;
int front=-1;
display()
{
    int i;
    if(front==-1)
        printf("queue is empty");
    else{
        printf("queue is:\n");
        for(i=front;i<=rear;i++)
            printf("%d",queue_array[i]);
        printf("\n");
    }
}
main()
{
    int choice;
    while(1)
    {
        printf("1.Insert\n");
         printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("enter your choice");
         scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("Invalid choice \n");
        }
    }
}

insert()
{
    int add_item;
    if (rear == MAX - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == - 1)

            front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Deleted Element is : %d\n", queue_array[front]);
        front = front + 1;
    }
}

