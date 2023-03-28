#ifndef F1TEAM_H
#define F1TEAM_H
#include <string>
#include "F1Car.h"

class F1Team
{
	
	std::string teamName;
	F1Car cars;
public:
	F1Team();
	void writeTeamInfo();
	void readTeamInfo();
	

};
#endif // !F1TEAM_H
