#include<bits/stdc++.h>
#include<time.h>
using namespace std;


long long int pow_of_2 (int i)
{
    if(i == 0)
        return 1;
    else
    {
        long long int ans = 1;
        for(int j=1; j<=i; j++)
            ans*=2;
        return ans;
    }
}

void wprowadz(char tekst[])
{
    cin.getline(tekst,15);    
}


void wypisz(char tekst[])
{
    for(int i=0; i<15; i++)
    {
        if(int(tekst[i]) == 0)
            return;
        else
        cout<<tekst[i];
    }
}


int policz(char tekst[])
{
    int ctr = 0;
    for(int i=0; i<15; i++)
    {
        if(int(tekst[i]) == 0)
            return ctr;
            ctr++;

    }
    return ctr;
}


void mtw(char tekst[])
{
    for(int i=0; i<15; i++)
    {
        if(int(tekst[i])>=int('a') && int(tekst[i]<=int('z')))
        tekst[i] = char(int(tekst[i])-int('a')+int('A'));
    }
}

void wtm(char tekst[])
{
    for(int i=0; i<15; i++)
    {
        if(int(tekst[i])>=int('A') && int(tekst[i]<=int('Z')))
        tekst[i] = char(int(tekst[i])+int('a')-int('A'));
    }
}


void tabl (long long int *tab)
{
    srand(time(0));
    int sz = rand()%(32-16+1)+16;
    tab = new long long int [sz];
    for(int i=0;i<sz; i++)
    {
        tab[i] = pow_of_2(i);
    }

    for(int i=0; i<sz; i++)
    {
        cout<<"\n["<<i<<"]"<<" 2^"<<i<<" = "<<tab[i];
    }
}


int main()
{
    char *tekst = new char[15];
    wprowadz(tekst);
    wtm(tekst);
    
    cout<<tekst<<"\n";
    mtw(tekst);
    cout<<tekst<<"\n";
    
    long long int *t;
    tabl(t);

    return 0;
}