//binary search implementation code using c
//binary search is a searching technique in which 
//elements are searched by repeatedly halving the search area
//note inorder to perform binary search the elements has to be in sorted order

#include<stdio.h>

//the function which performs the binary search
int BinarySearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key) return mid+1;
        if(key<arr[mid]) high=mid-1;
        if(key>arr[mid]) low=mid+1;
    }
    return -1;

}

void main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    int arr[n];//declaring array of size n

    //taking the array input from the user,
    //Note that the array must be sorted for this code to work properly
    printf("Enter the array in ascending order:");

    //taking user input through for loop
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //taking user input of the key to be searched
    int key;
    printf("enter the key to be searched:\n");
    scanf("%d",&key);

    //calling binarysearch function with the user input
    int result=BinarySearch(arr,n,key);
    if(result==-1){
        printf("The element is not present in the array");
    }else{
        printf("The element %d is found at the position %d",key,result);
    }




}