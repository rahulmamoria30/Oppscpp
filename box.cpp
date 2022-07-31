#include <iostream>
using namespace std;
class box
{
public:
    int height;
    int width;
    int length;
    void setVal(int h, int w, int l)
    {
        height = h;
        width = w;
        length = l;
    }
    void print_vol()
    {
        int volume = height * width * length;
        cout << "The volume of box is: " << volume << endl;
    }
};
int main()
{
    box obj;
    obj.setVal(5, 10, 15);
    obj.print_vol();
    return 0;
}