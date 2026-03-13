// QUEUE
// 1. Linear Queue
#include<stdio.h>
int queue[100];
int n,item;
int Front, Rear;

void Insert();
void Delete();
void display();

int main(){
    printf("Enter number of element: ");
    scanf("%d",&n);
    int choice;
    do{ 
        printf("\n-----Queue operation----\n");
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:Insert();
                   break;
            case 2:Delete();
                   break;
            case 3:display();
                   break;
            case 4:printf("Exiting program...\n");
                   break;
            default:printf("Invalid choice/n");                         
        }
    }
    while(choice !=4);
    return 0;
}
void Insert(){
    if (Rear==n){
        printf("Queue is overflow \n");
        return;
    }
    printf("Enter element for insert: \n");
    scanf("%d",&item);
    if(Rear==0){
        Rear=1;
        Front=1;
    }
    else{
        
        Rear=Rear+1;
        
    }
    queue[Rear]=item;
    printf("item inserted successfully !!\n");
}
void Delete(){
    if(Front==0){
        printf("queue is underflow or empty\n");
        return;
    }
    item=queue[Front];
    printf("deleted element:%d\n",item);
    if(Front==Rear){
        Front=0;
        Rear=0;
    }
    else{
        Front=Front+1;
        printf("Element deleted successfully \n");
    }
}
void display(){
    int i;
    if(Front==0){
        printf("queue is empty\n");
        return;
    }
    else{
        printf("queue elements are: \t");
        for(i=Front; i<=Rear; i++){
            printf("%d\t",queue[i]);
        }
        // printf("\n");
    }
}
