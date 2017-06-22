#include "operators.h"

namespace ad {

    Aad operator +(const Aad& lhs, const Aad& rhs)
    {
        std::shared_ptr<ComputationalGraph> ret(
            new ComputationalGraph(op_add(), lhs.value() + rhs.value(), lhs.tree(), rhs.tree()));
            
        return Aad(ret);
    }
    Aad operator -(const Aad& lhs, const Aad& rhs)
    {
        return lhs - rhs;
    }
    Aad operator *(const Aad& lhs, const Aad& rhs)
    {
        return lhs * rhs;
    }
    Aad operator /(const Aad& lhs, const Aad& rhs)
    {
        return lhs * rhs;
    }

    Aad operator +(const Aad& lhs, double x)
    {
        return lhs + x;
    }
    Aad operator -(const Aad& lhs, double x)
    {
        return lhs - x;
    }
    Aad operator *(const Aad& lhs, double x)
    {
        return lhs * x;
    }
    Aad operator /(const Aad& lhs, double x)
    {
        return lhs / x;
    }

    Aad& operator+=(Aad& lhs, const Aad& rhs)
    {
        return lhs;
    }
    Aad& operator-=(Aad& lhs, const Aad& rhs)
    {
        return lhs;
    }
    Aad& operator*=(Aad& lhs, const Aad& rhs)
    {
        return lhs;
    }
    Aad& operator/=(Aad& lhs, const Aad& rhs)
    {
        return lhs;
    }

}
