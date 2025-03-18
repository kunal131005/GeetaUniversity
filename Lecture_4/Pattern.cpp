#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        if (i == 1)
        {
            cout << "* ";
            for (int j = 2; j <= 3; j++)
            {
                cout << "  ";
            }
            for (int j = 4; j <= 7; j++)
            {
                cout << "* ";
            }
        }
        if (i == 2)
        {
            for (int j = 1; j <= 7; j++)
            {
                if (j == 1 || j == 4)
                {
                    cout << "* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        if(i==3){
            for (int j = 1; j <= 7; j++)
            {
                if (j == 1 || j == 4)
                {
                    cout << "* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        if (i == 4)
        {
            for (int j = 1; j <= 7; j++)
            {
                cout << "* ";
            }
        }
        if(i==5){
            for(int j=1;j<=7;j++){
                if(j==4 || j==7){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        if(i==6){
            for(int j=1;j<=7;j++){
                if(j==4 || j==7){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl; 
        if(i==7){
            for (int j = 1; j <= 4; j++)
            {
                cout<<"* ";
            }
            for(int j=5;j<=7;j++){
                if(j==7){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
    }
}