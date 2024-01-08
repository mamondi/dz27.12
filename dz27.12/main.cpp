#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Student {
private:
    static const int MAX_STRING_LENGTH = 100;
    char fullName[MAX_STRING_LENGTH];
    char birthDate[MAX_STRING_LENGTH];
    char contactNumber[MAX_STRING_LENGTH];
    char city[MAX_STRING_LENGTH];
    char country[MAX_STRING_LENGTH];
    char universityName[MAX_STRING_LENGTH];
    char universityCity[MAX_STRING_LENGTH];
    char universityCountry[MAX_STRING_LENGTH];
    char groupName[MAX_STRING_LENGTH];

public:
   
    void input() {
        cout << "Введіть ПІБ: ";
        cin.getline(fullName, MAX_STRING_LENGTH);

        cout << "Введіть дату народження: ";
        cin.getline(birthDate, MAX_STRING_LENGTH);

        cout << "Введіть контактний телефон: ";
        cin.getline(contactNumber, MAX_STRING_LENGTH);

        cout << "Введіть місто: ";
        cin.getline(city, MAX_STRING_LENGTH);

        cout << "Введіть країну: ";
        cin.getline(country, MAX_STRING_LENGTH);

        cout << "Введіть назву навчального закладу: ";
        cin.getline(universityName, MAX_STRING_LENGTH);

        cout << "Введіть місто навчального закладу: ";
        cin.getline(universityCity, MAX_STRING_LENGTH);

        cout << "Введіть країну навчального закладу: ";
        cin.getline(universityCountry, MAX_STRING_LENGTH);

        cout << "Введіть номер групи: ";
        cin.getline(groupName, MAX_STRING_LENGTH);
    }

    void display() const {
        cout << "ПІБ: " << fullName << endl;
        cout << "Дата народження: " << birthDate << endl;
        cout << "Контактний телефон: " << contactNumber << endl;
        cout << "Місто: " << city << endl;
        cout << "Країна: " << country << endl;
        cout << "Назва навчального закладу: " << universityName << endl;
        cout << "Місто навчального закладу: " << universityCity << endl;
        cout << "Країна навчального закладу: " << universityCountry << endl;
        cout << "Номер групи: " << groupName << endl;
    }

  
    const char* getFullName() const {
        return fullName;
    }

    const char* getBirthDate() const {
        return birthDate;
    }

    const char* getContactNumber() const {
        return contactNumber;
    }

    const char* getCity() const {
        return city;
    }

    const char* getCountry() const {
        return country;
    }

    const char* getUniversityName() const {
        return universityName;
    }

    const char* getUniversityCity() const {
        return universityCity;
    }

    const char* getUniversityCountry() const {
        return universityCountry;
    }

    const char* getGroupName() const {
        return groupName;
    }
};

int main() {
    Student student;

    cout << "Введення даних студента:" << endl;
    student.input();

    cout << "\nДані студента:" << endl;
    student.display();


    cout << "\nПІБ студента: " << student.getFullName() << endl;
    cout << "Дата народження студента: " << student.getBirthDate() << endl;

    return 0;
}