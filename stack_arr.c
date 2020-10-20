//This is the code to perform basic stack operations using Array Implementation
#include <stdio.h>
#define MAXSIZE 10
int top =-1;
int stack[MAXSIZE];
void push();
void pop ();
void peep ();
void display();
int main()
  {
    int choice=0;
    do
    {
        printf("\n");
        printf("1.Insert");
        printf("\n");
        printf("2.Remove element");
        printf("\n");
        printf("3.Peep");
        printf("\n");
        printf ("4.Display");
        printf("\n");
        printf("5.Exit");
        printf("\n");
        printf("Enter Choice");
        printf("\n");
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
                peep();
                break;
            case 4:
                display();
                break;
        }
          
      }while(choice!=5);
    return 0;
  }
void push()
{
    int val;
    if(top==MAXSIZE-1)
    {
        printf("Overflow");
        return;
    }
    else {
        printf("Enter Value");
        scanf("%d",&val);
        top++ ;
        stack[top]=val;
        printf("Value inserted");
        
    }
}
void pop()
{
    int val;
    if(top==-1)
    {
        printf("Stack is Empty");
        return;
    }
    else
    {
        val=stack[top];
        top-- ;
        printf("%d is removed from stack",val);
    }
}
void peep()
{
    int val;
    if(top==-1)
    {
        printf("Empty stack");
        
    }
    else {
        val =stack[top];
        printf("The value at top is %d",val);
    }
}
void display()
{
    if(top==-1)
    {
        printf("Empty Stack");
        return;
    }
    else {
        int i;
        printf("Stack is  \n");
        for(i=0;i<=top;i++)
        {
            printf("%d   ",stack[i]);
        }
   }
}
