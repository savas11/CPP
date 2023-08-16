#include "easyfind.hpp"

int main() {
    try {
        int array[] = {10, 20, 30, 40, 50};
        std::vector<int> numbers(array, array + sizeof(array) / sizeof(array[0]));
        int searchValue = 30;

        std::vector<int>::iterator result = easyfind(numbers, searchValue);

        if (result != numbers.end()) {
            std::cout << "Value " << searchValue << " easyfound :)"  << std::endl;
        } else {
            std::cout << "Value not found in the vector." << std::endl;
        }
    } catch (const OutOfContainer& ex) {
        std::cout << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}