// 2. Circular Queue
#include<stdio.h>
int Queue[100];
int Rear=0, Front=0;
int n, Item;

void insert();
void Delete();
void display();

int main(){
    printf("Enter number of element :");
    scanf("%d",&n);
    int choice;
    do{
        printf("\n--------Queue operation-------\n");
        printf("\n1.Insertion ");
        printf("\n2.Delete");
        printf("\n3.display");
        printf("\n4.Exit\n");

        printf("Enter your choice : \n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:insert();
            break;
            case 2:Delete();
            break;
            case 3:display();
            break;
            case 4:printf("Exit");
            break;
            default:
            printf("invalid choice\n");
        }
    }
    while(choice != 4);
    return 0; 
}
void insert(){
    if((Rear==n && Front==1) || (Rear+1==Front)){
        printf("Queue is overfull\n");
        return;
    }
    printf("Enter insertion element: ");
    scanf("%d",&Item);
    if(Rear==0 ){
        Rear=1;
        Front=1;
    }
    else if(Rear==n){
        Rear=1;
    }
    else{
        Rear=Rear+1;
    }
    Queue[Rear]=Item;
}

void Delete(){
    if(Front==0){
        printf("Queue is underflow");
        return;
    }
    printf("Deleted item is %d :",Queue[Front]);
    if(Rear==Front){
        Rear=0;
        Front=0;
    }
    else if(Front==n){
        Front=1;
    }
    else{
        Front=Front+1;
    }
}
void display(){
    int i;

    if(Front==0){
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements are:\t");

    if(Front <= Rear){
        for(i=Front; i<=Rear; i++){
            printf("%d\t",Queue[i]);
        }
    }
    else{
        for(i=Front; i<=n; i++){
            printf("%d\t",Queue[i]);
        }
        for(i=1; i<=Rear; i++){
            printf("%d\t",Queue[i]);
        }
    }
}
