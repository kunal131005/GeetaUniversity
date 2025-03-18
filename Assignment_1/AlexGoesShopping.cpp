// Sample Input
// 4
// 100 200 400 100
// 6
// 100 2
// 200 3
// 500 4
// 600 4
// 800 4
// 1200 1
// Sample Output
// Yes
// Yes
// No
// No
// Yes
// Yes
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int q;
    cin>>q;
    while(q--){
        int a,k;
        cin>>a>>k;
        int count=0;
        for(int i=0;i<n;i++){
            if(a%p[i]==0){
                count++;
            }
        }
        if(count>=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}