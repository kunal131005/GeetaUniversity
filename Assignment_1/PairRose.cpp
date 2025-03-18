// Sample Input
// 2
// 2
// 40 40
// 80

// 5
// 10 2 6 8 4
// 10
// Sample Output
// Deepak should buy roses whose prices are 40 and 40.
// Deepak should buy roses whose prices are 4 and 6.
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    int m;
    cin >> m;
    int min_diff = INT_MAX;
    vector<int> result;
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = p[i] + p[j];
        int diff = abs(p[i] - p[j]);
        if (sum == m)
        {
            if (diff < min_diff)
            {
                min_diff = diff;
                result.clear();
                result.push_back(p[i]);
                result.push_back(p[j]);
            }
            else if (min_diff == diff)
            {
                result.push_back(p[i]);
                result.push_back(p[j]);
            }
            i++;
            j--;
        }
        else if(sum>m){
            j--;
        }
        else{
            i++;
        }
    }
    cout << "Deepak should buy roses whose prices are " << result[0] << " " << "and " << result[1] << ".";
    cout << endl;
}