#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void removeDuplicateLetters(string& s) {
    sort(s.begin(),s.end());
    int i=0,j=1;
    while(j<s.size()){
        if(s[i]!=s[j]){
            i++;
            s[i]=s[j];
        }
        j++;
    }
    s.resize(i+1);
    return;
}
// void RemoveDuplicates(char ch[]){
//     int len=strlen(ch);
//     int i=0,j=1;
//     sort(ch,ch+len);
//     while(j<len){
//         if(ch[i]!=ch[j]){
//             i++;
//             ch[i]=ch[j];
//         }
//         j++;
//     }
//     ch[i+1]='\0';
// }
int main(){
    // char a[1000];
    // cin.getline(a,1000);
    // RemoveDuplicates(a);
    string s;
    cin>>s;

    removeDuplicateLetters(s);
    cout<<s<<endl;
}