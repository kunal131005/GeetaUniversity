#include <iostream>
#include <string>
using namespace std;
// Access Specifiers - public(access for outside the class) ,private(for inside the class only)
class Car
{
private:
    float price;
public:
    int model_no;
    string name;

    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Model No. : " << model_no << endl;
        cout << "Price : " << price << endl;
    }

    // getter setter
    void set_price(float p){
        float msp=100;
        if(p>0){
            price=p;
        }
        else{
            price=msp;
        }
    }
    float get_price(){
        return price;
    }

};
int main()
{
    // create an object
    Car c;

    c.model_no = 123;
    c.name = "BMW";
    c.set_price(40);
    c.print();
}