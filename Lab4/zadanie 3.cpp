#include<bits/stdc++.h>
using namespace std;


void rozszerz (int *t,int &sz)
{
    for(int i=0 ;i<sz;i++)
    {
        if(t[i] == 0)
        cin>>t[i];
        return;
    }
    sz*=2;
    int *a = new int[sz];
    for(int i=0; i<sz/2; i++)
    {
        a[i] = t[i];
    }
    for(int i=sz/2; i<sz; i++)
        a[i]=0;
    t=a;
    

}


void aktualne (int *t, int sz)
{
    int ctr = 0;
    for(int i=0 ;i<sz; i++)
    {
        if(t[i]!=0)
        ctr++;
    }
    cout<<"Zajete, wolne"<<sz-ctr<<" "<<ctr;
}


void zepnij(int *t, int poz, int sz)
{
    for(int i=t[poz-1]; i<sz; i++)
    {
        t[i]=t[i+1];
    }
    t[sz-1]=0;
}



int main()
{
    srand(time(0));
int *t = new int[4];
int sz=4;
for(int i=0 ;i<4; i++)
t[i] = 0;


    aktualne(t,sz);
    cout<<"\n";
    rozszerz(t,sz);
    aktualne(t,sz);
    cout<<"\n";
    rozszerz(t,sz);
    rozszerz(t,sz);

    

    return 0;
}