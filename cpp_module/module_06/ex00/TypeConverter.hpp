

#ifndef TYPECONVERTER_HPP
#define TYPECONVERTER_HPP

#include <iostream>
#include <string>

class TypeConverter {
public:
    TypeConverter();
    TypeConverter(std::string input);
    TypeConverter(const TypeConverter &copy);
    TypeConverter& operator=(const TypeConverter &copy);
    ~TypeConverter();

    void toChar();
    void toInt();
    void toFloat();
    void toDolbue();

private:
    const std::string str;
};

#endif