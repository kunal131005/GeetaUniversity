#include<iostream>
#include<string>
using namespace std;
bool isSubsequence(string s, string t) {
    int i=0,j=0;
    // i for t and j for s
    while(i<t.size() and j<s.size()){
        if(t[i]==s[j]){
            j++;  //if the char is matches we move j further
        }
        i++;  // if the condition is not satisfies we move to further i
    }
    return j==s.size();  // after all the process if j reaches to s.size() we found the answer
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    cout<<isSubsequence(s,t);
}