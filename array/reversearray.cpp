#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,3,4,5,6,9};
    int start =0,end =5;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<6;i++)
    cout<<arr[i]<<"";
    return 0;
};
/*

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare array with size 'n'

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Take input
    }

    // Reverse logic using two-pointer method
    int start = 0, end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/