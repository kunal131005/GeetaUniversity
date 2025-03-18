#include<iostream>
using namespace std;
void towerofhanoi(int n,char src,char dest,char helper){
    // base case
    if(n==0)return;

    // recursive case
    // first move n-1 disks from a to b
    towerofhanoi(n-1,src,helper,dest);
    cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;

    towerofhanoi(n-1,helper,dest,src);

}
int main(){
    int n;
    cin>>n;
    towerofhanoi(n,'A','B','C');
}