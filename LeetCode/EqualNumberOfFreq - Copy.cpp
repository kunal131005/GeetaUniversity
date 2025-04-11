#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool areOccurrencesEqual(string s) {
    vector<int> freq(26,0);
    for(char ch:s){
        freq[ch-'a']++;
    }
    int f_freq=0;
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            f_freq=freq[i];
            if(f_freq!=freq[i+1]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;

    areOccurrencesEqual(s);
}