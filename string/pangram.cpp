//a to z all charcaters present in string 
#include<bits/stdc++.h>
using namespace std;

bool ispangram(string sentence){
    vector<bool>alpha(26,0);
        for (int i=0;i<sentence.size();i++){
            alpha[sentence[i]-'a']=1;
        }
        for(int i =0;i<26;i++){
            if(alpha[i]==0){
                return 0;
        }
        return 1;
  
  }
};
//recursion part now main part
int main() {
    string sentence;
    getline(cin, sentence); // Read full line including spaces
    if (ispangram(sentence))
        cout << "Pangram" << endl;
    else
        cout << "Not Pangram" << endl;
    return 0;
}

