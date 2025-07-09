#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll suma;


int main()
{
    ll wczyt;



    cout<<"Prosze o podanie liczb:\n";
    do
    {
        cin>>wczyt;
        if(wczyt<=15 && wczyt>=-15)
            suma+=wczyt;
    } while (wczyt!=99);
    
    cout<< suma;





    return 0;
}