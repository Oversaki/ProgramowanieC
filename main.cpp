#include <iostream>

using namespace std;

class Uczen{
private:
    string pesel;
    string adres;
public:
    string imie;
    string nazwisko;

    Uczen(){
        cout << "Konstruktor domyslny" << endl;
    }

    Uczen(string pesel, string adres, string imie, string nazwisko){
        this -> pesel = pesel;
        this -> adres = adres;
        this -> imie = imie;
        this -> nazwisko = nazwisko;
    }

    void Wyswietl(){
      cout << pesel << " || " << adres << " || " << imie << " || " << nazwisko << " || " << endl;
    }
};

int main() {
    Uczen Alan;
    Uczen Gilbert("48932029", "Aleja Wolnosci 5", "Gilbert", "Dudek");

    Alan.Wyswietl();
    Gilbert.Wyswietl();


    return 0;
}
