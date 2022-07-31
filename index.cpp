#include <iostream>
using namespace std;

class car
{
public:
    int price;
    char color;

    void setPrice(int p)
    {
        price = p;
    }
    void setColor(char c)
    {
        color = c;
    }
    void print()
    {
        cout << "This is a car" << endl;
    }
};
int main()
{
    car a;
    a.setPrice(10);
    a.setColor('R');

    cout << a.price << endl;
    cout << a.color << endl;
    a.print();

    return 0;
}