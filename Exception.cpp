#include <iostream>
void HappyNumber(int num)
{
    int i = 0;
    int n = num;

    for (; n > 0; i++)
    {
        n /= 10;
    }
    if (i <= 5)
    {
        throw "Error, Less Than 6 Digits\n";
    }
    if (i >= 7)
    {
        throw std::exception("Error, More Than 6 Digits\n");
    }

    short n6 = num % 10;
    short n5 = num / 10 % 10;
    short n4 = num / 100 % 10;
    short n3 = num / 1000 % 10;
    short n2 = num / 10000 % 10;
    short n1 = num / 100000;

    short sum1 = n1 + n2 + n3;
    short sum2 = n4 + n5 + n6;

    std::cout << ((sum1 == sum2) ? "Your Ticket is Lucky!\n" : "Your Ticket is not Lucky!\n");
}
int main()
{
    std::cout << "Enter Ticket Number: \n";
    int num;
    std::cin >> num;

    try
    {
        HappyNumber(num);
    }
    catch (const char* s)
    {
        std::cout << s;
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what();
    }
    catch (...)
    {
        std::cout << "Error, Wrong Number\n";
    }
    return 0;
}