#include<bits/stdc++.h>
#include<cstdlib>
#include<time.h>
using namespace std;




typedef long long int ll;



void kwadrat (ll ile)
{
    ll pom = (10-ile);
    for(int i=0; i<pom;i++)
        cout<<"\n";

    for(ll i=0; i<ile;i++)
    {
        for(ll j=0; j<pom; j++)
        cout<<" ";
        for(ll j =0; j<ile; j++)
        cout<<"*";
            cout<<"\n";
    }

}


int main()
{

while(true)
{
for (int x =2; x<=8; x+=2)
{
    kwadrat(x);
    sleep(1);
    system("clear");
}


}






return 0;

}