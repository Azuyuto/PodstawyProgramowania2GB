#include <iostream>
#include <cstdarg>
using namespace std;

//SECTION ULAMEK
struct Ulamek{
    int licznik;
    int mianownik;
};
//ENDSECTION ULAMEK

//SECTION PRINT
void print(int liczba) // LICZBA CALKOWITA
{
    cout<<liczba<<endl;
}
void print(double liczba) // LICZBA RZECZYWISTA
{
    cout<<liczba<<endl;
}
void print(...) // DOWOLNY ARGUMENT
{

}
void print(string *tekst) // WSKAZNIK DO TEKSTU
{
    cout<<*tekst<<endl;
}
void print(int* tablica, int n) // TABLICA I ROZMIAR
{
    for(int i=0;i<n;i++)
        cout<<tablica[i]<<" ";
    cout<<endl;
}
void print(int (&tablica)[5]) // TABLICA
{
    for(int i=0;i<5;i++)
        cout<<tablica[i]<<" ";
    cout<<endl;
}
void print(Ulamek liczba) // U£AMEK
{
    cout<<liczba.licznik<<"/"<<liczba.mianownik<<endl;
}
void print(Ulamek &liczba) // REFERNCJA DO U£AMKA
{
    cout<<liczba.licznik<<"/"<<liczba.mianownik<<endl;
}
//ENDSECTION PRINT

//SECTION DOUBLE COPY
int* doubleCopy(int* from, int* to)
{
    if(from == NULL || to == NULL)
    {
        cout<<"BAD";
        return 0;
    }
    int* table = new int[5];
    int i=0;
    while(from <= to)
    {
        table[i]=(*from)*2;
        from++;
        i++;
    }
    return table;
}

void doubleCopyTest()
{
    int t[5] = {2,3,4,5,6};
    int* t2 = doubleCopy(&t[0], &t[4]);
    for(int i=0;i<5;i++)
    {
        cout<<t2[i]<<" ";
    }
}
//ENDSECTION DOUBLE COPY

//SECTION CAST d TO D
string castdToD(string s)
{
    string n = "";
    for(const auto& c : s)
    {
        if(c == 'd')
        {
            n+= 'D';
        }
        else
        {
            n+=c;
        }
    }
    return n;
}
//ENDSECTION d TO D

int main()
{
    return 0;
}
