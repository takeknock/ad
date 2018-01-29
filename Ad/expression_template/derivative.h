#pragma once

#include "binary_expressions.h"
#include "Constant.h"
#include "Variable.h"
#include "functors.h"

namespace et {
    auto derivative(const Variable& e)
    {
        return one();
    }
    auto derivative(const double e)
    {
        return zero();
    }
    auto derivative(const one& e)
    {
        return zero();
    }
    auto derivative(const zero& e)
    {
        return zero();
    }
    template<typename E1, typename E2>
    auto derivative(const binary_expression<add_op, E1, E2>& e)
    {
        return derivative(e.e1()) + derivative(e.e2());
    }

    template<typename E1, typename E2>
    auto derivative(const binary_expression<sub_op, E1, E2>& e)
    {
        return derivative(e.e1()) - derivative(e.e2());
    }

    template<typename E1, typename E2>
    auto derivative(const binary_expression<mul_op, E1, E2>& e)
    {
        return e.e1() * derivative(e.e2()) + derivative(e.e1()) * e.e2();
    }

    template<typename E1, typename E2>
    auto derivative(const binary_expression<div_op, E1, E2>& e)
    {
        return (e.e1() * derivative(e.e2) + derivative(e.e1()) * e.e2()) / (e.e1() * e.e1());
    }

}// namespace et