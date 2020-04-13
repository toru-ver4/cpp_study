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


int main()
{
    store_and_output_increment_data(5);
}
