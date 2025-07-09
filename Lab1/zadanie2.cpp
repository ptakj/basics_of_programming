#include<iostream>
#include<string>
#include<cmath>


int main()
{

    double a,b,c;
    std::cin>>a>>b>>c;
    if(a == 0)
    {
        std::cout<<"Nieprawidlowe dane! a !=0!!!";
        return 0;
    }
    double moja_delta = (b*b-4*(a*c));
    
    
    if(moja_delta<0)
    {
        std::cout<<"Wyrażenie nie ma pierwiastków!\n";
        return 0;
    }

    moja_delta = sqrt(moja_delta);
    
    if(moja_delta == 0)
    {
        std::cout<<"Wyrażenie ma 1 pierwiastek!\n";
        std::cout<<(0-b-moja_delta)/(2*a);
        return 0;
    }
    else
    {
        std::cout<<"Wyrażenie ma 2 pierwiastki!\n";
        double ans =(0-b-moja_delta)/(2*a); 
        std::cout<<ans<<"\n";        
        ans = (0-b+moja_delta)/(2*a);
        std::cout<<ans<<"\n";                      
        return 0;
    }
    return 0;
}