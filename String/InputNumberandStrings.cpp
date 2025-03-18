#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[1000];
    // cin.ignore();
    cin.get(); //Ignore the "\n" after taking input of number n
    // We reas the ip pointing value but we did not stor it anywhere ,thus ignored
    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);
        cout<<a<<endl;
    }
}