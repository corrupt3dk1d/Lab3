﻿// Tusk1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int* pointer;
    int a = 60;
    pointer = &a;
    std::cout << "pointer = " << *pointer << '\n';
    *pointer += 25;
    std::cout << "pointer = " << *pointer << '\n' << " a = " << a << '\n';
    int array[4] = { 3, 44, 6, 7 };
    for (int *i = array; i < &array[4]; *i++)
    {
        std::cout << *i << '\n';
    }
    int n1 = 5, n2 = 4;
    int* const pntr2 = &n1;
    std::cout << "pntr2 = " << *pntr2 << '\n';
    *pntr2 = 2;
    //pntr2 = &n2; Ошибка
    std::cout << "pntr2 = " << *pntr2 << " n1 = " << n1;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
