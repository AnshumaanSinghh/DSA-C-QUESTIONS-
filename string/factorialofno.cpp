// Factorial of a number
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> factorial(int n) {
        vector<int> ans(1, 1);  // Start with 1
        while (n > 1) {
            int carry = 0, res, size = ans.size();
            for (int i = 0; i < size; i++) {
                res = ans[i] * n + carry;
                ans[i] = res % 10;
                carry = res / 10;
            }
            while (carry) {
                ans.push_back(carry % 10);
                carry /= 10;
            }
            n--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> result = s.factorial(n);
    cout << "Factorial of " << n << " is: ";
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;
    return 0;
}
