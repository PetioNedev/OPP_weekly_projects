#include <iostream>

//struct Student
//{
//    int age;
//    int grade;
//};
//
//void defaultStu(Student& stu)
//{
//    stu.age = -1;
//    stu.grade = -1;
//}
//
//void greet(const Student& stu)
//{
//    std::cout << "Hi, I'm " << stu.age << " years old";
//}
//
//void goodBye( Student& stu)
//{
//    std::cout << "Bye, I'm " << stu.age << " years old";
//    stu.age = -1;
//    stu.grade = -1;
//}

const int MAX_BRAND_LENGHT = 21;
class Waffle
{
public:
    char brand[MAX_BRAND_LENGHT];
    int grams;
    double price;
    double priceClients;
};

class WaffleShop
{
    Waffle vafla;
    int wafflesCount;
    int maxWaffles;
    int income;
    int expenses; 


    void startValues(int maxWaffles)
    {
        
        this->maxWaffles = maxWaffles;
        wafflesCount = 0;
        income = 0;
        expenses = 0;
        
    }

    void orderSomeWaffles(int orderedWaffles)
    {
        if (wafflesCount == 0 || orderedWaffles > maxWaffles)
        {
            throw std::exception("Error");
        }
        else
        {
            wafflesCount = orderedWaffles;
            expenses += orderedWaffles * vafla.price;
        }
    }

    void sellOneWaffle()
    {
        if (wafflesCount == 0)
        {
            throw std::exception("Error");
        }
        else {
            wafflesCount--;
            income += vafla.priceClients;
        }
    }

    void displayTheWaffles()
    {
        std::cout << "The number of waffles: " << wafflesCount << std::endl;
        std::cout << "The brand of the waffles: " << vafla.brand <<std::endl;
        std::cout << "The weight of the waffles: " << wafflesCount*vafla.grams <<std::endl;
    }

    void profit()
    {
        std::cout << "The profit of the shop: " << income-expenses << std::endl;
    }

};
int main()
{
    try
    {
        
    }
    catch (const std::exception& e)
    {
        e.what();
    }
}

