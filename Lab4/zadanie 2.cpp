#include<bits/stdc++.h>
using namespace std;



void plotki(int n)
{
    for(int i=0; i<n; i++)
        cout<<'#';
    cout<<"\n";
}


int main()
{
    string tekst;
    getline(cin,tekst);
    int *ile = new int [int('z')-int('a')+1];
    for(int i=0; i<tekst.length(); i++)
    {
        if(int(tekst[i])>=int('a') && int(tekst[i]<=int('z')))
        {
            ile[int(tekst[i])-int('a')]++;
        }

    }


        for(int i=0; i<(int('z')-int('a')+1); i++)
        {
            if(ile[i]>0)
            {
            cout<<char(i+int('a'));
            plotki(ile[i]);
            }

        }

    return 0;
}