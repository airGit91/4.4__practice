// 4.4__Домашка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(0, "");
    // Задание 1. Минимум из двух чисел
    int firstNum;
    int secondNum;
    std::cout << "Введите первое число: ";
    std::cin >> firstNum;
    std::cout << "Введите второе число: ";
    std::cin >> secondNum;

    if (firstNum > secondNum) {
        std::cout << "Наименьшее число: " << secondNum << "\n";
    }
    else if (firstNum == secondNum) {
        std::cout << "Числа равны!\n";
    }
    else {
        std::cout << "Наименьшее число: " << firstNum << "\n";
    }
}

