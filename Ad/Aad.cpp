#include "Aad.h"

namespace ad
{
    // constructors
    Aad::Aad() 
    {
    }

    Aad::Aad(double x)
        :_value(x)
    {
    }

    Aad::Aad(const Aad& other)
    {
    }

    Aad::Aad(Aad&& other)
    {
    }

    // operator equals
    const Aad& Aad::operator =(const Aad& other)
    {
        if (this == &other)
            return *this;
        return *this;
    }

    const Aad& Aad::operator =(Aad&& other)
    {
        if (this == &other)
            return *this;
        return *this;
    }

    // unary operators
    const Aad& Aad::operator +(const Aad& rhs) const
    {
        return *this;
    }

    const Aad& Aad::operator -(const Aad& rhs) const
    {
        return *this;
    }

    const Aad& Aad::operator *(const Aad& rhs) const
    {
        return *this;

    }

    const Aad& Aad::operator /(const Aad& rhs) const
    {
        return *this;
    }

    const Aad& Aad::operator+=(const Aad& rhs) const
    {
        return *this;
    }

    const Aad& Aad::operator-=(const Aad& rhs) const
    {
        return *this;
    }

    const Aad& Aad::operator*=(const Aad& rhs) const
    {
        return *this;
    }

    const Aad& Aad::operator/=(const Aad& rhs) const
    {
        return *this;
    }

    // methods
    const double Aad::value() const
    {
        return _value;
    }

    const double Aad::getDerivative(const Aad& from) const
    {
        return _derivative;
    }

} // namespace ad