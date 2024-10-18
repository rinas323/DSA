/*
Selection Sort is a simple comparison-based sorting algorithm.
It works by repeatedly finding the smallest (or largest, depending on the order) 
element from the unsorted part of the array and swapping it with the first unsorted element. 
This process is repeated for every position in the array until the entire array is sorted.
*/
#include<iostream>
using namespace std;
int main(){
    int n;//size of the input array
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"input the array:"<<endl;
    
    //for loop for taking user input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    //for loop for sorting using bubble sort
    for(int i=0;i<n-1;i++){
        int min=i;//for storing the minimum index
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                min=j;
            }
        }
        
        //swapping if the minimum index is changed
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    
    //printing the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}