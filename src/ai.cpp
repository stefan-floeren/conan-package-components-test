#include <iostream>

#include <boost/container/small_vector.hpp>

#include "algorithms.h"

void ai()
{
    boost::container::small_vector<int, 10> v;  // {1, 2, 3};

    std::cout << "I am the ai component!\n";
    std::cout << "  Vector cap: " << v.internal_capacity() << '\n';
    algorithms();
}
