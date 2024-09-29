/*this is a shortcut way
#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    
    int sum=n*(n+1)/2;
    cout<<"sum of n numbers is:"<<sum<<endl;

}
  int main(){
    solve(4);
  }
  */
//functional way off  solving the problem
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
  if (n==0) return 0;
  return n+sum(n-1);
}
int main(){
  int n=4;
  cout << sum(n);
  return 0;
}

