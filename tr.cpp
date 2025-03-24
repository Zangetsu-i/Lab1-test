#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления периметра
double perimeter(double a, double b, double c) {
    return a + b + c;
}

// Функция для вычисления площади по формуле Герона
double heronArea(double a, double b, double c) {
    double s = perimeter(a, b, c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Функция для проверки, является ли треугольник равнобедренным
bool isIsosceles(double a, double b, double c) {
    return (a == b || b == c || a == c);
}

int main() {
    double a, b, c;
    cout << "Введите три стороны треугольника: ";
    cin >> a >> b >> c;
    
    // Проверка, существует ли треугольник
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Периметр: " << perimeter(a, b, c) << endl;
        cout << "Площадь: " << heronArea(a, b, c) << endl;
        
        if (isIsosceles(a, b, c)) {
            cout << "Треугольник равнобедренный." << endl;
        } else {
            cout << "Треугольник не равнобедренный." << endl;
        }
    } else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }
    
    return 0;
}
