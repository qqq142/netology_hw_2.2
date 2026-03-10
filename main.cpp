#include <QCoreApplication>

#include <iostream>
#include <string>
#include <Windows.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите слово: " << std::flush;
    std::string input{};
    std::getline (std::cin >> std::ws, input);
    std::cout << "Вы ввели: " << input << std::endl;

    return 0;
}
