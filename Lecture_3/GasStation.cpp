#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> gas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }
    vector<int> cost(m);
    for (int i = 0; i < m; i++)
    {
        cin >> cost[i];
    }
    int station = 0, totalgas = 0, totalcost = 0, currentgas = 0;
    for (int i = 0; i < n; i++)
    {
        totalgas += gas[i];
        totalcost += cost[i];  
        currentgas += gas[i] - cost[i];
        if(currentgas<0){
            station=i+1;
            currentgas=0;
        }
    }
    if(totalcost>totalgas){  //agar sum of gas mera sum of cost se kam hai to koi bhi valid answer hai
        cout<<-1;
    }
    else{
        cout<<station;
    }
}