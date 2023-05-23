#include "Property.h"

Property::Property(std::string owner, bool tangible): owner(owner), tangible(tangible)
{
}

std::string Property::getOwner()
{
    return this->owner;
}

bool Property::isTangible()
{
    return this->tangible;
}
