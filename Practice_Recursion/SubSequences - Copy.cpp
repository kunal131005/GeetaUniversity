#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subseq(string s,int i,string r){
    if(i==s.size()){
        cout<<r<<" ";
        return;
    }

    subseq(s,i+1,r);
    r.push_back(s[i]);
    subseq(s,i+1,r);
}
int main(){
    string s;
    cin>>s;
    subseq(s,0,"");
}