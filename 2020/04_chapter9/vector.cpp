#include "all.h"


void store_and_output_increment_data(std::size_t sample_num)
{
    std::vector<int> v;
    for(std::size_t idx=0; idx<sample_num; idx++){
        v.push_back(idx);
    }
    for(std::size_t idx=0; idx<sample_num; idx++){
        std::cout << v.at(idx) << "\n";
    }
}


int search_min_index(std::vector<int> v){
    std::size_t length = v.size();
    int min_index = 0;
    for(std::size_t ii=0; ii<length; ii++){
        if (min_index > v.at(ii)){
            min_index = ii;
        }
    }

    return min_index;
}


void selection_sort(std::vector<int> v){
    std::size_t length = v.size();
    std::size_t min_index = 0;

    for(std::size_t g_idx=0; g_idx<length; g_idx++){
        min_index = g_idx;
        for(std::size_t l_idx=g_idx; l_idx<length; l_idx++){
            if(v.at(min_index) > v.at(l_idx)){
                min_index = l_idx;
            }
        }
        // swap
        auto temp = v.at(g_idx);
        v.at(g_idx) = v.at(min_index);
        v.at(min_index) = temp;
    }
    // result
    for(std::size_t g_idx=0; g_idx<length; g_idx++){
        std::cout << v.at(g_idx) << "\n";
    }
}


int main()
{
    // store_and_output_increment_data(5);
    std::vector<int> data = { 3, -1, -19, 18 };
    // int min_index = search_min_index(data);
    // std::cout << min_index << "\n";
    selection_sort(data);
}
