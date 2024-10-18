/*
Bubble Sort is a simple comparison-based sorting algorithm.
 It works by repeatedly swapping adjacent elements if they are in the wrong order,
 which gradually moves the largest (or smallest) elements to their correct positions,
 like bubbles rising to the surface.

*/
#include<iostream>
using namespace std;

int main(){
    
    int n;//for size of the input array
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the input array:"<<endl;
    
    //for loop for taking input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    //sorting array with bubble sort
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    //printing the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}