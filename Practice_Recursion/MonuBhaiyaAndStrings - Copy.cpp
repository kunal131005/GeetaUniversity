#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
void RemoveDuplicatesWithLexioGraphyOrder(string s,int i,string& r,unordered_map<char,int>& map,unordered_map<char,bool>& track){
    if(i==s.size()){
        // cout<<r<<endl;
        return;
    }
    char ch=s[i];
    if(track[ch]){
        RemoveDuplicatesWithLexioGraphyOrder(s,i+1,r,map,track);
        return ;
    }
    while(!r.empty() and r.back()>ch and map[r.back()]>i){
        track[r.back()]=false;
        r.pop_back();
    }
    track[ch]=true;
    r.push_back(ch);
    RemoveDuplicatesWithLexioGraphyOrder(s,i+1,r,map,track);
}
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> map;
    unordered_map<char,bool> track;
    for(int i=0;i<s.size();i++){
        map[s[i]]=i;
        track[s[i]]=false;
    }
    string r="";
    RemoveDuplicatesWithLexioGraphyOrder(s,0,r,map,track);
    cout<<r<<endl;
}