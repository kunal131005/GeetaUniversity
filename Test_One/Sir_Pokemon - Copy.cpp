#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> ans(26, 0);
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            if(s[i]==66){
                count++;
            }
        }
        else{
            ans[s[i]-'a']++;
        }
    }
    int x1=ans[20],x2=ans[0],x3=ans[1],x4=ans[11],x5=ans[18],x6=ans[17];
    int ok=0;
    while(count>=1 and x1>=2 and x2>=2 and x3>=2 and x4>=1 and x5>=1 and x6>=1){
        ok++;
        count--;
        x1=x1-2;
        x2=x2-2;
        x3=x3-2;
        x4=x4-1;
        x5=x5-1;
        x6=x6-1;
    }
    cout<<ok<<endl;
}