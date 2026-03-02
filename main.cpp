#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string indexNumber;
    string name;
    string program;
};

void addStudent() {
    ofstream file("students.txt", ios::app);
    Student s;

    cout << "Index Number: ";
    cin >> s.indexNumber;
    cin.ignore();
    cout << "Name: ";
    getline(cin, s.name);
    cout << "Program: ";
    getline(cin, s.program);

    file << s.indexNumber << "," << s.name << "," << s.program << endl;
    file.close();
}

void viewStudents() {
    ifstream file("students.txt");
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}
class AttendanceSession {
public:
    string courseCode;
    string date;
    string startTime;
    int duration;
};
int main() {
    addStudent();
    viewStudents();
    return 0;
}
