#include <set>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

//Ctrl + Shift + C to comment selected block
//Ctrl + Shift + X to uncomment selected block


int main(int argc, char** argv) {

//    std::cout << "You have entered " << argc << " arguments:" << "\n";
//    for (int i = 0; i < argc; ++i)
//        std::cout << argv[i] << "\n";

    if (argc > 1) {
            std::ifstream in(argv[1]);
            std::stringstream buffer;
            buffer << in.rdbuf();
            std::string contents(buffer.str());
            std::cout << contents << std::endl ;
    } else {
        std::ifstream in("nn.txt");
        std::stringstream buffer;
        buffer << in.rdbuf();
        std::string contents(buffer.str());
        std::cout << contents << std::endl ;
    }

}
