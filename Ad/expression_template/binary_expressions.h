#pragma once

namespace et {
    template<typename F, typename E1, typename E2>
    class binary_expression
    {
    public:
        binary_expression(const E1& e1, const E2& e2)
        :_e1(e1), _e2(e2)
        {
        }
        const E1& e1() const
        {
            return _e1;
        }

        const E2& e2() const
        {
            return _e2;
        }

    private:
        E1 _e1;
        E2 _e2;
    };
}
