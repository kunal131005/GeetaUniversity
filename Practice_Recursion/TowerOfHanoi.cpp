#include<iostream>
using namespace std;
void ways(int n,char src,char helper,char des){
    if(n==0)return;

    ways(n-1,src,helper,des);
    cout<<n<<" disks are moved from "<<src<<" to "<<helper<<endl;
    ways(n-1,helper,des,src);
}
int main(){
    int n;
    cin>>n;
    ways(n,'A','B','C');
}