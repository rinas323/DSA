#include<iostream>
using namespace std;
void binaryPyramid(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }cout<<endl;
    }
    
}
void arrowHead(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
     for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void numberPyramid(int n){
    int counter=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<counter++<<" ";
        }cout<<endl;
    }
}
void butterfly(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int z=1;z<=i;z++){
            cout<<"*";
        }cout<<endl;
        
    }
     for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int z=1;z<=i;z++){
            cout<<"*";
        }cout<<endl;
        
    }
}
int main(){
    int n;
    cin>>n;
    butterfly(n);
   
    return 0;
}