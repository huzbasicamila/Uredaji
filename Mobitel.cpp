//
// Created by Amila Huzbasic on 12/26/2023.
//

#include "Mobitel.h"
#include <ctime>

Mobitel::Mobitel(double c, double t, double v, Sistem s, const std::string &vr, bool pret) :
        Uredjaj(c,t,v,s), vrsta(vr), pretplata(pret){

}

std::string Mobitel::getVrsta() const {
    return vrsta;
}

bool Mobitel::getPretplata() const {
    return pretplata;
}

void Mobitel::setVrsta(const std::string &vr) {
    vrsta=vr;
}

void Mobitel::setPretplata(bool pret) {
    pretplata=pret;
}

double Mobitel::getCijenaPoTezini() const {
    double osnovnaCijenaPoTezini=Uredjaj::getCijenaPoTezini();
    if(pretplata) {
        time_t t=time(NULL);
        tm* timePtr= localtime(&t);
        int trenutniMjesec=timePtr->tm_mon+1;

        return osnovnaCijenaPoTezini + trenutniMjesec *10.0;
    } else
        return osnovnaCijenaPoTezini;
}

std::string Mobitel::vratiTip() const {
    return "Mobitel";
}

void Mobitel::ispisi() const {
    Uredjaj::ispisi();
    std::cout<<"Vrsta: " << getVrsta() << std::endl;
    std::cout<< "Pretplata: " << (getPretplata() ? "Da" : "Ne") << std::endl;
}