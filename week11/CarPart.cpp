#include "CarPart.h"

CarPart::CarPart(std::string name, std::string manifacturer, int year, int serialNumber): name(name), manifacturer(manifacturer), year(year), serialNumber(++count)
{
}

int CarPart::getCarPartCounter()
{
    return count;
}
