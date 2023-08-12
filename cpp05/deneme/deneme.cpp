#include <iostream>
#include <stdexcept>

class BolmeIslemi {
private:
    double sayi1;
    double sayi2;
public:
    BolmeIslemi(double sayi1, double sayi2) {
        this->sayi1 = sayi1;
        this->sayi2 = sayi2;
    }

    double Bol() {
        if (sayi2 == 0) {
            throw std::runtime_error("Payda sifir olamaz!");
        }
        return sayi1 / sayi2;
    }
};

int main() {
    double x = 0;
    double y = 0;

    BolmeIslemi abc(x, y);

    try {
        double sonuc = abc.Bol();
        std::cout << "Sonuc : " << sonuc << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Hata yakalandi: " << e.what() << std::endl;
    }

    return 0;
}
