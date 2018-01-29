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

    //template<typename E1, typename E2>
    //class binary_expression<add_op, E1, E2>
    //{
    //public:
    //    auto apply() const
    //    {
    //        return e1().apply() + e2().apply();
    //    }
    //};
    //template<typename E1, typename E2>
    //class binary_expression<sub_op, E1, E2>
    //{
    //public:
    //    auto apply() const
    //    {
    //        return e1().apply() - e2().apply();
    //    }
    //};

    //template<typename E1, typename E2>
    //class binary_expression<mul_op, E1, E2>
    //{
    //public:
    //    auto apply() const
    //    {
    //        return e1().apply() * e2().apply();
    //    }
    //};

    //template<typename E1, typename E2>
    //class binary_expression<div_op, E1, E2>
    //{
    //public:
    //    auto apply() const
    //    {
    //        return e1().apply() / e2().apply();
    //    }
    //};
}


