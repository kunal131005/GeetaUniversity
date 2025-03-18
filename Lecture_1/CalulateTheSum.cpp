#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
    int q;
    cin>>q;
    while(q--){
      int x;
      cin>>x;
      x=x%n;
      vector<int> temp(n);
      for(int i=0;i<n;i++){
        temp[i]=a[i];
      }
      reverse(a.begin(),a.end());
      reverse(a.begin(),a.begin()+x);
      reverse(a.begin()+x,a.end());
      for(int i=0;i<n;i++){
        a[i]=a[i]+temp[i];
      }
    }
    int sum=0;
    for(int i=0;i<n;i++){
      sum=sum+a[i];
    }
    cout<<sum%(1000000007)<<endl;
    
}