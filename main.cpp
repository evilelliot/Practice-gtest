#include <iostream>
#include "src/names.hpp"

#define NAME "Valeria"
int main(){
    std::string name = "Valeria";
    std::string text = "Trying to find Valeria inside a lame text";

    if(names::names::find(text, name)){
        std::cout << "Name " << name << " found." << std::endl;
        std::cout << names::names::replace(text, name, "Baleria") << std::endl;
        std::cout << "Position: " << names::names::get_pos(text, name) << std::endl;
    }
    return 0;
}