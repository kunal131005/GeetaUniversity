#include<iostream>
#include<string>
using namespace std;
void ReplacePi(string& s,int i){
    // base case
    if(i>=s.length()-1)return;

    // recursive case
    if(s[i]=='p' and s[i+1]=='i'){
        s.replace(i,2,"3.14");
        //then ask the recursion to solve the smaller string
        ReplacePi(s,i+4);
    }
    else{
        // then ask recursion to solve the smaller string
        ReplacePi(s,i+1);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ReplacePi(s,0);
        cout<<s<<endl;
	}
}