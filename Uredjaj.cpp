#include "Uredjaj.h"

Uredjaj::Uredjaj(double c, double t, double v, Sistem s) :
cijena(c), tezina(t), velicinaEkrana(v), sistem(s){

}

double Uredjaj::getCijena() const {
    return cijena;
}

double Uredjaj::getTezina() const {
    return tezina;
}

double Uredjaj::getVelicinaEkrana() const {
    return velicinaEkrana;
}

Sistem Uredjaj::getSistem() const {
    return sistem;
}

void Uredjaj::setCijena(double c) {
    cijena=c;
}

void Uredjaj::setTezina(double t) {
    tezina=t;
}

void Uredjaj::setVelicinaEkrana(double v) {
    velicinaEkrana=v;
}

void Uredjaj::setSistem(Sistem s)  {
    sistem=s;
}

double Uredjaj::getCijenaPoTezini() const {
    return cijena/tezina;
}

std::string Uredjaj::vratiTip() const {
    return "Uredjaj";
}

void Uredjaj::ispisi() const {
    std::cout<<"Tip: " << vratiTip() << std::endl;
    std::cout<<"Cijena: " << getCijena() << std::endl;
    std::cout<< "Tezina: " << getTezina() << std::endl;
    std::cout<<"Velicina ekrana: " <<getVelicinaEkrana() << std::endl;
    std::cout<<"Sistem: " ;
    switch (getSistem()) {
        case WINDOWS:
            std::cout<< "Windows";
            break;
        case LINUX:
            std::cout<<"Linux";
            break;
        case ANDROID:
            std::cout<<"Android";
        case MACOS:
            std::cout<<"MacOS";

        }
        std::cout<<std::endl;


}