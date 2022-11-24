﻿/*Задание 7. Друзья Оушена* (дополнительное задание)
Что нужно сделать
Банковский сейф оборудован механическим кодовым замком, состоящим из N крутящихся ручек, каждая из которых имеет K положений. 
Существует только одна комбинация положений всех N ручек, которая открывает сейф. 
Чтобы его открыть, достаточно перебрать все существующие комбинации. На проверку одной комбинации уходит в среднем T секунд, где T — вещественное число. 
Напишите программу, которая по заданным N, K и T определяет время, которое потребуется для перебора всех комбинаций и гарантированного открытия сейфа. Не используйте циклы. 
Обеспечьте контроль ввода.

Рекомендации по выполнению
Для решения этого задания нужно вспомнить комбинаторику.

Что оценивается
Правильно определяется количество комбинаций.*/

#include <cmath>
#include <iostream>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите количество ручек сейфа: ";
    int numberOfHandles;
    std::cin >> numberOfHandles;
    while (numberOfHandles <= 0) {
        std::cout << "Kоличество ручек должнo быть больше 0. Введите снова: ";
        std::cin >> numberOfHandles;
    }

    std::cout << "Введите количество положений для каждой ручки сейфа: ";
    int numberOfPositions;
    std::cin >> numberOfPositions;
    while (numberOfPositions <= 0) {
        std::cout << "Kоличество положений должнo быть больше 0. Введите снова: ";
        std::cin >> numberOfPositions;
    }

    std::cout << "Введите время в секундах для установки одной комбинации: ";
    float timeForCombination;
    std::cin >> timeForCombination;
    while (timeForCombination <= 0) {
        std::cout << "Амплитуда должна быть больше 0. Введите снова: ";
        std::cin >> timeForCombination;
    }

    std::cout << "Время необходимое для перебора всех комбинаций: " << std::pow(numberOfPositions, numberOfHandles) * timeForCombination << " сек." << std::endl;
}
