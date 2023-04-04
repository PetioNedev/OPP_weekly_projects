#ifndef POWER_H
#define POWER_H
#include <string>

class Power {
public:
	Power(const std::string& name, int damage);

	const std::string& getName() const;
	int getDamage() const;

	bool operator<(const Power& other) const;

private:
	std::string name;
	int damage;
};

#endif  // POWER_H