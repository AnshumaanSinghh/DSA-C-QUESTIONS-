//sort vowel in a string 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortvowels(string s) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                lower[s[i] - 'a']++;
                s[i] = '#';
            } else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                upper[s[i] - 'A']++;
                s[i] = '#';
            }
        }

        string vowel;
        for (int i = 0; i < 26; i++) {
            char c = 'A' + i;
            while (upper[i]--) {
                vowel += c;
            }
        }
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            while (lower[i]--) {
                vowel += c;
            }
        }

        int first = 0, second = 0;
        while (second < vowel.size()) {
            if (s[first] == '#') {
                s[first] = vowel[second];
                second++;
            }
            first++;
        }

        return s;
    }
};
int main() {
    Solution sol;
    string input = "Leetcode";
    cout << sol.sortvowels(input) << endl;  // Output: "Leotcede"
    return 0;
}
