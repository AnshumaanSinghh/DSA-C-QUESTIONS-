#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node  *next;
    Node(int value){
        data = value;
        next = NULL;
        }
};
/*
Node* createll(int arr[],int index,int size){
    //Base case
    if(index == size)
    return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next =createll(arr,index+1,size);
    return temp;
}

int main(){
    Node *Head;
    Head=NULL;
    int arr[] = {1,2,3,4,5};

    Head = createll(arr,0,5);
    Node *temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        }
}
*/

//insert at beginning using recursion

Node* createll(int arr[],int index,int size,Node *prev){
    if(index == size)
    return prev;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return createll(arr,index+1,size,temp);
}
int main(){
    Node *Head ;
    Head = NULL;
    
    int arr[]={9,2,4,6,8};
    Head =createll(arr,0,5,Head);
//print the value

Node  *temp =Head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
};
} 