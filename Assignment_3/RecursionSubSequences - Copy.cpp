#include<iostream>
#include<string>
using namespace std;
int count=0;
void subsequence(string s,int n,string r,int i,int j){
    if(i==n){
        cout<<r<<" ";
        count++;
        return ;
    }

    subsequence(s,n,r,i+1,j);
    r+=s[i];
    subsequence(s,n,r,i+1,j+1);

}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    subsequence(s,n,"",0,0);
    cout<<endl;
    cout<<count<<endl;
}