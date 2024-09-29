//printing numbers from 0 to 8
#include<bits/stdc++.h>
using namespace std;
   int cnt=0;
    void print(){
     if(cnt == 8)
     return;
     cout<<cnt<<endl;
     cnt ++;
     print();
}


int main(){
    print();
    return 0;
}
