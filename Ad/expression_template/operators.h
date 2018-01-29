#pragma once
#include "functors.h"
#include "binary_expressions.h"
#include "Constant.h"

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

    template<typename E>
    auto operator +(const E& e, const zero& x)
    {
        return e;
    }

    template<typename E>
    auto operator +(const zero& x, const E& e)
    {
        return e;
    }

    template<typename E>
    auto operator *(const E& e, const zero& x)
    {
        return x;
    }

    template<typename E>
    auto operator *(const zero& x, const E& e)
    {
        return x;
    }

    template<typename E>
    auto operator *(const E& e, const one& x)
    {
        return e;
    }

    template<typename E>
    auto operator *(const one& x, const E& e)
    {
        return e;
    }
}// namespace et {


