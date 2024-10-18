#include <iostream>
using namespace std;

//forward declarations of functions and struct node
struct node;
node* createLL();
void printLL(node* head);

//definition of struct node
struct node{
    int data;
    node* next;
};

//function to create a linked list
node* createLL(){
    int n;
    cout<<"enter the number of nodes to be created:"<<endl;
    cin>>n;
    
    node* head=NULL;
    node* temp=NULL;
    for(int i=0;i<n;i++){
        
        
        if(head==NULL){
            int value;
            cin>>value;
            node* newnode=new node();
            newnode->data=value;
            head=newnode;
            temp=newnode;
            continue;
            
        }
        int value;
        cin>>value;
        node* newnode=new node();
        newnode->data=value;
        temp->next=newnode;
        temp=newnode;
        
        
    }
    return head;
    
}

//function to print linked list
void printLL(node* head){
    node* temp;
    temp=head;
    while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main() {
    node* head=createLL();
    printLL(head);
    return 0;
    
}
