#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int temp=n;
    int revNum =0;
    while (n>0){
        int lastdigit=n%10;
        revNum =(revNum *10)+ lastdigit;
        n=n/10;
        
    }
    cout<<revNum<<endl;
    if(temp ==revNum){
        cout<<"It is a pallindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}