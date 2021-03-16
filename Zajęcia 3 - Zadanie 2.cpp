#include <iostream>
#include <string.h>

using namespace std;

class tekst
{
public:
    const char* String;
    tekst()
    {
        String = new char[0];
    }
    tekst(char* a)
    {
        size_t len = strlen(a);
        char *b = new char[len+1];
        memcpy(b, a, len);
        b[len] = '\0';
        String = b;
    }
    tekst(tekst *a)
    {
        size_t len = strlen(a->String);
        char *b = new char[len+1];
        memcpy(b, a->String, len);
        b[len] = '\0';
        String = b;
    }
    ~tekst()
    {
        delete String;
    }
    int getSize()
    {
        return strlen(String);
    }
    void setNewText(const char* newText)
    {
        size_t len = strlen(newText);
        char *b = new char[len+1];
        memcpy(b, newText, len);
        b[len] = '\0';
        delete String;
        String = b;
    }
};

int main()
{
    tekst t("Mikolajek");
    cout<<t.String<<" "<<t.getSize()<<endl;
    tekst t2(t);
    cout<<t2.String<<" "<<t2.getSize()<<endl;
    t2.setNewText("Bialkowski");
    cout<<t2.String<<" "<<t2.getSize()<<endl;
    return 0;
}
