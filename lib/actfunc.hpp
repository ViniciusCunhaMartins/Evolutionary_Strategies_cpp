// actfunc.hpp
#pragma once
#include <vector>

namespace Function{
    double relu(double x);
    double sigmoid(double x);
    std::vector<double> softmax(const std::vector<double>& input);
    double tanh(double x);
};
