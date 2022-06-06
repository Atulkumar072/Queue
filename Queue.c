#include<stdio.h>
//Declaring functions
void enqueue();
void dequeue();
void menu();
void is_empty();
void is_full();
void display();
int queue[100],front=-1,rear=-1,n,variable,choice,size;  //Declaring variables
int main()
{
    printf("Press any key to continue: ");
    getch(); // To hold screen untill user press any key
    system("cls");  // To clear scrreen
    fflush(stdin);  // To clear output buffer
    printf("Please enter the size of Queue: ");
    scanf("%d",&n);
    menu(); //Calling menu function
}
void menu()    //Function to display menu
{
       printf("\n\n1.Enqueue\n2.Dequeue\n3.DISPLAY\n4.Is_EMPTY\n5.Is_FULL\n6.EXIT");
       printf("\nPlease enter your choice: ");
       scanf("%d",&choice);
       switch(choice)   
       {
           case 1:
           {
               enqueue();
               break;
           }
           case 2:
           {
               dequeue();
               break;
           }
           case 3:
           {
               display();
               break;
           }
           case 4:
           {
               is_empty();
               break;
           }
           case 5:
           {
               is_full();
               break;
           }
           case 6:
           {
               break;
           }
            default:
           {
               printf("\nInvalid choice");
           }
       }
}
void enqueue()
{
    if(rear==n-1) //checking stack is full or not
    {
        printf("\nQueue OVERFLOW\n");
    }
    else
    {
        if(front==-1)
        front=0;
        printf("\nEnter a value to be pushed: ");
        scanf("%d",&variable);
        rear++;
        queue[rear]=variable;
    }
    menu();

}
void dequeue()
{
    if(front==-1|| front>rear) //checking stack empty or not
    {
        printf("\nQueue UNDERFLOW\n");
    }
    else
    {
        printf("\nThe element is %d",queue[front]);
        front++;
    }
    menu();
}
void display()  //Function to display elements in stack
{
    if(front==-1)
    {
        printf("\nQueue Empty\n");
        
    }
    else 
    {
        printf("\nElements in queue are: ");
        for(int i=front;i<=rear;i++)
        printf("%d\t",queue[i]); 
    }
    menu();
}
void is_empty() //Function to check stack i.e empty or not empty
{
    if(front==-1|| front>rear)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        printf("\nQueue is not empty\n");
    }
    menu();
}
void is_full()  //Function to check stack i.e full or not full
{
    if(rear==n-1)
    {
        printf("\nQueue is full!");
    }
    else
    {
        printf("Queue is not full");
    }
    menu();
}