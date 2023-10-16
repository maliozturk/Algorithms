//
// Created by Muhammet Ali Öztürk on 16/10/2023.
// muhammetaliozturk.official@gmail.com
//
#ifndef ALGORITHMS_BINARY_SEARCH_H
#define ALGORITHMS_BINARY_SEARCH_H
#include <vector>

int binary_search(int key, std::vector<int> sorted_array){
    int hi = sorted_array.size() - 1;
    int lo = 0;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (key < sorted_array[mid])
        {
            hi = mid - 1;
        }
        else if (key > sorted_array[mid])
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
