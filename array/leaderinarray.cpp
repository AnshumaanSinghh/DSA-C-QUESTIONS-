#include<bits/stdc++.h>
using namespace std;
vector<int> printLeaders(int arr[], int n) {
  vector<int> ans;
 // Last element of an array is always a leader,
 // push into ans array.
 int max = arr[n - 1];
 ans.push_back(arr[n-1]);
  // Start checking from the end whether a number is greater
  // than max no. from right, hence leader.
  for (int i = n - 2; i >= 0; i--)
    if (arr[i] > max) {
      ans.push_back(arr[i]);
      max = arr[i];
    }
  return ans;
}
int main() {
     // Array Initialization.
  int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeaders(arr,n);
  for(int i = ans.size()-1;i>=0;i--){
      
      cout<<ans[i]<<" ";
  }
  cout<<endl;
  return 0;
}

// another method
/*
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> result;
        int n = arr.size();

        if (n == 0) return result; // Edge case: empty array

        // Start from the rightmost element
        int maxRight = arr[n - 1];
        result.push_back(maxRight);

        // Traverse the array from right to left
        for (int i = n - 2; i >= 0; --i) {
            if (arr[i] >= maxRight) {
                maxRight = arr[i];
                result.push_back(maxRight);
            }
        }

        // Reverse the result to maintain left-to-right order
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = solution.leaders(arr);

    cout << "Leaders: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}
   */
// int main same for this also