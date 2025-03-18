#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int col = (2 * n - 1);
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            cout << i << " ";
        }
        for(int i=j+1;i<=col-j;i++){
            cout<<"  ";
        }
        for(int i=j;i>=1;i--){
            if(j!=n){
                cout<<i<<" ";
            }
            else{
                int x=i-1;
                if(x>0){
                    cout<<x<<" ";
                }
            }
        }
        cout << endl;
    }
}