#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int f_Unique(string s,int n){
    vector<int> alpha(26,0);
    for(char ch:s){
        alpha[ch-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(alpha[i]!=0){
            count++;
        }
    }
    if(count==n){
        return s.size();
    }
    return -1;
}
int main(){
    string s;
    cin>>s;
    int key;
    cin>>key;
    int n=s.size();
    int max_size=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string temp="";
            for(int k=i;k<=j;k++){
                temp+=s[k];
            }
            max_size=max(max_size,f_Unique(temp,key));
        }
    }
    cout<<max_size<<endl;
}