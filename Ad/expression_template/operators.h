#pragma once
#include "fanctors.h"
#include "binary_expressions.h"

namespace et {
    template<typename E1, typename E2>
    auto operator +(const E1& x, const E2& y)
    {
        return binary_expression<add_op, E1, E2>(x, y);
    }
    
    template<typename E1, typename E2>
    auto operator -(const E1& x, const E2& y)
    {
        return binary_expression<sub_op, E1, E2>(x, y);
    }

    template<typename E1, typename E2>
    auto operator *(const E1& x, const E2& y)
    {
        return binary_expression<mul_op, E1, E2>(x, y);
    }

    template<typename E1, typename E2>
    auto operator /(const E1& x, const E2& y)
    {
        return binary_expression<div_op, E1, E2>(x, y);
    }

}// namespace et {


