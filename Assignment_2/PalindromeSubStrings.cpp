#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main() {

	string str;
	cin>>str;
	int n=str.size();
	int count=0;
	for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string temp="";
            for (int k = i; k <= j; k++)
            {
                temp+=str[k];
            }
            cout<<temp<<endl;
            if(isPalindrome(temp)){
              count++;
            }
        }
    }
    cout<<count<<endl;
}