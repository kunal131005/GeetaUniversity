#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string result="";
    int i=0,j=1;
    while(j<s.size()){
        result+=s[i];
        result+=to_string(s[i]-s[j]);
        i++;
        j++;
    }
    result+=s[i];
    cout<<result<<endl;
}
