#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int mi=num[0],ans=0;
    for(int i=1;i<n;i++){
        int profit=num[i]-mi;
        if(mi>num[i]){
            mi=num[i];
        }
        ans=max(profit,ans);
    }
    cout<<ans;
    // Brute Force
    /*int ans=0;
    for(int i=0;i<n-1;i++){
        int pur=num[i];
        for(int j=i+1;j<n;j++){
            int c_pur=num[j];
            int profit=c_pur-pur;
            ans=max(profit,ans);
        }
    }
    cout<<ans;*/
}