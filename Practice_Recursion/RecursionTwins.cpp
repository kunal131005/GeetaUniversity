#include<iostream>
#include<string>
using namespace std;
int Ctwins(string s,int i){
    if(i==s.size()){
        return 0;
    }

    int count=0;
    if(i+2<s.size() and s[i]==s[i+2]){
        count++;
    }
    return count+Ctwins(s,i+1);
}
int main(){
    string s;
    cin>>s;

    cout<<Ctwins(s,0);
}