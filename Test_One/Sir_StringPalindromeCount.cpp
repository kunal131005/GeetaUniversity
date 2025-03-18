#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// bool isPalindrome(string s){
//     int i=0,j=s.size()-1;
//     while(i<j){
//         if(s[i]!=s[j]){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
int fun(string s,int start,int end){
    int n=s.size();
    int count=0;
    while(start>=0 and end<n and s[start]==s[end] ){
        count++;
        start--;
        end++;
    }
    return count;
}
int main(){
    string s;
    cin>>s;
    int count=0;
    // O(n2)
    // for(int len=1;len<=s.size();len++){
    //     for(int pos=0;pos<=s.size()-len;pos++){
    //         string temp=s.substr(pos,len);
    //         if(isPalindrome(temp)){
    //             count++;
    //         }
    //     }
    // }
    int n=s.size();
    for(int i=0;i<n;i++){
        count+=fun(s,i,i);
        count+=fun(s,i,i+1);
    }
    cout<<count<<endl;
}