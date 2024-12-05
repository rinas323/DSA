//linear search implementation code in c
//the elements are traversed sequentially to check
//whether the element is present in array or not so the complexity is
//order of n

#include<stdio.h>
void main(){
    int n;
    printf("enter the size of the input array:");
    scanf("%d",&n);

    //array declaration
    int arr[n];
    
    //taking user input into the array
    printf("\nEnter the input array of size %d:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //taking search element input from the user
    int key;
    printf("\nenter the search element:");
    scanf("%d",&key);

    //searching whether the element is in the array or not
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("the element %d is found at the position %d",key,i+1);
            return;//exiting the function,element is found
        }
    }

    //if the element is not found in the array after traversel
    printf("\nelement is not found in the array");

    

    
}