/*Задание 7. Друзья Оушена* (дополнительное задание)
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

    //затухание маятника
    float attenuation = 0.084f;

    std::cout << "Введите начальную амплитуду маятника в сантиметрах: ";
    float startAmplitude;
    std::cin >> startAmplitude;
    while (startAmplitude <= 0) {
        std::cout << "Амплитуда должна быть больше 0. Введите снова: ";
        std::cin >> startAmplitude;
    }

    std::cout << "Введите конечную амплитуду маятника в сантиметрах: ";
    float stopAmplitude;
    std::cin >> stopAmplitude;
    while (stopAmplitude <= 0) {
        std::cout << "Амплитуда должна быть больше 0. Введите снова: ";
        std::cin >> stopAmplitude;
    }

    float currentAmplitude = startAmplitude;
    int numberSwings = 0;

    while (currentAmplitude > stopAmplitude) {
        currentAmplitude -= currentAmplitude * attenuation;
        numberSwings++;
    }

    std::cout << "Количество качаний до остановки маятника: " << numberSwings;
}
