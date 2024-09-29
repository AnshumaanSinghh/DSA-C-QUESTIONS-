/*#include<bits/stdc++.h>
using namespace std;
void printarray(int ans[],int n){
    cout<<"the rev array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}
void revarray(int arr[],int n){
    int ans[n];
    for (int i=n-1;i>=0;i--){
        ans[n-i-1]=arr[i];
    }
    printarray(ans,n);
}
int main(){
    int n=5;
    int arr[]={5,4,3,2,1};
    revarray(arr,n);
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
void f(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    f(0,arr,n);
    for(int i=0;i<n;i++) cout<< arr[i]<<"";
    return 0;
}
