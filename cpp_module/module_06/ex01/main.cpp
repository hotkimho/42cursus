

#include <iostream>

struct Data {
    std::string text;
    int number;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
   Data data;

   data.number = 42;
   data.text = "testText";
   std::cout << "data address : " << &data << std::endl;

   uintptr_t dataUintptr = serialize(&data);
   std::cout << "dataUintptr address : " << dataUintptr << std::endl;

   Data *dataPtr = deserialize(dataUintptr);
   std::cout << "dataPtr address : " << dataPtr << std::endl;

}