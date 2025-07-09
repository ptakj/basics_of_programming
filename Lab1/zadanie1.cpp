#include<iostream>
#include<string>



int main()
{
    std::cout<<"Podaj 2 liczby:\n";
    double a,b;
    std::cout<<"a:";
    std::cin>>a;
    std::cout<<"b:";
    std::cin>>b;
    char znak;
    std::cout<<"Podaj znak:";
    std::cin>>znak;

    switch (znak)
    {
    case '+':
    {
        std::cout<<a+b;
        return 0;
    }
        break;
    case '-':
    {
        std::cout<<a-b;
        return 0;
    }
    case '*':
    {
        std::cout<<a*b;
        return 0;
    }
    case '/':
    if(b == 0)
    {
        while(b == 0)
        {
        std::cout<<"DZIELENIE PRZEZ 0 JEST ZAKAZANE!\nPodaj inne b:\n";
        std::cin>>b;
        }
        std::cout<<a/b;

    }
        return 0;
    default:
    {
        std::cout<<"Nieprawidłowe dane!";
    }
    }


    



    return 0;
}