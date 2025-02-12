#include <iostream>
#include <vector>
#include "student.h"
#include <algorithm>
using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;
    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        Student s("",0);
        string name;
        int age;
        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.

            cout<<"Student name ?"<<endl;
            cin>>name;
            s.setName(name);
            cout<<"Student age ?"<<endl;
            cin>>age;
            s.setAge(age);
            studentList.push_back(s);
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for (auto& Student : studentList) {
                Student.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),
                 [](Student& a, Student& b) {
                     return a.getName() < b.getName();
                 });
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(),
                 [](Student& a, Student& b) {
                     return a.getAge() < b.getAge();
                 });
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout<<"Student to be found name = ?"<<endl;
            cin>>name;
            auto it = find_if(studentList.begin(),studentList.end(),
                              [&name](Student& student){
                return student.getName() == name;
            });
            if(it != studentList.end()) {
                cout<<"Student found:"<<endl;
                it->printStudentInfo();
            }
            else{
                cout<<"Student not found"<<endl;
                }
        }
            break;
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}
