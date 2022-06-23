

#include "TypeConverter.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout<< "Wrong Arg" << std::endl;
        return 1;
    }

    TypeConverter Converter(argv[1]);
    Converter.toChar();
    Converter.toInt();
    Converter.toFloat();
    Converter.toDolbue();
}