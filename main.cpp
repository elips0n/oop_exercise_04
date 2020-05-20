#include <iostream>
#include "Rhombus.h"
#include "Pentagon.h"
#include "Hexagon.h"

using namespace std;

int main() {
    std::vector <Figure <int> *> data_int;
    std::vector <Figure <double > *> data_double;

    std::pair <double, double> a(0, 2);
    std::pair <double, double> b(4, 0);
    std::pair <double, double> c(2, 4);
    std::pair <double, double> d(-2, 6);
    std::tuple <std::pair <double, double>, std::pair <double, double>, std::pair <double, double>, std::pair <double, double>> vertex = {a, b, c, d};
    Figure <double>* element_rhomb = new Rhombus <double>(vertex, "rhombus");
    data_double.push_back(element_rhomb);


    std::pair <double, double> a1(13, -92);
    std::pair <double, double> b1(44, 0);
    std::pair <double, double> c1(-800, 30);
    std::pair <double, double> d1(27, 2);
    std::pair <double, double> e1(1, 2);
    std::tuple <std::pair <double, double>, std::pair <double, double>, std::pair <double, double>, std::pair <double, double>, std::pair <double, double>> vertex1 = {a1, b1, c1, d1, e1};
    Figure <double> * element_pent = new Pentagon <double>(vertex1, "pentagon");
    data_double.push_back(element_pent);


    std::pair <double, double> a2(-2, 0);
    std::pair <double, double> b2(-1, 1);
    std::pair <double, double> c2(1, 1);
    std::pair <double, double> d2(2, 0);
    std::pair <double, double> e2(1, -1);
    std::pair <double, double> f2(-1, -1);
    std::tuple <std::pair <double, double>, std::pair <double, double>, std::pair <double, double>, std::pair <double, double>, std::pair <double, double>, std::pair <double, double>> vertex2 = {a2, b2, c2, d2, e2, f2};
    Figure <double> * element_hex = new Hexagon <double>(vertex2, "hexagon");
    data_double.push_back(element_hex);


    for(auto & i : data_double) {
        std::cout << i->who_i_am() << std::endl;
        std::cout << i->square() << std::endl;
    }
    return 0;
}
