#pragma once

namespace ad {
    class IOperators {

    };
    static struct op_add : public IOperators {};
    static struct op_sub : public IOperators {};
    static struct op_mul : public IOperators {};
    static struct op_div : public IOperators {};

} // namespace ad