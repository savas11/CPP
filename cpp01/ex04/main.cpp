#include "read.hpp"

int main(int ac, char **av) {
    if (ac == 4) {
        std::string filename(av[1]), s1(av[2]), s2(av[3]), line, buff;
        std::ifstream file(filename);
        filename.append(".replace");
        std::ofstream fileeee(filename, std::fstream::out | std::fstream::trunc);
        if (file.is_open()) {
            while (getline(file, buff)) {
                fileeee << replace(buff, s1, s2) << std::endl;
            }
            file.close();
        }
        fileeee.close();
    } else {
        std::cout << "wrong arguement" << std::endl;
    }
}