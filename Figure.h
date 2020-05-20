#include <utility>
#include <vector>
#include <cmath>
#include <string>
#include <tuple>

#ifndef OOP_FIGURE_H
#define OOP_FIGURE_H

template <class T>
class Figure{
public:
    explicit Figure(const std::string& n_i_am){
        i_am = n_i_am;
    }
    virtual std::pair<T, T> center() = 0;
    virtual std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> get_vertex() = 0;
    virtual double square() = 0;
    virtual std::string who_i_am() = 0;

protected:
    std::string i_am;
};

#endif //OOP_FIGURE_H
