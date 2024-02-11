#include <iostream>
#include <string>

using namespace std;

class Pracownik {

private:
    string imie;
    string nazwisko;
    string miejscowsc;
    double placa;

public:
    void wczytaj() {
        cout << "Podaj imię: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj miejscowść: ";
        cin >> miejscowsc;
        cout << "Podaj płace: ";
        cin >> placa;
    }

    void wypisz() {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Miejscowść: " << miejscowsc << endl;
        cout << "Płaca: " << placa << endl;
    }

    string getImie() {
        return imie;
    }

    void setImie(const string& noweImie) {
        imie = noweImie;
    }

    string getNazwisko() {
        return nazwisko;
    }

    void setNazwisko(const string& noweNazwisko) {
        nazwisko = noweNazwisko;
    }
 
    string getMiejscowsc() {
        return miejscowsc;
    }

    void setMiejscowsc(const string& nowaMiejscowsc) {
        miejscowsc = nowaMiejscowsc;
    }

    double getPlaca() {
        return placa;
    }

    void setPlaca(double nowaPlaca) {
        placa = nowaPlaca;
    }

    void zwiekszPensje(double podwyzka) {
        placa += podwyzka;
    }

    void inicjalizuj(const string& imie, const string& nazwisko, const string& miejscowsc, double placa) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->miejscowsc = miejscowsc;
        this->placa = placa;
    }
};

int main() {
    Pracownik pracownik;

    pracownik.wczytaj();
    pracownik.wypisz();

    cout << "Imię pracownika: " << pracownik.getImie() << endl;
    pracownik.setImie("Nowe imię");
    cout << "Imię pracownika po zmianie: " << pracownik.getImie() << endl;

    pracownik.zwiekszPensje(1000);
    pracownik.wypisz();    
    Pracownik nowyPracownik;
    nowyPracownik.inicjalizuj("Adam", "Kowalski", "Kraków", 2500);
    nowyPracownik.wypisz();
    return 0;
}