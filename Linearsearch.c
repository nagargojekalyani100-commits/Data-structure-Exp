#include<stdio.h>
#include<conio.h>
int main(){
    int Data[10],k , Item ,Loc=0;
    printf("Enter an array :");
    for(k=1;k<=10;k++){
        scanf("%d",&Data[k]);
    }
    printf("Enter Item :");
    scanf("%d",&Item);
    for(k=1;k<=10;k++){
        if(Item == Data[k]){
            Loc = k;
            break;
        }
    }
    if(Loc==0){
        printf("Search is unsuccessful");
    }
    else {
    printf("Item is present at location %d",Loc);
    }
}