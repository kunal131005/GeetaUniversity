#include<iostream>
#include<string>
using namespace std;
void fun(string s,int i,string r){
    if(i==s.size()){
        cout<<s<<endl;
        return ;
    }

    if(i+1<s.size() and s[i]==s[i+1]){
        s.insert(i+1,"*");
        fun(s,i+2,r);
    }
    else{
        fun(s,i+1,r);
    }
}
int main(){
    string s;
    cin>>s;

    fun(s,0,"");
}