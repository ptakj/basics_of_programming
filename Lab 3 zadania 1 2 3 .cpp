#include<bits/stdc++.h>
#include<cstdlib>
#include<time.h>
using namespace std;



//system("clear");

typedef long long int ll;


int Czlowiek_zgaduje()
{
    ll wynik = rand()%21;
    ll proby =5;

    while(proby>0)
    {
        system("clear");
        cout<<"Prób:"<<proby<<"\n"<<"Prosze podac liczbe:";
        ll podana;
        cin>>podana;
        if(podana == wynik)
        {
            //system("clear");
            cout<<"zgadles"<<podana;
            return 1;
        }
        else
        if(podana>wynik)
        {
            system("clear");
            //sleep(1);
            cout<<"duzo";
            sleep(5);

        }
        else
        {
            system("clear");
            //sleep(1);
            cout<<"malo\n";
            sleep(5);
        }
        proby --;
    }

    //system("clear");
    cout<<"Przegrana!\n";
    return 0;
}


int robot_zgaduje()
{
    ll lewy =0;
    ll prawy=20;
    string podana;
        

    while(podana!="zgadles")
    {

        ll i = rand()%(prawy-lewy+1)+lewy;
        //system("clear");
        cout<<"\n"<<i<<"\n"<<"Prosze podac (malo, duzo, zgadles):";
  
        cin>>podana;
        
        if(podana == "zgadles")
        {
            //system("clear");
            cout<<"zgadles"<<i;
            return 1;
        }
        else
        if(podana == "malo")
        {
            //system("clear");
            //sleep(1);
            lewy = i+1;
            //sleep(5);

        }
        else
        {
            //system("clear");
            //sleep(1);
            prawy = i-1;
            //sleep(5);
        }       
    }


    return 0;
}




int menu ()
{
    cout<<"Czlowiek 1, Robot 2, koniec 3:";
    int inp ;
    cin>>inp;
    switch (inp)
    {
    case 1:
        Czlowiek_zgaduje();
        break;
    case 2:
        robot_zgaduje();
        break;    
    default:
        return 3;
    }
    return 1;
}

int main()
{
    srand(time(0));



    ll ster = 10;
    //while(ster != 3)
    //{
     //   ster = menu();
    //}

    Czlowiek_zgaduje();

return 0;

}