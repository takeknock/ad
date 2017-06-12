#include "Aad.h"

#include <utility>


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
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        tmp = other._tree;
        std::swap(_tree, tmp);

        _value = other._value;
        _derivative = other._derivative;

        return *this;
    }

    const Aad& Aad::operator =(Aad&& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        tmp = other._tree;
        std::swap(_tree, tmp);

        _value = other._value;
        _derivative = other._derivative;
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