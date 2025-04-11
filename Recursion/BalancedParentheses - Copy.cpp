#include<iostream>
#include<string>
using namespace std;
void Parentheses(int n,int i,int o,int c,string r){
    if(i==2*n){
        cout<<r<<endl;
        return ;
    }

    if(o>c){
        Parentheses(n,i+1,o,c+1,r+')');
    }
    if(o<n){
        Parentheses(n,i+1,o+1,c,r+'(');
    }
}
int main(){
    int n;
    cin>>n;
    Parentheses(n,0,0,0,"");
}