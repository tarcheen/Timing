#include <chrono>
#include <iostream>

class Time
{
std::chrono::time_point<std::chrono::steady_clock> start_time, end_time, result;
std::chrono::duration<float> duration;

public:
    Time()
    {
        start_time = std::chrono::high_resolution_clock::now();
    }
    ~Time()
    {
        end_time = std::chrono::high_resolution_clock::now();
        duration = end_time - start_time;
        std::cout<<"time took: "<<duration.count() * 1000 << " s" <<std::endl;
    }

};

int main()
{
    Time t1;
    for(int i = 0; i < 100; i++)
    {
        std::cout<<i<<std::endl;
    }
}
