#include <iostream>
#include <fstream>
#include "Vector.h"
#include <algorithm>
#include <random>

int main() {

    Vector<std::ofstream> vec;
    vec.push_back(std::ofstream("a.txt"));
    vec.push_back(std::ofstream("b.txt"));
    vec.push_back(std::ofstream("c.txt"));
    //auto rng = std::default_random_engine {};
    std::random_device rd;
    std::shuffle(vec.begin(), vec.end(), rd);
    int  i = 0;
    for (std::ofstream &a : vec)
    {
        a << i;
        i++;
        a.close();
    }

//    Vector<int> vec;
//    Vector<int> a;
//    int elem1 = 1;
//    int elem2 = 2;
//    int elem3 = 3;;
//    vec.push_back(std::move(elem1));
//    vec.push_back(std::move(elem2));
//    vec.push_back(std::move(elem3));
//    a = std::move(vec);
//    //a = vec;
//    a.print();
    return 0;
}