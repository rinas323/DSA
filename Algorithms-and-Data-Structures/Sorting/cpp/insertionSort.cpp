/*
Insertion Sort is a simple, intuitive sorting algorithm that builds the 
final sorted array one element at a time.
it starts by assuming first element is sorted and iterate over the other elements
 and inserts each one into the correct position in sorted array assumed.

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;//size of the array
    cout<<"enter the array size:"<<endl;
    cin>>n;//taking array size input from the user
    int arr[n];
    
    //taking array input from user
    cout<<"enter the input array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //sorting array using insertion sort logic
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    
    //printing the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}