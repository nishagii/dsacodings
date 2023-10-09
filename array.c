#include<stdio.h>
#define MAX 5
int arr[MAX];

void insert(len){
    int pos,val;
    printf("where do you want to insert : ");
    scanf("%d",&pos);

    printf("what do you want to insert : ");
    scanf("%d",&val);

    for(int i=MAX;i<pos-1;i--){
        arr[i+1]=arr[i];
        arr[pos]=val;
        
    }
    for(int i=0;i<len;i++){
        printf(" %d ",arr[i]);
    }
}
int main(){
    int len;
    printf("length of the array : ");
    scanf("%d",&len);

    for(int i=0;i<=len-1;i++){ 
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    insert(len);
    

    
    return 0;
}


