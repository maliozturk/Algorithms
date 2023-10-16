#include <iostream>
#include <vector>
#include "../headers/binary_search.h"

int main() {
    std::vector<int> sorted_array = {1,5,7, 9, 11};
    int ans = binary_search(11, sorted_array);
    std::cout << ans << std::endl;
    return 0;
}
