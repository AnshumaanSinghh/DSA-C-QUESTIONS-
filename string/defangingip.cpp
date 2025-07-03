#include<bits/stdc++.h>
using namespace std;

int main() {
    string address;
    cin >> address;
    int index = 0;
    string ans;
    while (index < address.size()) {
        if (address[index] == '.')
            ans = ans + "[.]";
        else
            ans = ans + address[index];
        index++;
    }
    cout << ans << endl;  
    return 0;            
}
