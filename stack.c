#include<stdio.h>
#include<conio.h>
int stack[100],choice,max,top,x,i;
void push();
void pop();
void peep();
void display();
int main()
{
    top=-1;
    printf("Enter the size of Stack[max=100]: ");
    scanf("%d",&max);
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Peek");
    printf("\n4.Display");
    printf("\n5.Quit");

    do
    {
        /* code */
        printf("\nEnter your choice: ");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }

            case 2:
            {
                pop();
                break;
            }

            case 3:
            {
                peep();
                break;
            }

            case 4:
            {
                display();
                break;
            }
            
            case 5:
            {
                printf("\n\t Exit Point");
                break;
            }

            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
            }
        }
    } 
    while (choice!=5);
    return 0;
}
void push()
{
    if (top>=max-1)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Enter the value to be pushed");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if (top<=-1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        printf("The popped element is: %d",stack[top]);
        top--;
    }
}

void peep()
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("The element Peeked is: %d",stack[top]);
    }
}

void display()
{
    if(top>=0)
    {
        printf("Elements in stack are: ");
        for(i=top;i>=0;i--)
        {
            printf( "\n%d",stack[i]);
        }
    }
    else
    {
        printf("Stack is Empty");
    }
}


