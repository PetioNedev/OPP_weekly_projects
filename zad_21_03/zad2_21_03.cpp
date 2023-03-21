//#include <iostream>
//#include <fstream>
//
//int main()
//{
//    std::ifstream if_stream;
//    if_stream.open("zad2_21_03.cpp");
//
//    
//    if (!if_stream.is_open())
//    {
//        throw std::exception("error!");
//    }
//
//    const int MAX_SIZE = 1024;
//    char line[MAX_SIZE];
//    while (if_stream.getline(line, MAX_SIZE))
//    {
//        std::cout << line << std::endl;
//    }
//
//    if_stream.close();
//}