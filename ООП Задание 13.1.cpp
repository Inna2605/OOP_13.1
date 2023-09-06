//Создайте вектор для хранения элементов типа Point. Сохраните в этом векторе 5 элементов типа Point.
//Выведите элементы сохраненного вектора на экран.

#include <iostream>
#include<vector>
#include"Point.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Point A(5, 10);
    Point B(13, 6);
    Point C(8, 8);
    Point D(0, 0);
    Point E(1, 0);

    vector<Point> arreyPoint = { A, B, C, D, E };

    for (int i = 0; i < 5; i++) {
        cout << arreyPoint.at(i) << endl;
    }
}
