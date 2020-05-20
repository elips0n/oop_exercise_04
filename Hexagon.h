#ifndef OOP_HEXAGON_H
#define OOP_HEXAGON_H
#include "Figure.h"

template <class T>
class Hexagon : public Figure <T>{
public:
    Hexagon(std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> nVertex, const std::string& me) : Figure <T>(me) {vertex = nVertex;}
    std::pair<T, T> center() override;
    std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> get_vertex() override;
    double square() override;
    std::string who_i_am() override;
private:
    std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> vertex;
};

template<class T>
std::string Hexagon<T>::who_i_am() {
    return this->i_am;
}

template<class T>
double Hexagon<T>::square() {
    double res = 0;
    std::pair <T, T> point2 = std::get <1>(this->vertex);;
    std::pair <T, T> point1 = std::get <0>(this->vertex);
    res += (point1.first + point2.first) * (point2.second - point1.second);
    point1 = point2;
    point2 = std::get <2>(this->vertex);
    res += (point1.first + point2.first) * (point2.second - point1.second);
    point1 = point2;
    point2 = std::get <3>(this->vertex);
    res += (point1.first + point2.first) * (point2.second - point1.second);
    point1 = point2;
    point2 = std::get <4>(this->vertex);
    res += (point1.first + point2.first) * (point2.second - point1.second);
    point1 = point2;
    point2 = std::get <5>(this->vertex);
    res += (point1.first + point2.first) * (point2.second - point1.second);
    point1 = std::get <0>(this->vertex);
    res += (point1.first + point2.first) * (point1.second - point2.second);
    return std::abs(res) / 2;
}

template<class T>
std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> Hexagon<T>::get_vertex() {
    return this->vertex;
}

template<class T>
std::pair<T, T> Hexagon<T>::center() {
    std::pair<T, T> answer(0, 0);
    answer.first += std::get<0>(this->vertex).first;
    answer.first += std::get<1>(this->vertex).first;
    answer.first += std::get<2>(this->vertex).first;
    answer.first += std::get<3>(this->vertex).first;
    answer.first += std::get<4>(this->vertex).first;
    answer.first += std::get<5>(this->vertex).first;
    answer.second += std::get<0>(this->vertex).second;
    answer.second += std::get<1>(this->vertex).second;
    answer.second += std::get<2>(this->vertex).second;
    answer.second += std::get<3>(this->vertex).second;
    answer.second += std::get<4>(this->vertex).second;
    answer.second += std::get<5>(this->vertex).second;
    answer.first /= 6;
    answer.second /= 6;
    return answer;
}

#endif //OOP_HEXAGON_H
