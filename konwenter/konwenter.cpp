﻿// konwenter.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int w, s, p, l, a;
    string wynik, pusty;
    cout << "Wybierz opcje:\n1. Konwertuj na system 0-1\n2. Konwertuj na system dwojkowy, osemkowy lub szesnastkowy\n";
    cin >> w;
    system("CLS");
    if (w == 1)
        {
            cout << "Wybierz system:\n1. Dwojkowy\n2. Osemkowy\n3. Szesnastkowy\n4. Liczba we wszystkich systemach\n";
            cin >> s;
            system("CLS");
            cout << "Podaj liczbe:\n";
            cin >> l;
            if (s == 1) 
            {
                system("CLS");
                cout << "Twoja liczba to: " << l << "\n";
                while (l) {
                    wynik = (l % 2 ? "1" : "0") + wynik;
                    l/= 2;
                }
                cout << "Twoja liczba w systemie dwojkowym to: " << wynik;
            }
            if (s == 2)
            {
                system("CLS");
                cout << "Twoja liczba to: " << l << "\n";
                while (l) {

                    if (l % 8 == 0) {
                        wynik = "0" + wynik;
                    }
                    if (l % 8 == 1) {
                        wynik = "1" + wynik;
                    }
                    if (l % 8 == 2) {
                        wynik = "2" + wynik;
                    }
                    if (l % 8 == 3) {
                        wynik = "3" + wynik;
                    }
                    if (l % 8 == 4) {
                        wynik = "4" + wynik;
                    }
                    if (l % 8 == 5) {
                        wynik = "5" + wynik;
                    }
                    if (l % 8 == 6) {
                        wynik = "6" + wynik;
                    }
                    if (l % 8 == 7) {
                        wynik = "7" + wynik;
                    }
                    l /= 8;
                }
                cout << "Twoja liczba w systemie osemkowym to: " << wynik;
            }
            if (s == 3)
            {
                system("CLS");
                cout << "Twoja liczba to: " << l << "\n";
                while (l) {

                    if (l % 16 == 0) {
                        wynik = "0" + wynik;
                    }
                    if (l % 16 == 1) {
                        wynik = "1" + wynik;
                    }
                    if (l % 16 == 2) {
                        wynik = "2" + wynik;
                    }
                    if (l % 16 == 3) {
                        wynik = "3" + wynik;
                    }
                    if (l % 16 == 4) {
                        wynik = "4" + wynik;
                    }
                    if (l % 16 == 5) {
                        wynik = "5" + wynik;
                    }
                    if (l % 16 == 6) {
                        wynik = "6" + wynik;
                    }
                    if (l % 16 == 7) {
                        wynik = "7" + wynik;
                    }
                    if (l % 16 == 8) {
                        wynik = "8" + wynik;
                    }
                    if (l % 16 == 9) {
                        wynik = "9" + wynik;
                    }
                    if (l % 16 == 10) {
                        wynik = "A" + wynik;
                    }
                    if (l % 16 == 11) {
                        wynik = "B" + wynik;
                    }
                    if (l % 16 == 12) {
                        wynik = "C" + wynik;
                    }
                    if (l % 16 == 13) {
                        wynik = "D" + wynik;
                    }
                    if (l % 16 == 14) {
                        wynik = "E" + wynik;
                    }
                    if (l % 16 == 15) {
                        wynik = "F" + wynik;
                    }
                    l /= 16;
                }
                cout << "Twoja liczba w systemie szesnastkowym to: " << wynik;

            }
            if (s==4)
            {
                cout << "Twoja liczba to: " << l << "\n";
                a = l;
                wynik = pusty;
                while (l) {
                    wynik = (l % 2 ? "1" : "0") + wynik;
                    l /= 2;
                }
                wynik = pusty;
                l = a;
                cout << "Twoja liczba w systemie dwojkowym to: " << wynik << "\n";
                while (l) {

                    if (l % 8 == 0) {
                        wynik = "0" + wynik;
                    }
                    if (l % 8 == 1) {
                        wynik = "1" + wynik;
                    }
                    if (l % 8 == 2) {
                        wynik = "2" + wynik;
                    }
                    if (l % 8 == 3) {
                        wynik = "3" + wynik;
                    }
                    if (l % 8 == 4) {
                        wynik = "4" + wynik;
                    }
                    if (l % 8 == 5) {
                        wynik = "5" + wynik;
                    }
                    if (l % 8 == 6) {
                        wynik = "6" + wynik;
                    }
                    if (l % 8 == 7) {
                        wynik = "7" + wynik;
                    }
                    l /= 8;
                }
                cout << "Twoja liczba w systemie osemkowym to: " << wynik << "\n";
                l = a;
                wynik = pusty;
                while (l) {

                    if (l % 16 == 0) {
                        wynik = "0" + wynik;
                    }
                    if (l % 16 == 1) {
                        wynik = "1" + wynik;
                    }
                    if (l % 16 == 2) {
                        wynik = "2" + wynik;
                    }
                    if (l % 16 == 3) {
                        wynik = "3" + wynik;
                    }
                    if (l % 16 == 4) {
                        wynik = "4" + wynik;
                    }
                    if (l % 16 == 5) {
                        wynik = "5" + wynik;
                    }
                    if (l % 16 == 6) {
                        wynik = "6" + wynik;
                    }
                    if (l % 16 == 7) {
                        wynik = "7" + wynik;
                    }
                    if (l % 16 == 8) {
                        wynik = "8" + wynik;
                    }
                    if (l % 16 == 9) {
                        wynik = "9" + wynik;
                    }
                    if (l % 16 == 10) {
                        wynik = "A" + wynik;
                    }
                    if (l % 16 == 11) {
                        wynik = "B" + wynik;
                    }
                    if (l % 16 == 12) {
                        wynik = "C" + wynik;
                    }
                    if (l % 16 == 13) {
                        wynik = "D" + wynik;
                    }
                    if (l % 16 == 14) {
                        wynik = "E" + wynik;
                    }
                    if (l % 16 == 15) {
                        wynik = "F" + wynik;
                    }
                    l /= 16;
                }
                cout << "Twoja liczba w systemie szesnastkowym to: " << wynik;
            }
        }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
/*xif (!l % 2) {
    cout << "działa 0";
}
else {
    cout << "działa 1";
}*/

