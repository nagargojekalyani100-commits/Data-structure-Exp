#include<stdio.h>
#include<conio.h>
int main(){
    int Data[20],k,N,ptr,temp;
    printf("Enter No of elements:");
    scanf("%d",&N);
    printf("Enter elements:");
    for(ptr=1;ptr<=N;ptr++){
        scanf("%d",&Data[ptr]);
    }
    for(k=1;k<=N-1;k++){
        ptr=1;
        while(ptr<=N-k){
            if(Data[ptr]>Data[ptr+1]){
                temp=Data[ptr];
                Data[ptr]=Data[ptr+1];
                Data[ptr+1]=temp;
            }
            ptr=ptr+1;
        }
         printf("\nSorted array:");
    for(ptr=1;ptr<=N;ptr++){
        printf("%d ",Data[ptr]);
    }
   
    }
    return 0;
}