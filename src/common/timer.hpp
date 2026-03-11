#pragma once
#include <chrono>
#include <iostream>

class Timer {
public:
    Timer() {
        start = std::chrono::steady_clock::now();
    }

    ~Timer() {
        auto end = std::chrono::steady_clock::now();
        auto duration =
            std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
        std::cout << "Execution time: " << duration.count() << " ns\n";
    }

private:
    std::chrono::steady_clock::time_point start;
};