#include <iostream>
#include <string>

using namespace std;

class Teacher {
public:
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    void getinfo() {
        cout << "name: " << name << endl;
        cout << "salary: " << salary << endl;
    }

private:
    string name;
    string dept;
    string subject;
    double salary;
};

int main() {
    Teacher t1("abcd", "efgh", "ijkl", 100000000);
    t1.getinfo();
    return 0;
}