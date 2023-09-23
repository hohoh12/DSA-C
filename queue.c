#include<stdio.h>
#include<conio.h>
int queue[100],ele,front=-1,rear=-1,x,i,choice,max;
void insert();
void delete();
void show();
void main()
{
    printf("Enter the size of queue[max=100]: ");
    scanf("%d",&max);
    printf("\n1.Insert");
    printf("\n2.Delete");
    printf("\n3.Display");
    printf("\n4.Quit");
    do{
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("Exit Point");
                break;
            }
            default:
            {
                printf("Please enter valid choice (1/2/3/4)");
            }
        }

    }while(choice!=4);
}

void insert()
{
    printf("\nEnter an Element to be inserted: ");
    scanf("%d",&ele);
    if(rear == max-1){
        printf("\nOVERFLOW");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front = 1;
        rear = 1;
    }
    else{
        rear++;
    }
    queue[rear] = ele;
}

void delete()
{
    if(front == -1 || front > rear || front == rear){
        printf("UNDERFLOW");
        return;
    }
    else{
        ele = queue[front];
        front++;
        // if(front == rear)
        // {
        //     printf("\nUNDERFLOW");
        //     return;
        // }
        // else
        // {
        //     front++;
        // }
    }
    printf("Value deleted is: %d",ele);
}

void show()
{
    if(rear == -1){
        printf("Queue is Empty");
    }
    else{
        printf("Values are: ");
        for(i = front; i <= rear; i++)
        {
            printf("\n%d",queue[i]);
        }
    }
}