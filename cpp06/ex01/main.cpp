#include "iostream"

#include "Data.hpp"
#include <iostream>

int main()
{
    Data data;
	Serializer s;

	std::cout << std::endl;
	
    data.name = "Ozgur";
    data.department = "Medicine";
    data.job = "Radiology and Nuclear Technician";
    data.age = 28;
    data.isActive = true;

	std::cout << "Name: " << data.name << std::endl;
	std::cout << "Department: " << data.department << std::endl;
	std::cout << "Job: " << data.job << std::endl;
	std::cout << "Age: " << data.age << std::endl;
	std::cout << "IsActive: " << data.isActive << std::endl;

    std::cout << std::endl << std::endl;
    uintptr_t	serialize_input = s.serialize(&data);//data yapısının bellek adresini temsl ediyor;
	Data*		deserialize_output = s.deserialize(serialize_input);//pointeri temsiş ettigi veriye dönmüş hali;

	std::cout << serialize_input << std::endl;
	std::cout << deserialize_output << std::endl;
	std::cout << std::endl;
}