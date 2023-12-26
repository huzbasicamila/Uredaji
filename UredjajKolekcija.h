//
// Created by Amila Huzbasic on 12/26/2023.
//

#ifndef UREDAJI_UREDJAJKOLEKCIJA_H
#define UREDAJI_UREDJAJKOLEKCIJA_H

#include "Laptop.h"
#include "Mobitel.h"
#include <vector>
#include <stdexcept>

class UredjajKolekcija {
private:
    std::vector<Uredjaj*> uredjaji;

public:
    UredjajKolekcija();
    ~UredjajKolekcija();

    size_t operator!() const;

    size_t getBrojElemenata() const {
        return uredjaji.size();
    }

    void dodajLaptop(double c, double t, double v, Sistem s, const std::string& marka, bool hdmi);
    void dodajMobitel(double c, double t, double v, Sistem s, const std::string& vrsta, bool pretplata);

    Uredjaj& operator[](size_t i);


    std::vector<Uredjaj*> pronadjiPoMarkiVrsti(const std::string& markaVrsta) const;

};


#endif //UREDAJI_UREDJAJKOLEKCIJA_H
