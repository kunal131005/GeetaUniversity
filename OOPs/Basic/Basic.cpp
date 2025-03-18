#include<iostream>
using namespace std;

// defining a new datatype
class Car{
    int price;
    int model_no;
    char name[20];
};
int main(){

    // create an object
    Car C_arr[20]; //store info about max 20 cars

    Car c;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(Car)<<endl;
}