//
// Created by Amila Huzbasic on 12/26/2023.
//

#include "UredjajKolekcija.h"

UredjajKolekcija::UredjajKolekcija(){};

UredjajKolekcija::~UredjajKolekcija() {
    for(Uredjaj* u : uredjaji) {
        delete u;
    }
};

size_t UredjajKolekcija::operator!() const {
    return uredjaji.size();
}

void UredjajKolekcija::dodajLaptop(double c, double t, double v, Sistem s, const std::string &marka, bool hdmi) {
    uredjaji.push_back(new Laptop(c,t,c,s,marka,hdmi));
}

void UredjajKolekcija::dodajMobitel(double c, double t, double v, Sistem s, const std::string &vrsta, bool pretplata) {
    uredjaji.push_back(new Mobitel(c,t,v,s,vrsta, pretplata));
}

Uredjaj& UredjajKolekcija::operator[](size_t i) {
    if(i>=uredjaji.size()) {
        throw std::out_of_range("Index je van opsega!");
    }

    return *uredjaji[i];
}

std::vector<Uredjaj*> UredjajKolekcija::pronadjiPoMarkiVrsti(const std::string& markaVrsta) const {
    std::vector<Uredjaj*> rezultati;
    for (Uredjaj* u : uredjaji) {
        if ((u->vratiTip() == "Laptop" && dynamic_cast<Laptop*>(u)->getMarka() == markaVrsta) ||
            (u->vratiTip() == "Mobitel" && dynamic_cast<Mobitel*>(u)->getVrsta() == markaVrsta)) {
            rezultati.push_back(u);
        }
    }
    return rezultati;
}