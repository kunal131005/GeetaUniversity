#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string result="";
    int i=0,j=1,count=1;
    while(j<s.size()){
        if(s[i]==s[j]){
            count++;
        }
        else{
            result+=s[i];
            result+=to_string(count);
            count=1;
            i=j;
        }
        j++;
    }
    result+=s[i];
    result+=to_string(count);
    cout<<result<<endl;
}