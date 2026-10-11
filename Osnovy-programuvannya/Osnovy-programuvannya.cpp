#include <iostream>
#include "windows.h"
#include <cstdio>
using namespace std;

int main()
{
    // Змінено для лабораторної роботи №6
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //2.1 A)
    {
        cout << "2.1 A) Вхідні дані задані у програмі" << endl;
        int a = 100, b = 250, p = 20;

        double newA = a * (1 + p / 100.0);
        double newB = b * (1 + p / 100.0);

        cout << "Ціна 1го товару: " << a << endl;
        cout << "Нова ціна 1го товару: " << newA << endl;
        cout << "Ціна 2го товару: " << b << endl;
        cout << "Нова ціна 2го товару: " << newB << endl;
    }

    //2.1 B)
    {
        cout << "\n2.1 B) Вхідні дані задаються користувачем" << endl;
        int a, b, p;

        cout << "Укажіть ціну 1го товару: ";
        cin >> a;
        cout << "Укажіть ціну 2го товару: ";
        cin >> b;
        cout << "Укажіть відсоток: ";
        cin >> p;

        double newA = a * (1 + p / 100.0);
        double newB = b * (1 + p / 100.0);

        cout << "\nЦіна 1го товару: " << a << endl;
        cout << "Нова ціна 1го товару: " << newA << endl;
        cout << "Ціна 2го товару: " << b << endl;
        cout << "Нова ціна 2го товару: " << newB << endl;
    }

    //2.2 A)
    {
        cout << "\n2.2 A) Вхідні дані задані у програмі" << endl;
        int a = 100, b = 250, p = 20;

        double newA = a * (1 + p / 100.0);
        double newB = b * (1 + p / 100.0);

        printf("Ціна 1го товару: %d\n", a);
        printf("Нова ціна 1го товару: %.2f\n", newA);
        printf("Ціна 2го товару: %d\n", b);
        printf("Нова ціна 2го товару: %.2f\n", newB);
    }

    //2.2 B)
    {
        cout << "\n2.2 B) Вхідні дані задаються користувачем" << endl;
        int a, b, p;

        printf("Укажіть ціну 1го товару: ");
        scanf_s("%d", &a);
        printf("Укажіть ціну 2го товару: ");
        scanf_s("%d", &b);
        printf("Укажіть відсоток: ");
        scanf_s("%d", &p);

        double newA = a * (1 + p / 100.0);
        double newB = b * (1 + p / 100.0);

        printf("\nЦіна 1го товару: %d\n", a);
        printf("Нова ціна 1го товару: %.2f\n", newA);
        printf("Ціна 2го товару: %d\n", b);
        printf("Нова ціна 2го товару: %.2f\n", newB);
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
