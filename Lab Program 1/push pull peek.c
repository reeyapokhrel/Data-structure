#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("enter data");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("popped:%d",item);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("top element:%d",stack[top]);
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("Choose what you want to operate\n");
        printf("push\n");
        printf("pop\n");
        printf("peek\n");
        printf("exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            push();
        break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            return 0;
        default:
            printf("INVALID CHOICE");

    }
    }
    return 0;
}
