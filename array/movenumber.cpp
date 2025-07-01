#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int> vec1,vector<int> vec2,vector<int> vec3,int n1,int n2,int n3){
    int i=0,j=0,k=0;
    int ans;
    while(i<n1&&j<n2&&k<n3){
        if(vec1[i]==vec2[j]&& vec2[j]==vec3[k]){
            cout<<vec1[i];
            i++;
            j++;
            k++;
        }
        else if(vec1[i]<vec2[j]){
            i++;
        }
        else if(vec2[j]<vec3[k]){
            j++;
        }
        else{
            k++;
        }

    }
}
int main(){
    vector<int> vec1 {2,10,20,40,80};
    vector<int> vec2 {6,7,20,80,100};
    vector<int> vec3 {15,20,30,70,80,120};
    int n1=vec1.size(),n2=vec2.size(),n3=vec3.size();
    fun(vec1,vec2,vec3,n1,n2,n3);

}