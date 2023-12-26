#ifndef UREDJAJ_H
#define UREDJAJ_H

#include <iostream>
#include <string>

enum Sistem {WINDOWS, LINUX, ANDROID, MACOS};

class Uredjaj {
private:
    double cijena;
    double tezina;
    double velicinaEkrana;
    Sistem sistem;

public:
    Uredjaj(double c, double t, double v, Sistem s);

    //geteri
    double getCijena() const;
    double getTezina() const;
    double getVelicinaEkrana() const;
    Sistem getSistem() const;

    //setteri
    void setCijena(double c);
    void setTezina(double t);
    void setVelicinaEkrana(double v);
    void setSistem(Sistem s);

    //metode
    virtual double getCijenaPoTezini() const;
    virtual std::string vratiTip() const;

    virtual void ispisi() const;

};

#endif // UREDJAJ_H