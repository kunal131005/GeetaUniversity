#include<iostream>
#include<string>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string result="";
		for(int i=0;i<s.size();i++){
			int j=i+1;
			if(s[i]=='p' and s[j]=='i'){
				result+="3.14";
			}
			else{
				if(s[i]!='i'){
					result+=s[i];
				}
			}
		}
		cout<<result<<endl;
	}
}