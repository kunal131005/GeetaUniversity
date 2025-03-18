#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void longestKSubstring(char ch[],int k){
    int len=(-1),count=0;
    int i=0;
    int freq[26]={0};
    for(int j=0;ch[j]!='\0';j++){
        freq[ch[j]-'a']++;
        if(freq[ch[j]-'a']==1){
            count++;
        }
        while(count>k){
            freq[ch[i]-'a']--;
            if(freq[ch[i]-'a']==0){
                count--;
            }
            i++;
        }
        if(count==k){
            len=max(len,j-i+1);
        }
    }
    cout<<len<<endl;
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    int k;
    cin>>k;
    longestKSubstring(a,k);
}