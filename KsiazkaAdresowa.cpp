#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }

}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata();
    }
    else
        cout << "Zaloguj sie by miec dostep do tej funkcji.";
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }
    else
        cout << "Zaloguj sie by miec dostep do tej funkcji.";

}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoImieniu();
    }
    else
        cout << "Zaloguj sie by miec dostep do tej funkcji.";
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoNazwisku();
    }
    else
        cout << "Zaloguj sie by miec dostep do tej funkcji.";
}

void KsiazkaAdresowa::usunAdresata()
{
     if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->usunAdresata();
    }
    else
        cout << "Zaloguj sie by miec dostep do tej funkcji.";
}

void KsiazkaAdresowa::edytujAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->edytujAdresata();
    }
    else
        cout << "Zaloguj sie by miec dostep do tej funkcji.";
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuEdycja()
{
    char wybor;

    system("cls");
    cout << endl << "   >>> MENU  EDYCJA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Imie" << endl;
    cout << "2. Nazwisko" << endl;
    cout << "3. Numer telefonu" << endl;
    cout << "4. Email" << endl;
    cout << "5. Adres" << endl;
    cout << "6. Powrot " << endl;
    cout << endl << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

