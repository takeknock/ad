#include "operators.h"

namespace ad {

    Aad& operator +(const Aad& lhs, const Aad& rhs)
    {
        return lhs + rhs;
    }
    Aad& operator -(const Aad& lhs, const Aad& rhs)
    {
        return lhs - rhs;
    }
    Aad& operator *(const Aad& lhs, const Aad& rhs)
    {
        return lhs * rhs;
    }
    Aad& operator /(const Aad& lhs, const Aad& rhs)
    {
        return lhs * rhs;
    }

    Aad& operator +(const Aad& lhs, double x)
    {
        return lhs + x;
    }
    Aad& operator -(const Aad& lhs, double x)
    {
        return lhs - x;
    }
    Aad& operator *(const Aad& lhs, double x)
    {
        return lhs * x;
    }
    Aad& operator /(const Aad& lhs, double x)
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
