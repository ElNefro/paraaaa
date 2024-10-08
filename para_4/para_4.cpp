#include <iostream>


int Sum(int a, int b)
{
    return a + b;
}
int Razn(int a, int b)
{
    return a + b;
}
int Proiz(int a, int b)
{
    return a * b;
}
int Chast(int a, int b)
{
    return a / b;
}

int main()
{
    setlocale(LC_ALL, "ru");
    
    int a, b, znak;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "Выберите действие: \n";
    std::cout << "1) + \n";
    std::cout << "2) - \n";
    std::cout << "3) * \n";
    std::cout << "4) / \n";
    std::cin >> znak;

    if (znak == 1)
    {
        std::cout << Sum(a, b);
    }
    else if (znak == 2)
    {
        std::cout << Razn(a, b);
    }
    else if (znak == 3)
    {
        std::cout << Proiz(a, b);
    }
    else if (znak == 4)
    {
        std:: cout << Chast(a, b);
    }

    else
    {
        std::cout << "Ты куку?";
    }

    return 0;

}


