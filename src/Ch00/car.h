
#ifndef CAR_H
#define CAR_H

#include <string>
enum make
{
    bmw,
    toyota,
    audi
};

class car
{
private:
    std::string name;
    int mileage;
    make m;

public:
    car(std::string name_c, int mileage_c, make m_c);

    std::string get_name() const;

    int get_mileage() const;

    make get_m() const;

    void set_m(make m_c);
};
#endif
