#include <iostream>
using namespace std;

class CzlowiekZnanyZWidzenia
{
protected:
    string cechaCharakterystyczna;
public:
    void SetCechaCharakterystyczna(string s)
    {
        this->cechaCharakterystyczna = s;
    }
    string GetCechaCharakterystyczna()
    {
        return this->cechaCharakterystyczna;
    }
};

class CzlowiekZnanyZImienia : public CzlowiekZnanyZWidzenia
{
protected:
    string imie;
public:
    void SetImie(string s)
    {
        this->imie = s;
    }
    string GetImie()
    {
        return this->imie;
    }
};

class CzlowiekZnanyZInternetu
{
protected:
    string gdziePoznany;
    string czymZwrocilMojaUwage;
public:
    void SetGdziePoznany(string s)
    {
        this->gdziePoznany = s;
    }
    string GetGdziePoznany()
    {
        return this->gdziePoznany;
    }
    void SetCzymZwrocilMojaUwage(string s)
    {
        this->czymZwrocilMojaUwage = s;
    }
    string GetCzymZwrocilMojaUwage()
    {
        return this->czymZwrocilMojaUwage;
    }
};

class Zwierze
{
protected:
    string gatunek;
    string imie;
public:
    void SetImie(string s)
    {
        this->imie = s;
    }
    string GetImie()
    {
        return this->imie;
    }
    void SetGatunek(string s)
    {
        this->gatunek = s;
    }
    string GetGatunek()
    {
        return this->gatunek;
    }
};

class DobrzeZnanyKolega : public CzlowiekZnanyZImienia, public CzlowiekZnanyZInternetu
{
protected:
    string skadGoZnam;
    Zwierze zwierzeDomowe;
public:
    static void hejZnanyKolego()
    {
        cout<<"A witam Pana serdecznie"<<endl;
    }
    void SetSkadGoZnam(string s)
    {
        this->skadGoZnam = s;
    }
    string GetSkadGoZnam()
    {
        return this->skadGoZnam;
    }
    string SetZwierze(Zwierze s)
    {
        this->zwierzeDomowe = s;
    }
    Zwierze GetZwierze()
    {
        return this->zwierzeDomowe;
    }
};

DobrzeZnanyKolega stworzTestowego()
{
    Zwierze pimpek;
    pimpek.SetGatunek("Ssak");
    pimpek.SetImie("Pimpek");

    DobrzeZnanyKolega dzik;
    dzik.SetZwierze(pimpek);
    dzik.SetSkadGoZnam("Z podworka");
    dzik.SetImie("Daniel");
    dzik.SetGdziePoznany("W internecie");
    dzik.SetCzymZwrocilMojaUwage("Swoja ambicja");
    dzik.SetCechaCharakterystyczna("Gruby czlowiek");
    return dzik;
}

void wypiszKolege(DobrzeZnanyKolega dzik)
{
    cout<<"CzlowiekZnanyZWidzenia: "<<dzik.GetCechaCharakterystyczna()<<endl;
    cout<<"\t | \nCzlowiekZnanyZImienia: "<<dzik.GetImie()<<endl;
    cout<<"\t | \t\t\t\t"<<"CzlowiekZnanyZInternetu: "<<dzik.GetGdziePoznany()<<", "<<dzik.GetCzymZwrocilMojaUwage()<<endl;
    cout<<"\t | \t\t\t\t\t\t"<<"|"<<endl;
    cout<<"\t | ----------------------------------------------"<<endl;
    cout<<"\t | | \nDobrzeZnanyKolega: "<<dzik.GetSkadGoZnam()<<" ----------- "<<"ZwierzeDomowe: "<<dzik.GetZwierze().GetGatunek()<<", "<<dzik.GetZwierze().GetImie()<<endl;
}

int main()
{
    DobrzeZnanyKolega dzik = stworzTestowego();
    wypiszKolege(dzik);
    cout<<endl;
    dzik.hejZnanyKolego();
    return 0;
}
