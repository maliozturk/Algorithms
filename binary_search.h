//
// Created by Muhammet Ali Öztürk on 16/10/2023.
// muhammetaliozturk.official@gmail.com
//
#ifndef ALGORITHMS_BINARY_SEARCH_H
#define ALGORITHMS_BINARY_SEARCH_H
#include <vector>

int binary_search(int key, std::vector<int> a){
    int hi = a.size();
    int lo = 0;
    std::cout << "hi:" << hi << std::endl;
    std::cout << "lo:" << lo << std::endl;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        std::cout << "mid:" << mid << std::endl;
        if (key < a[mid])
        {
            hi = mid - 1;
        }
        else if (key > a[mid])
        {
            lo = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

#endif //ALGORITHMS_BINARY_SEARCH_H
