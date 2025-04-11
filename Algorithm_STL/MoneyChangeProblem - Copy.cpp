#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
bool compare(int a, int b)
{
    return a <= b;
}
int main()
{
    // int coins[] = {1, 2, 5, 10, 20, 50, 100};
    vector<int> coins={186,419,83,408};
    sort(coins.begin(),coins.end());
    int n = coins.size();
    int money;
    cin >> money; // 25
    int count=0;
    while (money > 0)
    {
        int index = lower_bound(coins.begin(), coins.end(), money, compare) - coins.begin() - 1; // before compare this is working for >=k but we want this to work for k<=
        // cout<<"Exchange Coins:"<<coins[index]<<endl;
        cout<<index<<endl;
        //25-20=5
        money-=coins[index];
        count++;
    }
    // cout<<count<<endl;
}