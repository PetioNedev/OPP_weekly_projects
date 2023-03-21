//#include <iostream>
//#include <fstream>
//
//int main()
//{
//	std::ifstream if_stream;
//	if_stream.open("fileName.txt");
//
//	if (!if_stream.is_open())
//	{
//		throw std::exception("error!");
//	}
//
//	if_stream.seekg(0, if_stream.end);
//	int length = if_stream.tellg();
//	if_stream.seekg(0, if_stream.beg);
//
//
//
//
//	if_stream.close();
//	std::cout << length << std::endl;
//
//
//}
//
// 