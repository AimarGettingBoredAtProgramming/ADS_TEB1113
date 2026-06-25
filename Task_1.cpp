#include<iostream>

using namespace std;

int main(){

    char choice;
    struct Student{
        int ID; string name; string course; int age;
    };

    Student student[5];

    student[0] = {24006517, "Aimar Zufayri", "CS", 20};
    student[1] = {24006507, "Aqil", "CS", 20};
    student[2] = {24005785, "Ahmad Ammir Harees", "CS", 67};
    student[3] = {24006225, "Muaz Kamil", "CS", 20};
    student[4] = {24004552, "Lewin Khoo", "CS", 20};

    cout << " ----- STUDENT INFORMATION ----- " << endl;
    cout << "Type the following letters in capital letters to operate the program: " << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "D: Display all students' information" << endl;
    cout << "S: Search for a student with designated ID" << endl;
    cout << "C: Change a student's information with designated ID" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Enter your choice: "; cin >> choice;
    cout << "-----------------------------------------------------------------------" << endl;

    if (choice == 'D'){
        for (int i = 0; i < 5; i++){
            cout << "ID: " << student[i].ID << endl;
            cout << "Name: " << student[i].name << endl;
            cout << "Course: " << student[i].course << endl;
            cout << "Age: " << student[i].age << endl;
            cout << endl;
        }
    }

    else if (choice == 'S'){
        int searchID; 
        cout << "Search for student with designated ID: "; cin >> searchID;
    
        for (int j = 0; j < 5; j++){
            if (student[j].ID == searchID){
                cout << "ID: " << student[j].ID << endl;
                cout << "Name: " << student[j].name << endl;
                cout << "Course: " << student[j].course << endl;
                cout << "Age: " << student[j].age << endl;
            }
        }
        
    }

    else if (choice == 'C'){
        int changeID;
        cout << "Change student information with designated ID: "; cin >> changeID;
        for (int k = 0; k < 5; k++){
            if (student[k].ID == changeID){
                cout << "Enter new name: " << endl; cin >> student[k].name;

                cout << "UPDATED STUDENT DETAILS" << endl;
                cout << "ID: " << student[k].ID << endl; 
                cout << "Name: " << student[k].name << endl;
                cout << "Course: " << student[k].course << endl;
                cout << "Age: " << student[k].age << endl;
            }
        }
    }

    else {
        cout << "Program Exited" << endl;
    }

    return 0;
}