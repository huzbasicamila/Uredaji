//
// Created by Amila Huzbasic on 12/26/2023.
//

#ifndef UREDAJI_MOBITEL_H
#define UREDAJI_MOBITEL_H

#include "Uredjaj.h"

class Mobitel : public Uredjaj {
private:
    std::string vrsta;
    bool pretplata;

public:
    Mobitel(double c, double t, double v, Sistem s, const std::string& vr, bool pret);

    std::string getVrsta() const;
    bool getPretplata() const;

    void setVrsta(const std::string& vr);
    void setPretplata(bool pret);

    double getCijenaPoTezini() const override;
    std::string vratiTip() const override;

    void ispisi() const override;
};


#endif //UREDAJI_MOBITEL_H
