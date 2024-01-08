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
        cout << "������ ϲ�: ";
        cin.getline(fullName, MAX_STRING_LENGTH);

        cout << "������ ���� ����������: ";
        cin.getline(birthDate, MAX_STRING_LENGTH);

        cout << "������ ���������� �������: ";
        cin.getline(contactNumber, MAX_STRING_LENGTH);

        cout << "������ ����: ";
        cin.getline(city, MAX_STRING_LENGTH);

        cout << "������ �����: ";
        cin.getline(country, MAX_STRING_LENGTH);

        cout << "������ ����� ����������� �������: ";
        cin.getline(universityName, MAX_STRING_LENGTH);

        cout << "������ ���� ����������� �������: ";
        cin.getline(universityCity, MAX_STRING_LENGTH);

        cout << "������ ����� ����������� �������: ";
        cin.getline(universityCountry, MAX_STRING_LENGTH);

        cout << "������ ����� �����: ";
        cin.getline(groupName, MAX_STRING_LENGTH);
    }

    void display() const {
        cout << "ϲ�: " << fullName << endl;
        cout << "���� ����������: " << birthDate << endl;
        cout << "���������� �������: " << contactNumber << endl;
        cout << "̳���: " << city << endl;
        cout << "�����: " << country << endl;
        cout << "����� ����������� �������: " << universityName << endl;
        cout << "̳��� ����������� �������: " << universityCity << endl;
        cout << "����� ����������� �������: " << universityCountry << endl;
        cout << "����� �����: " << groupName << endl;
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

    cout << "�������� ����� ��������:" << endl;
    student.input();

    cout << "\n��� ��������:" << endl;
    student.display();


    cout << "\nϲ� ��������: " << student.getFullName() << endl;
    cout << "���� ���������� ��������: " << student.getBirthDate() << endl;

    return 0;
}