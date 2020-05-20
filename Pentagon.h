//
// Created by yar on 31.03.2020.
//

#ifndef OOP_PENTAGON_H
#define OOP_PENTAGON_H
#include "Figure.h"

template <class T>
class Pentagon : public Figure <T>{
public:
    Pentagon(std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> nVertex, const std::string& me) : Figure <T>(me) {vertex = nVertex;}
    std::pair<T, T> center() override;
    std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> get_vertex() override;
    double square() override;
    std::string who_i_am() override;
private:
    std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> vertex;
};

template<class T>
std::pair<T, T> Pentagon<T>::center() {
    std::pair<T, T> answer(0, 0);
    answer.first += std::get<0>(this->vertex).first;
    answer.first += std::get<1>(this->vertex).first;
    answer.first += std::get<2>(this->vertex).first;
    answer.first += std::get<3>(this->vertex).first;
    answer.first += std::get<4>(this->vertex).first;
    answer.second += std::get<0>(this->vertex).second;
    answer.second += std::get<1>(this->vertex).second;
    answer.second += std::get<2>(this->vertex).second;
    answer.second += std::get<3>(this->vertex).second;
    answer.second += std::get<4>(this->vertex).second;
    answer.first /= 5;
    answer.second /= 5;
    return answer;
}

template<class T>
std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> Pentagon<T>::get_vertex() {
    std::pair <T, T> h;
    std::tuple <std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>, std::pair <T, T>> answer = { std::get<0>(this->vertex),  std::get<1>(this->vertex),  std::get<2>(this->vertex),  std::get<3>(this->vertex), std::get<4>(this->vertex),h};
    return answer;
}

template<class T>
double Pentagon<T>::square() {
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
    point1 = std::get <0>(this->vertex);
    res += (point1.first + point2.first) * (point1.second - point2.second);
    return std::abs(res) / 2;
}

template<class T>
std::string Pentagon<T>::who_i_am() {
    return this->i_am;
}

#endif //OOP_PENTAGON_H
