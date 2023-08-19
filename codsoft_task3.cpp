#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define INT_MIN -9999999
#define INT_MAX 99999999
using namespace std;

class Student{
    public:
    string name;
    double grade;
};

int main(){
    vector<Student> stud;
    string name;
    double grade;

    cout << "Enter student name with their grades. Enter 'exit' if u want to end" << endl;

    while(true){
        cout << "Enter names : ";
        cin >> name;

        if(name == "exit"){
            break;
        }

        cout << "Enter grade of student " << name << " : ";
        cin >> grade;

        stud.push_back({name, grade}); 
    }

    double sumGrade = 0.0;
    for(auto i : stud){
        sumGrade += i.grade;
    }
    double avgGrade = sumGrade / stud.size();

    double highestGrade = INT_MIN, lowestGrade = INT_MAX;

    for(auto i : stud){
        highestGrade = max(highestGrade, i.grade);
        lowestGrade = min(lowestGrade, i.grade);
    }

    cout << "--------------- Grade Summary ---------------" << endl;

    for(auto i : stud){
        cout << "Name : " << i.name << " , Grade : " << i.grade << endl;
    }

    cout << "Average Grades are : " << avgGrade << endl;
    cout << "Highest Grades are : " << highestGrade << endl;
    cout << "Lowest Grades are : " << lowestGrade << endl;

}