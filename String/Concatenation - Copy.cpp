#include<iostream>
#include<cstring>
using namespace std;
void Concat(char a[],char b[]){
    int i=strlen(a);
    for(int j=0;j<=strlen(b);j++){
        a[i]=b[j];
        i++;
    }
    cout<<a<<endl;
}
int main()
{
    char s1[1000];
    cin.getline(s1,1000);
    char s2[1000];
    cin.getline(s2,1000);
    // cout<<s1<<" "<<s2<<endl;
    Concat(s1,s2);
}
