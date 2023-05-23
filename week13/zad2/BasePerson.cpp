#include "BasePerson.h"

BasePerson::BasePerson(const std::string& name): name(name)
{
	id = ++personCounter;
}

int BasePerson::personCounter = 0;
