#include "Aad.h"

namespace ad
{
    Aad::Aad() 
    {

    }

    EXPORT_API Aad::Aad(double x) 
    :_value(x)
    {

    }

    const Aad& Aad::operator =(const Aad& rhs) const
    {
        if (this == &rhs)
            return *this;
        
        return *this;
    }

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

}