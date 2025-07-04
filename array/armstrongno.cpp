#include<bits/stdc++.h>
using namespace std;
int armstrong(int num){
    int k = to_string(num).length();
    int sum =0;
    int n =num;
    while (n>0){
        int ld=n%10;
        sum += pow(ld,k);
        n=n/10;
    }
    return sum ==num? true:false;

}
int main(){
    int n=371;
    if(int sum = n){
        cout<<"is armstrong number"<<endl;

    }
    else{
        cout<<"is niot armstrong num"<<endl;
    }
    return 0;
}