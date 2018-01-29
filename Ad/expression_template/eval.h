#pragma once

#include "functors.h"
#include "Variable.h"
#include "Constant.h"

namespace et {
    template <typename E1, typename E2>
    auto eval(const binary_expression<add_op, E1, E2>& e)
    {
        return eval(e.e1()) + eval(e.e2());
    }
    template <typename E1, typename E2>
    auto eval(const binary_expression<sub_op, E1, E2>& e)
    {
        return eval(e.e1()) - eval(e.e2());
    }
    template <typename E1, typename E2>
    auto eval(const binary_expression<mul_op, E1, E2>& e)
    {
        return eval(e.e1()) * eval(e.e2());
    }
    template <typename E1, typename E2>
    auto eval(const binary_expression<div_op, E1, E2>& e)
    {
        return eval(e.e1()) / eval(e.e2());
    }
    auto eval(const Variable& e)
    {
        return e.eval();
    }
    auto eval(const zero& e)
    {
        return e.eval();
    }
    auto eval(const one& e)
    {
        return e.eval();
    }
}
