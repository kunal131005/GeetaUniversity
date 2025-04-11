#include<iostream>
#include<string>
using namespace std;

// defining a new datatype
class Car{
public: // access modifier by default all the data members are private we use public to access them outside of the class
    float price;
    int model_no;
    string name;

    float get_discount_price(float x){
        return price*(1.0-x);
    }
    
    float applied_discount_price(float x){
        price=price*(1.0-x);
        return price;
    }
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Model No. : "<<model_no<<endl;
        cout<<"Price : "<<price<<endl;
    }
};
int main(){

    // create an object

    Car c;

    // giving vlaues to the class object
    c.price=100;
    c.model_no=123;
    c.name="BMW";

    // try to print
    cout<<c.name<<" ,Model No. "<<c.model_no<<" ,Price "<<c.price<<endl;

    // function in class
    cout<<"Enter the discount:";
    float discount;
    cin>>discount;

    cout<<c.get_discount_price(discount)<<endl;
    c.applied_discount_price(discount);
    // print function for class
    c.print();

}