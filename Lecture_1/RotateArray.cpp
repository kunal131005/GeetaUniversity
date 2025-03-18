#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> num={10,20,30,40,50,60,70};
    int k;
    cin>>k;
    k=k%num.size();
    vector<int> vec;
    for(int i=num.size()-k;i<num.size();i++){
        vec.push_back(num[i]);
    }
    for(int i=0;i<num.size()-k;i++){
        vec.push_back(num[i]);
    }
    for(int ele:vec){
        cout<<ele<<" ";
    }

}