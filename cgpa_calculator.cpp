#include <iostream>
#include <vector>
#include <string>
using namespace std;



// Step 2: Function to convert marks to grade point
double marksToGradePoint(int marks)
{
    if (marks >= 90)
        return 4.00;
    else if (marks >= 85)
        return 3.75;
    else if (marks >= 80)
        return 3.50;
    else if (marks >= 75)
        return 3.25;
    else if (marks >= 70)
        return 3.00;
    else if (marks >= 65)
        return 2.75;
    else if (marks >= 60)
        return 2.50;
    else if (marks >= 50)
        return 2.25;
    else
        return 0.00;
}

struct course
{
    string name;
    int credit;
    string gradeletter;
    double gradepoint;
};

struct semester
{
    string semestertype;
    vector<course> courses;
    double semesterGPA;
};

int main()
{
    // Test the function
    cout << "Grade Point for 87 marks: " << marksToGradePoint(87) << endl;
    return 0;
}
