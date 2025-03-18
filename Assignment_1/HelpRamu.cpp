// Sample Input
// 1 3 7 19
// 2 3
// 2 5
// 4 4 4

// 4 3 2 1
// 1 3
// 798
// 1 2 3
// Sample Output
// 12
// 1
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int f_rikshaw=0;
    for(int i=0;i<n;i++){
        f_rikshaw+=min(a[i]*c1,c2);
    }
    f_rikshaw=min(f_rikshaw,c3);
    int f_cab=0;
    for(int i=0;i<m;i++){
        f_cab+=min(b[i]*c1,c2);
    }
    f_cab=min(f_cab,c3);
    int result=min(f_cab+f_rikshaw,c4);
    cout<<result<<endl;
}