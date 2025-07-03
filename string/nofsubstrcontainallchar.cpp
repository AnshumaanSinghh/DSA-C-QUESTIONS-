#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int noofsubstring(string s){
        int count[3]={0};
        int left=0,result =0;
        for(int right =0;right<s.size();right++){
            count[s[right]-'a']++;
            while(count[0]>0&&count[1]&&count[2]>0){
                result=result+s.size()-right++;
                count[s[left]-'a']--;
                left++;
            }
        }
        return result;
}
};
int main() {
    string s;
    cin >> s;
    
    solution obj;
    int res = obj.noofsubstring(s);
    
    cout << "Number of substrings containing a, b, and c: " << res << endl;
    
    return 0;
}