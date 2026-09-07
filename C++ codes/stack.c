#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int stack[size];
    int top=-1;
    int option;
    int push,pop;

    while(1){
        printf("\n\nType \n 1 to push\n 2 to pop\n 3 to check if the stack if full\n 4 to check if the stack is empty\n 0 to exit");
       if(option ==1){
        if(top == size -1){
            printf("Overflow");
        }
        else
        {
              printf("Enter an integer to push: ");
              stack[size]=push;
              top++;
        }
        
       }
    else if(option ==2){
        if(top==1){
            printf("Underflow");
        }
        else
        {
              printf("Enter an integer to pop: ");
              top --;
        }
    }
     
    else if(option ==3){
        if(top==size){
            printf("The stack is full");
        }
        else
        {
              printf("The stack is not full");
        }
    }

    else if(option ==4){
        if(top==size -1){
            printf("The stack is empty");
        }
        else
        {
              printf("The stack is not empty");
        }   
    }

    else if(option ==0){
        if(top==1){
            break;
        }
    }

     else
    {
       printf("Invalid integer");
    }

    printf("stack[");
    {
        for(int i=0; i<=top; i++)
        {
            printf("%d",stack[i]);
        }
    }

    printf("stack ]");
  
  }

  return 0;
}
       





