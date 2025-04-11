#include<iostream>
#include<string>
using namespace std;
void GBS(string s,int i,string r){
    if(i==s.size()){
        cout<<s<<" ";
        return ;
    }
    if(s[i]=='?'){
        s[i]='0';
        GBS(s,i+1,r);

        s[i]='1';
        GBS(s,i+1,r);
    }
    else{
        GBS(s,i+1,r);
    }
}
int main(){
    string s;
    cin>>s;

    GBS(s,0,"");
}