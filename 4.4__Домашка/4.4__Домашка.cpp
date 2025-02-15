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


    //Задание 2. Складываем в уме
    int userNumbOne;
    int userNumbSecond;
    int userSum;
    std::cout << "Введите первое число: ";
    std::cin >> userNumbOne;
    std::cout << "Введите второе число: ";
    std::cin >> userNumbSecond;
    std::cout << "Введите их сумму: ";
    std::cin >> userSum;
    int aiSum = userNumbOne + userNumbSecond;
    std::cout << "-----Проверяем-----" << "\n";
    if (userSum == aiSum) {
        std::cout << "Верно!" << "\n";
    }
    else {
        std::cout << "Ошибка! Верный результат:" << aiSum << "\n";
    }
}

