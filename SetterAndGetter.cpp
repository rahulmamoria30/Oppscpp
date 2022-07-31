#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    int marks;
    char grade;

public:
    void setVal(int roll, int m, char g)
    {
        roll_no = roll;
        marks = m;
        grade = g;
    }
    int getRoll()
    {
        return roll_no;
    }
    int getMarks()
    {
        return marks;
    }
    char getGrade()
    {
        return grade;
    }
    void setGrade()
    {

        if (marks > 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks > 70)
            grade = 'C';
        else if (marks > 60)
            grade = 'D';
    }
    void print()
    {
    }
};
int main()
{
    student Rahul;
    Rahul.setVal(47, 80, 'A');

    // Rahul.setGrade();

    cout << "The roll number of Rahul is: " << Rahul.getRoll() << endl;
    cout << "The marks of Rahul is: " << Rahul.getMarks() << endl;
    cout << "The grade of Rahul is: " << Rahul.getGrade() << endl;
    return 0;
}