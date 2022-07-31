#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
    char name;

    student(int roll)
    {
        roll_no = roll;
    }
    void print()
    {
        cout << "This is a student" << endl;
    }
};

int main()
{
    student s(10);
    s.print();
    cout << s.roll_no << endl;
    return 0;
}