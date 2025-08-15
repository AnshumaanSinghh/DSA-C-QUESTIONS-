#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
     Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    Node *Head = NULL;
    Node *tail = NULL;
    int arr[]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        if(Head ==NULL){
            Head = new Node(arr[i]);
            tail = Head;
        }
        else{
            /*Node *tail = Head;
            while(tail->next!=NULL){
                tail = tail->next;*/ //if tail node is formed and tail =head then it will be infinite loop
                //so this method will short the code 
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
            //tail->next = new Node(arr[i]);
            //Node *temp = new Node(arr[i]);
            //temp ->next =temp;
        }
        Node  *temp =Head;
       while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
};
    }
