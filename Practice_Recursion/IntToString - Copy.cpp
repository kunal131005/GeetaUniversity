#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<string> key={"zero","one","two","three","four","five","six","seven","eight","nine"};
void change(int n,vector<string>& result){
    if(n==0){
        return ;
    }

    int digit=n%10;
    result.push_back(key[digit]);
    change(n/10,result);
}
int main(){
    int n;
    cin>>n;
    vector<string> result;
    change(n,result);

    reverse(result.begin(),result.end());
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}