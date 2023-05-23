#include "Assistant.h"

Assistant::Assistant(const std::string& katedra, const std::string& name, int fn, const std::string& predmeti): BasePerson(name), Teacher(name, katedra, predmeti), Student(name,fn)
{
}
