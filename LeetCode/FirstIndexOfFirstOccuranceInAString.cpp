#include <iostream>
#include <string>
using namespace std;
int main()
{
    string haystack;
    cin >> haystack;
    string needle;
    cin >> needle;
    int n = haystack.size();
    int m = needle.size();
    for(int i=0;i<=n-m;i++){
        int j=0;
        while(j<m and haystack[i+j]==needle[j]){
            j++;
        }
        if(j==m){
            cout<<i<<endl;
            break;
        }
    }
    cout<<-1<<endl;
}