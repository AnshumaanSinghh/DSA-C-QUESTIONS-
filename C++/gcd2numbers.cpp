#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b){
    
    while(a>0&&b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
}
if(a==0){
    return b;
}
return a;

}
int main(){
    int a=15,b=20;
    int gcd=findGcd(a,b);
    cout<<"GCD of"<<a<<"and"<<b<<"is:"<< gcd<<endl;
    return 0;
}

