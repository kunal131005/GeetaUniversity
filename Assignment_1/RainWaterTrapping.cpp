#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> bar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bar[i];
    }
    vector<int> l(n);
    int f_b = bar[0];
    for (int i = 0; i < n; i++)
    {
        if(f_b<bar[i]){
            f_b=bar[i];
        }
        l[i]=f_b;
        
    }
    vector<int> r(n);
    int r_b = bar[n-1];
    for (int i = n-1; i >=0; i--)
    {
        if(r_b<bar[i]){
            r_b=bar[i];
        }
        r[i]=r_b;
        
    }
    for (int i = 0; i < n; i++)
    {
        bar[i] = min(l[i], r[i]) - bar[i];
    }
    int result = 0;
    for (int ele : bar)
    {
        result += ele;
    }
    cout << result << endl;
}