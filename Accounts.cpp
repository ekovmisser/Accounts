#include <iostream>
#include <Windows.h>

struct account
{
    int account;
    std::string name;
    int score;
    int score_new;
};

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    account score;
    score.account = 123456789;
    score.name = "Михаил";
    score.score = 0;
    score.score_new = 0;
    std::cout << "Введите номер счёта: ";
    std::cin >> score.account;
    std::cout << "Введите имя владельца: ";
    std::cin >> score.name;
    std::cout << "Введите баланс: ";
    std::cin >> score.score;
    std::cout << "Введите новый баланс: ";
    std::cin >> score.score_new;
    std::cout << "Ваш счет: " << score.name << ", " << score.account << ", " << score.score_new << std::endl;
    return 0;
}

