#include <iostream>
using namespace std;

struct student {
    int age;
    string name;
    float grade;
};

int main() {
    student student1 = {19, "David Makena", 90.0};
    cout << "age: " << student1.age << endl;
    cout << "name: " << student1.name << endl;
    cout << "grade: " << student1.grade << endl;
    return 0;
}
