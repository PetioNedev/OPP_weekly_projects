#ifndef ENGINE_H
#define ENGINE_H
#include<vector>
#include "Piston.h"
#include "CarPart.h"
class Engine : public CarPart
{
private:
	int hp;
	std::vector<Piston> pistons;
public:
	Engine(int hp, std::string name, std::string manifacturer, int year, int serialNumber);
	void addPiston(const Piston& piston);
	void display() const override;


};



#endif // !ENGINE_H

