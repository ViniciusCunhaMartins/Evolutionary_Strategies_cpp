// actfunc.cpp
#include <iostream>
#include <cmath>
#include <algorithm>
#include "actfunc.hpp"

namespace Function{
    double relu(double x){
        return std::fmax(0, x);
    }

    double sigmoid(double x){
        return 1/(1 + std::exp(-x*1));
    }

    double tanh(double x){
        return std::tanh(x);
    }

    std::vector<double> softmax(const std::vector<double>& input){
        double max, sum = 0.0;
        std::vector<double> result;
        if (input.empty()) return input;
        
        max = *std::max_element(input.begin(), input.end());

        for (double x : input){
            sum += std::exp(x - max);
        }
        for (double x : input){
            result.push_back(std::exp(x - max)/sum);
        }

        return result;
    }
};
