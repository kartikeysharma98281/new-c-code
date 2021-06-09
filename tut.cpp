#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1 , public Base2{
    public:
    void show_data(){
        cout<<"The value of base1 is "<<base1int<<endl;
        cout<<"The value of base2 is "<<base2int<<endl;
        cout<<"The sum of both the base class are "<<base1int + base2int<<endl;
    }
};
int main()
{    Derived A;
     A.set_base1int(12);
     A.set_base2int(15);
     A.show_data();

    return 0;
}