#include "F1Team.h"
#include <iostream>
#include <fstream>

F1Team::F1Team()
{
    teamName = " ";
    cars.carName = " ";
    cars.engineCapacity = 0;
    cars.wins = 0;
    cars.year = 0;
}

void F1Team::writeTeamInfo()
{
    std::ofstream o_file("team.bin", std::ios::binary);
    if (!o_file.is_open()) {
        std::cout << "Error opening file!\n";
        return;
    }

    o_file.write((char*)&this->teamName, this->teamName.length());
    o_file.write((char*)&this->cars, sizeof(F1Car));
    o_file.close();

}



void F1Team::readTeamInfo()
{
    std::ifstream i_file("team.bin", std::ios::binary);
    if (!i_file.is_open()) {
        std::cout << "Error opening file!\n";
        return;
    }
    i_file.read((char*)&this->teamName, this->teamName.length());
    i_file.read((char*)&this->cars, sizeof(F1Car));

    //std::cout << teamName << " " << cars.carName << " " << cars.year << " " << cars.wins << " " << cars.engineCapacity << std::endl;

    i_file.close();



}
