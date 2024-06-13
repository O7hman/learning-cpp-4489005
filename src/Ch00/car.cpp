#include "car.h"

car::car(std::string name_c, int mileage_c, make m_c)
{
    name = name_c;
    mileage = mileage_c;
    m = m_c;
}

std::string car::get_name() const
{
    return name;
}

int car::get_mileage() const
{
    return mileage;
}

make car::get_m() const
{
    return m;
}

void car::set_m(make m_c)
{
    m = m_c;
}