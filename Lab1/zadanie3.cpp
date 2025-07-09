#include<iostream>
#include<string>
typedef long long int ll;

using namespace std;

int main()
{

    ll p,q;
    cout<<"Podaj p, q oddzielone enterami:";
    cin>>p>>q;
    
    if (p<=0 ||q<=0||p>6||q>6)
    {
        cout<<"Bledne dane!!!!";
        return 0;
    }

    switch(p%2)
    {
        case 0:
        if(q==2||q==4||q==5)
        {
            cout<<p+3*q;
            return 0;
        }
        else
        {
            cout<<q*2;
            return 0;
        }
        break;
        case 1:
        if(q==1||q==3||q==6)
        {
            if(p == q)
            {
                cout<<5*p+3;
            }
            else
            {
                cout<<2*q+p;
            }
            return 0;
        }
        else
        {
            cout<<min(p,q)+4;
            return 0;
        }
        break;
    }

    return 0;
}
