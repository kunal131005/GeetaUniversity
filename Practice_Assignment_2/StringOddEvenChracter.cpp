#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            s[i]=s[i]+1;
        }
        else{
            s[i]=s[i]-1;
        }
    }
    cout<<s<<endl;
}