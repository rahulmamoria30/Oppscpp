#include <iostream>
using namespace std;

class car
{
public:
    string name;
    int speed;

    void setVal(string carName, int carSpeed)
    {
        name = carName;
        speed = carSpeed;
    }
    void print()
    {
        cout << "The car name is: " << this->name << endl;
        cout << "The speed of car is: " << this->speed << endl;
    }
};
int main()
{
    car c;
    string name = "BMW";
    c.setVal(name, 50);
    c.print();
    return 0;
}