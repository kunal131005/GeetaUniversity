#include<iostream>
#include<string>
using namespace std;
void subsequenceCount(string& s,int n,int i,int j,string r,string& t,long long& count){
    if(i==n){
        if(t==r){
            count++;
        }
        return ;
    }

    subsequenceCount(s,n,i+1,j,r,t,count);
    r+=s[i];
    subsequenceCount(s,n,i+1,j+1,r,t,count);
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int n=s.size();
    long long count=0;
    subsequenceCount(s,n,0,0,"",t,count);
    cout<<count<<endl;
}