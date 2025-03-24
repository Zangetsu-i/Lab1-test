#include <iostream>
#include <cmath>

using namespace std;

class Rectangle {
private:
    double length, width;

public:
    // Конструктор
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Вычисление периметра
    double getPerimeter() {
        return 2 * (length + width);
    }

    // Вычисление площади
    double getArea() {
        return length * width;
    }

    // Вычисление длины диагонали
    double getDiagonal() {
        return sqrt(length * length + width * width);
    }

    // Вывод результатов
    void display() {
        cout << "Периметр: " << getPerimeter() << endl;
        cout << "Площадь: " << getArea() << endl;
        cout << "Длина диагонали: " << getDiagonal() << endl;
    }
};

int main() {
    double length, width;
    
    // Ввод данных
    cout << "Введите длину прямоугольника: ";
    cin >> length;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    // Создание объекта класса Rectangle
    Rectangle rect(length, width);

    // Вывод результатов
    rect.display();

    return 0;
}
