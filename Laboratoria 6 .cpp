#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int nrind;
    string imie;
    string nazwisko;
    char plec;
    string data;

};

class Node
{
    public:
    Student value;
    Node* next;

    Node(Student val)
    {
        value = val;
        next = nullptr;
    }

};


class FIFO
{
    public:
    Node *head;
    Node *tail;
    FIFO() : head(nullptr), tail(nullptr){}

    void add_node()
    {
        Student s;
        cin>>s.nrind>>s.imie>>s.nazwisko>>s.plec>>s.data;
        Node *newNode = new Node(s);
        if(tail == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

    }
    
    void wypisz_ind(int nr)
    {
        Node *crt = head;
        int ctr = 0;
        while(ctr < nr)
        {   
            crt = crt->next;
            ctr++;
        }
        cout<<crt->value.nrind<<" "<<crt->value.imie<<" "<<crt->value.nazwisko<<" "<<crt->value.plec<<" "<<crt->value.data<<"\n";
    }



    void wypisz_wszystkie()
    {
        Node *crt = head;
        while(crt != nullptr)
        {
            cout<<crt->value.nrind<<" "<<crt->value.imie<<" "<<crt->value.nazwisko<<" "<<crt->value.plec<<" "<<crt->value.data<<"\n";
            
            crt = crt->next;
        }
    }


    ~FIFO()
    {
        while(head != nullptr)
        {
            Node *crt = head;
            head = head->next;
            delete crt;
        }
    }
};





int main()
{

int i;

FIFO f;

while(true)
{
    cout<<"1 - dodaj, 2 wszystjue, 3 - podaj pozniej indeks i zwroci\n";
cin>>i;
if(i == 1)
{
    f.add_node();
}
else
if(i == 2)
{
    f.wypisz_wszystkie();
}
else
{
    int x;
    cin>>x;
    f.wypisz_ind(x);
}
}



    return 0;
}

