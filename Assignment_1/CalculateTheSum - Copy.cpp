// Sample Input
// 5
// 1 2 3 4 5
// 2
// 1
// 0
// Sample Output
// 60
#include <iostream>
#include <vector>
#include <algorithm>
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
    int q;
    cin >> q;
    vector<int> temp(n);
    while (q--)
    {
        int k;
        cin >> k;
        k=k%n;
        for(int i=0;i<n;i++){
            temp[i]=num[i];
        }
        reverse(temp.begin(),temp.end());
        reverse(temp.begin(),temp.begin()+k);
        reverse(temp.begin()+k,temp.end());
        for(int i=0;i<n;i++){
            num[i]+=temp[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=num[i];
    }
    cout<<sum%1000000007<<endl;
}