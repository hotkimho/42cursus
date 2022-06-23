
#include "TypeConverter.hpp"

TypeConverter::TypeConverter() {

}

TypeConverter::TypeConverter(const TypeConverter &copy) {
    *this = copy;
}

TypeConverter& TypeConverter::operator=(const TypeConverter &copy) {
    return *this;
}

TypeConverter::~TypeConverter() {
}

TypeConverter::TypeConverter(std::string input) : str(input){

}

void TypeConverter::toChar() {
    int num;

    std::cout << "char: ";
    try {
        num = std::stoi(str);
        if (num < 0 || num > 255)
            std::cout << "impossible" << std::endl;
        else {
            char ch = static_cast<char>(num);
            if (std::isprint(ch))
                std::cout << ch << std::endl;
            else
                std::cout << "impossible" << std::endl;
        }
    } catch(std::exception error) {
        std::cout << "impossible" << std::endl;
    }
}

void TypeConverter::toInt() {
    int num;

    std::cout << "int: ";
    try {
        num = std::stoi(str);
        std::cout << num << std::endl;
    } catch(std::exception error) {
        std::cout << "impossible" << std::endl;
    }
}

void TypeConverter::toFloat() {
    float num;

    std::cout << "float: ";
    try {
        num = std::stof(str);
        std::cout << static_cast<float>(num);
        if ((static_cast<int>(num) - num) == 0)
            std::cout << ".0";
        std::cout <<"f" << std::endl;
    } catch(std::exception error) {
        std::cout << "nanf" << std::endl;
    }
}

void TypeConverter::toDolbue() {
    double num;

    std::cout << "double: ";
    try {
        num = std::stof(str);
        std::cout << static_cast<double>(num);
        if ((static_cast<int>(num) - num) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    } catch(std::exception error) {
        std::cout << "nan" << std::endl;
    }
}