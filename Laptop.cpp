//
// Created by Amila Huzbasic on 12/26/2023.
//

#include "Laptop.h"

Laptop::Laptop(double c, double t, double v, Sistem s, const std::string& m, bool hdmi) :
Uredjaj(c,t,v,s), marka(m), HDMI(hdmi){

}

std::string Laptop::getMarka() const {
    return marka;
}

bool Laptop::getHDMI() const {
    return HDMI;
}

void Laptop::setMarka(const std::string &m) {
    marka=m;
}

void Laptop::setHDMI(bool hdmi) {
    HDMI=hdmi;
}

double Laptop::getCijenaPoTezini() const {
    double osnovnaCijenaPoTezini= Uredjaj::getCijenaPoTezini();

    if(HDMI) {
        return osnovnaCijenaPoTezini+=30.0;
    } else
        return osnovnaCijenaPoTezini;
}

std::string Laptop::vratiTip() const {
    return "Laptop";
}

void Laptop::ispisi() const {
    Uredjaj::ispisi();
    std::cout<<"Marka: " << getMarka() << std::endl;
    std::cout<< "HDMI: " << (getHDMI() ? "Da" : "Ne" ) << std::endl;
}