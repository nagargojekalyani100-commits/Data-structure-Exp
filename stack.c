#include <stdio.h>

int stack[100];   
int top = 0;
int n;            

void push();
void pop();
void display();

int main()
{
    int choice;

    printf("Enter number of elements in stack: ");
    scanf("%d", &n);

    do
    {
        printf("\n--- STACK OPERATIONS ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exiting program...\n");
                    break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);

    return 0;
}

void push()
{
    int item;
    if(top == n)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
        printf("Element pushed successfully.\n");
    }
}

void pop()
{
    if(top == 0)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top = top - 1;
    }
}

void display()
{
    int i;
    if(top == 0)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for(i = top; i >= 1; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}