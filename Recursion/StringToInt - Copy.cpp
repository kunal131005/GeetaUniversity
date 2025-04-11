#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int Int(string s,int n){
    // base case
    if(n==0)return 0;
    // recursive case
    int result=s[n-1]-'0';
    int sa=Int(s,n-1);
    int ba=sa*10+result;
    return ba;
}
int main(){
    string s;
    cin>>s;
    cout<<Int(s,s.size())<<endl;
}