
#include<stdio.h>
int main(){
    int size;
    printf("enter Size of array= ");
    scanf("%d",&size);
    
    int arr[size];
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
    }
    
    //printing
    printf("the input array is \n");
    
    for(int i=0;i<size;i++){
        
        printf("%d ",arr[i]);
    }
    int smallest=arr[0];
    int ssmallest=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        
        else if (arr[i]!=smallest&&arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
    }
    printf("the second smallest no is : %d",ssmallest);
    
}
    

    
