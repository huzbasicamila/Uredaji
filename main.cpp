#include <iostream>
#include <fstream>
#include "UredjajKolekcija.h"

void sacuvajUredjajUDatoteku(const Uredjaj& u, const std::string& datoteka) {
    std::ofstream file(datoteka, std::ios::app);
    if (file.is_open()) {
        file << u.vratiTip() << ": ";
        u.ispisi(); // Ispisuje informacije o uređaju u datoteku
        file << "\n";
        file.close();
        std::cout << "Uredjaj je sacuvan u datoteku: " << datoteka << "\n";
    } else {
        std::cerr << "Greska prilikom otvaranja datoteke.\n";
    }
}

int main() {
    UredjajKolekcija kolekcija;

    // Unos uređaja
    std::cout << "Unesite informacije o laptopu:\n";
    double c, t, v;
    Sistem s;
    std::string marka;
    bool hdmi;

    std::cout << "Cijena: ";
    std::cin >> c;
    std::cout << "Tezina: ";
    std::cin >> t;
    std::cout << "Velicina ekrana: ";
    std::cin >> v;
    std::cout << "Sistem (0 - Windows, 1 - Linux, 2 - Android, 3 - MacOS): ";
    int sistem;
    std::cin >> sistem;
    s = static_cast<Sistem>(sistem);
    std::cout << "Marka: ";
    std::cin.ignore(); // Ignorisanje preostalog newline karaktera
    std::getline(std::cin, marka);
    std::cout << "HDMI (0 - Ne, 1 - Da): ";
    std::cin >> hdmi;

    kolekcija.dodajLaptop(c, t, v, s, marka, hdmi);
    sacuvajUredjajUDatoteku(kolekcija[kolekcija.getBrojElemenata() - 1], "laptopi.txt");

    std::cout << "\nUnesite informacije o mobitelu:\n";
    std::string vrsta;
    bool pretplata;

    std::cout << "Cijena: ";
    std::cin >> c;
    std::cout << "Tezina: ";
    std::cin >> t;
    std::cout << "Velicina ekrana: ";
    std::cin >> v;
    std::cout << "Sistem (0 - Windows, 1 - Linux, 2 - Android, 3 - MacOS): ";
    std::cin >> sistem;
    s = static_cast<Sistem>(sistem);
    std::cout << "Vrsta: ";
    std::cin.ignore();
    std::getline(std::cin, vrsta);
    std::cout << "Pretplata (0 - Ne, 1 - Da): ";
    std::cin >> pretplata;

    kolekcija.dodajMobitel(c, t, v, s, vrsta, pretplata);
    sacuvajUredjajUDatoteku(kolekcija[kolekcija.getBrojElemenata() - 1], "mobiteli.txt");

    // Čitanje iz datoteka i smeštanje u kolekciju
    std::ifstream laptopDatoteka("laptopi.txt");
    std::ifstream mobitelDatoteka("mobiteli.txt");
    std::string linija;

    while (std::getline(laptopDatoteka, linija)) {
        // Ovde treba implementirati parsiranje linije i dodavanje uređaja u kolekciju
    }

    while (std::getline(mobitelDatoteka, linija)) {
        // Ovde treba implementirati parsiranje linije i dodavanje uređaja u kolekciju
    }

    return 0;
}
