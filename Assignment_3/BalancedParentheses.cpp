#include<iostream>
#include<string>
#include<vector>
using namespace std;
void generate(int n,int o,int c,string& r,vector<string>& s){
    if(o==n and c==n){
        s.push_back(r);
        return;
    }
    if(o<n){
        r.push_back('(');
        // adding and then calling the recursion
        generate(n,o+1,c,r,s);
        r.pop_back();
        // backtrack
    }
    if(o>c){
        r.push_back(')');
        generate(n,o,c+1,r,s);
        r.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> s={};
    string r;
    generate(n,0,0,r,s);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}