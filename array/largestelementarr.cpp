#include<bits/stdc++.h>
using namespace std;
int largestelement(vector<int>&arr){
    if(arr.empty()) return -1;
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cout<<"enter the no of elemnts:";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter"<<n<<"elemenst:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      int largest = largestelement(arr);
    cout << "The largest element is: " << largest << endl;

    return 0;
}
