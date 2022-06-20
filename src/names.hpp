#ifndef names_hpp
#define names_hpp
#include <string>
#include <iostream>
namespace names{

    class names{
        public:
        names(){}
        static std::string replace(std::string text, std::string name, std::string new_name){
            if(find(text, name)){
                int init_pos = get_pos(text, name);
                std::cout << name.length() << std::endl;
                return text.replace(init_pos, init_pos + name.length(), new_name);
            }else{
                return NULL;
            }
        }
        // Check if given name exists within text base.
        static bool find(std::string text, std::string name){
            size_t founded = text.find(name);
            if(founded != std::string::npos){
                return true;
            }else{
                return false;
            }
        }
        static int get_pos(std::string text, std::string name){
            if(find(text, name)){
                return text.find(name);
            }else{
                return -1;
            }
        }
    };

};
#endif