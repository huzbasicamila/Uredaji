//
// Created by Amila Huzbasic on 12/26/2023.
//

#ifndef UREDAJI_LAPTOP_H
#define UREDAJI_LAPTOP_H
#include "Uredjaj.h"

class Laptop : public Uredjaj{
private:
    std::string marka;
    bool HDMI;

public:
    //Laptop(double c, double t, double v, Sistem s, const std::string& m, bool hdmi);
    Laptop(double c, double t, double v, Sistem s, const std::string& m, bool hdmi);
    //getteri
    std::string getMarka() const;
    bool getHDMI() const;

    //setteri
    void setMarka(const std::string& m);
    void setHDMI(bool hdmi);

    //metode
    double getCijenaPoTezini() const override;
    std::string vratiTip() const override;

    void ispisi() const override;

};


#endif //UREDAJI_LAPTOP_H
