#include<stdio.h>
int main()
{
   int size;
   scanf("%d",&size);
   int stack[size];
   int top = -1,push, option,pop;
   while(1)
   {
    printf("\nType...\n 1 to push\n 2 to pop\n 3 to check wheather the syack if empty\n 4 to check wheather the stack is full\n 0 o exit \n");
    
    scanf("%d",&option);
    if(option==1){
        if(top == size -1){
            printf("Overflow\n");
        }
        else{
            printf("Enter value to push: ");
            scanf("%d",&push);
            top++;
            stack[top] = push;
        }
    }
    else if(option==2)
   {
     if(top == -1)
    {
        printf("Underflow");
    }
    else {
        printf("popped %d\n", stack[pop]);
        top--;
    }
   }
   else if(option==3)
  {
    if(top == -1)
    {
        printf("The stack if empty");
    }
    else{
          printf("The stack is not empty");
    }
   }
   else if(option ==4)
   {
    if(top==size-1){
        printf("The stack is full");
    }
    else{
        printf("The stack is not full");
    }
   } 

   else if(option == 0){
        break;
   }
   else
        {
            printf("Invalid option\n");
        }

   printf("Stack:[");
   for(int i=0; i<=top; i++){
    printf("%d", stack[i]);
   }
   printf("]");
   return 0;

 }
}

     






   







