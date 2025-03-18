#include<iostream>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[1000];
    char largest[1000];
    cin.ignore();
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        int length=strlen(a);
        if(m<length){
            m=length;
            strcpy(largest,a);
        }
    }
    cout<<m<<endl;
    cout<<largest<<endl;
}