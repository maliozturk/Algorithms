#include <iostream>
#include <vector>
#include "binary_search.h"

int main() {
    std::vector<int> a = {-1,5,7,10};
    std::cout << "sizeof a:" << a.size() << std::endl;
    int r = binary_search(-1, a);
    std::cout << r << std::endl;
    return 0;
}
