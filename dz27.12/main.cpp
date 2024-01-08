#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

class Point {
private:
    static const int MAX_STRING_LENGTH = 100;
    double x;
    double y;
    double z;

public:
    void input() {
        cout << "������ ���������� x: ";
        cin >> x;

        cout << "������ ���������� y: ";
        cin >> y;

        cout << "������ ���������� z: ";
        cin >> z;
    }

    void display() const {
        cout << "���������� �����: (" << x << ", " << y << ", " << z << ")" << endl;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double getZ() const {
        return z;
    }

    void saveToFile(const string& fileName) const {
        ofstream outFile(fileName);

        if (outFile.is_open()) {
            outFile << x << " " << y << " " << z;
            outFile.close();
            cout << "��� ������ ��������� � ����." << endl;
        }
        else {
            cerr << "������� �������� ����� ��� ����������." << endl;
        }
    }

    void loadFromFile(const string& fileName) {
        ifstream inFile(fileName);

        if (inFile.is_open()) {
            inFile >> x >> y >> z;
            inFile.close();
            cout << "��� ������ ����������� � �����." << endl;
        }
        else {
            cerr << "������� �������� ����� ��� ������������." << endl;
        }
    }
};

int main() {
    Point point;

    cout << "�������� ����� �����:" << endl;
    point.input();

    cout << "\n��� �����:" << endl;
    point.display();


    point.saveToFile("point_data.txt");

   
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

   
    cout << "\n���������� ��� �����:" << endl;
    loadedPoint.display();

    return 0;
}