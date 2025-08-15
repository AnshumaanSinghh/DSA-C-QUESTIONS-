//delete first node
/*
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
Node* createll(int arr[],int index,int size){
    if(index == size)
    return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createll(arr,index+1,size);
    return temp;
}
int main(){
    Node *Head ;
    Head = NULL;
    
    int arr[]={2,4,6,1,7};
    Head =createll(arr,0,5);
    //delete a node 
    if(Head!=NULL){
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }



//print the value

while(Head){
    cout<<Head->data<<" ";
    Head = Head->next;
}

Node  *temp =Head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
};
}

*/

//Delete the xth node from singly ll and int x
/*
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

Node* deletenode(Node *head,int x){
    if(x==1){
    Node *temp = head;
    head =head->next;
    delete temp;
    return head;
    }
    x--;
    Node *curr = head;
    Node *prev = NULL;
    while(x--){
        prev = curr;
        curr=curr->next;
    }
    prev->next = curr->next;
    delete curr;
    return head;
    }
    */
   //Delete the last Node
// Delete the last Node
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* createll(int arr[], int index, int size) {
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createll(arr, index + 1, size);
    return temp;
}

int main() {
    Node *Head = NULL;
    
    int arr[] = {2, 4, 6, 1, 7};
    Head = createll(arr, 0, 5);

    if (Head != NULL && Head->next == NULL) {
        // Only one node is present
        /*delete Head;
        Head = NULL;
        */
        // or you can use another method for this condition
        delete Head;
        Head = NULL;
    }
    // More than 1 node is present
    else if (Head != NULL) {
        Node *curr = Head;
        Node *prev = NULL;
        // Move till the last node
        while (curr->next != NULL) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL; // Remove link to last node
        delete curr;       // Delete last node
    }

    // Display remaining list (for checking)
    Node *temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}


