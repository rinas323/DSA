#include<iostream>
#include<climits>
using namespace std;
int FindMinElement(int arr[],int n);
int FindMaxElement(int arr[],int n);
int FindMinElement(int arr[],int n){
  int mn=INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<mn){
      mn=arr[i];
    }
  }
  return mn;
}

int FindMaxElement(int arr[],int n){
  int mx=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>mx){
      mx=arr[i];

    }
  }
  return mx;
}


int main(){
  int n;
  cout<<"enter the size of the array:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter the elements of the array:"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int minElement=FindMinElement(arr,n);
  int maxElement=FindMaxElement(arr,n);
  cout<<"The minimum element in the array is "<<minElement<<endl;
  cout<<"The maximum element in the arra is "<<maxElement<<endl;
  return 0;
}
