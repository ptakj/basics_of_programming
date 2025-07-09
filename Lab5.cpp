#include <bits/stdc++.h>
#include <fstream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct rekord
{
    string lp;
    int nrind;
    string imie;
    string nazwisko;
    int wiek;
    char plec;
    string data;

};



int nr(string tekst)
{
    int ctr=0;
    fstream plik;
    plik.open(tekst,fstream::in);
    while(!plik.eof())
    {
        string dump;
        getline(plik,dump);
        ctr++;
    }

    return ctr;
}


void wczyt(string tekst, vector<rekord>&baza)
{
    fstream plik;
    plik.open(tekst, fstream::in);
    string dump;
    for (int i=0; i<nr(tekst); i++)
    {
        if(i<2)
            getline(plik,dump);
        else
        {
        rekord dana;
        plik>>dana.lp>>dana.nrind>>dana.imie>>dana.nazwisko>>dana.wiek>>dana.plec>>dana.data;
        baza.push_back(dana);
        }

        
    }
    plik.close();
}


void wyswietl (string tekst, vector<rekord>&baza)
{
    baza.clear();
    wczyt(tekst,baza);
    for(int i=0; i<baza.size(); i++)
    {
        cout<<baza[i].lp<<" "<<baza[i].nrind<<" "<<baza[i].imie<<" "<<baza[i].nazwisko<<" "<<baza[i].wiek<<" "<<" "<<baza[i].plec<<" "<<baza[i].data<<endl;
    }
}

void wpisz_do_pliku(string tekst, vector<rekord>&baza)
{
    fstream plik;
    plik.open(tekst, fstream::out);
    plik<<"Comment: plik ze studentami"<<endl<<"LP imie nazwisko wiek plec data"<<endl;
    for(int i=0; i<baza.size(); i++)
    {
        plik<<baza[i].lp<<" "<<baza[i].nrind<<" "<<baza[i].imie<<" "<<baza[i].nazwisko<<" "<<baza[i].wiek<<" "<<baza[i].plec<<" "<<baza[i].data;
        if(i!=baza.size()-1)plik<<endl;
    }
    plik.close();
}

void dodaj_rekord_do_bazy (vector<rekord>&baza)
{
    cout<<"Podaj rekord";
    rekord dana;
    cin>>dana.lp>>dana.nrind>>dana.imie>>dana.nazwisko>>dana.wiek>>dana.plec>>dana.data;
    baza.push_back(dana);
}


void usun (vector<rekord>&baza)
{
    int i;
    cout<<"podaj indeks";
    cin>>i;
    baza.erase(baza.begin()+i);
}
void szuk(vector<rekord>& baza)
{
    string tekst;
    cout<<"Podaj imie";
    cin>>tekst;
    for(int i=0; i<baza.size(); i++)
    {
        if(baza[i].imie.length() == tekst.length())
        if(baza[i].imie == tekst)
        cout<<baza[i].lp<<" "<<baza[i].nrind<<" "<<baza[i].imie<<" "<<baza[i].nazwisko<<" "<<baza[i].wiek<<" "<<" "<<baza[i].plec<<" "<<baza[i].data<<endl;

    }
}
void rd (vector<rekord>&baza)
{
    srand(time(0));
    int i=rand()%baza.size();
    cout<<baza[i].lp<<" "<<baza[i].nrind<<" "<<baza[i].imie<<" "<<baza[i].nazwisko<<" "<<baza[i].wiek<<" "<<" "<<baza[i].plec<<" "<<baza[i].data<<endl;
   
}

int main()
{


    string pl = "dane.txt";
    vector<rekord> baza;
    wczyt(pl, baza);
    //wyswietl(pl,baza);

    //dodaj_rekord_do_bazy(baza);

    //wpisz_do_pliku(pl,baza);
    //wyswietl(pl,baza);

    usun(baza);
    wpisz_do_pliku(pl,baza);
    wyswietl(pl,baza);
    cout<<"\n\n";
    szuk(baza);
    cout<<"\n\n";
    rd(baza);
    return 0;
}