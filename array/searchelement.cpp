#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int search(int arr[],int N,int X){
        for(int i =0;i<N;i++){
           if(arr[i]==X)
           return i; 
        }
        return -1;
    }
};

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr)/sizeof(arr[0]);
    int X = 30;
    Solution obj;
    int result = obj.search(arr, N, X);
    if(result !=-1)
    cout<<"element found at index:"<<result<<endl;
    else
    cout<<"elemenet not found."<<endl;
    return 0;
    }

