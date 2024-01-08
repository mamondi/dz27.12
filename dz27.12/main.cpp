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
        cout << "Введіть координату x: ";
        cin >> x;

        cout << "Введіть координату y: ";
        cin >> y;

        cout << "Введіть координату z: ";
        cin >> z;
    }

    void display() const {
        cout << "Координати точки: (" << x << ", " << y << ", " << z << ")" << endl;
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
            cout << "Дані успішно збережено у файл." << endl;
        }
        else {
            cerr << "Помилка відкриття файлу для збереження." << endl;
        }
    }

    void loadFromFile(const string& fileName) {
        ifstream inFile(fileName);

        if (inFile.is_open()) {
            inFile >> x >> y >> z;
            inFile.close();
            cout << "Дані успішно завантажено з файлу." << endl;
        }
        else {
            cerr << "Помилка відкриття файлу для завантаження." << endl;
        }
    }
};

int main() {
    Point point;

    cout << "Введення даних точки:" << endl;
    point.input();

    cout << "\nДані точки:" << endl;
    point.display();


    point.saveToFile("point_data.txt");

   
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

   
    cout << "\nЗавантажені дані точки:" << endl;
    loadedPoint.display();

    return 0;
}