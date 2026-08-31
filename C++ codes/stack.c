#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int stack[size];
    int top = -1;
    int option;
    int push;
    while(1)
    {
        printf("\n\nType..\n1 to push\n2 to pop\n3 to check if the stack is Empty\n4 to check the stack is Full\n0 to exit\n");
        scanf("%d",&option);
        if(option==1)
        {
            if(top==size)
            {
                printf("Overflow\n");
            }
            else
            {
                printf("Enter value to push: ");
                scanf("%d",&push);
                top++;
                stack[top]=push;
            }
        }
        else if(option==2)
        {
            if(top==-1)
            {
                printf("Underflow\n");
            }
            else
            {
                printf("Popped %d\n",stack[top]);
                top--;
            }
        }
        else if(option==3)
        {
            if(top==-1)
            {
                printf("The stack is empty\n");
            }
            else
            {
                printf("The stack is not empty\n");
            }
        }
        else if(option==4)
        {
            if(top==size-1)
            {
                printf("The stack is full\n");
            }
            else
            {
                printf("The stack is not full\n");
            }
        }
        else if(option==0)
        {
            break;
        }
        else
        {
            printf("Invalid input\n");
        }
    }
    printf("Stack: [");
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
    printf("]");
}