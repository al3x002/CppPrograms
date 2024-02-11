#include <iostream>

using namespace std;

 
class Czas {
private:

    int godzina;
    int minuta;

public:
    Czas(int h, int m) : godzina(h), minuta(m) {}
    void wyswietl() const {
        cout << godzina << ":" << minuta << endl;
    }
};

class Rezerwacja {
private:
    string imie;
    Czas czas;
    int liczbaOsob;

public:
    Rezerwacja(const string& i, const Czas& c, int l) : imie(i), czas(c), liczbaOsob(l) {} 

   void wyswietl() const {
        cout << "Imię: " << imie << endl;
        cout << "Czas rezerwacji: ";
        czas.wyswietl();
        cout << "Liczba osób: " << liczbaOsob << endl;
    }
};

 
int main() {
    Czas czas1(10, 30);
    Czas czas2(15, 45);
    Rezerwacja rezerwacja1("Piotr Kowalski", czas1, 6);
    Rezerwacja rezerwacja2("Anna Nowak", czas2, 3);
   
    rezerwacja1.wyswietl();
    cout << endl;
    rezerwacja2.wyswietl();

    return 0;
}