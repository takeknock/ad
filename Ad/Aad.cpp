#include "Aad.h"

#include <utility>


namespace ad
{
    // constructors
    Aad::Aad() 
    :_derivative(1.0)
    {
    }

    Aad::Aad(double x)
    :_value(x), _derivative(1.0)
    {
    }

    Aad::Aad(const Aad& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        tmp = other._tree;
        std::swap(_tree, tmp);

        _value = other._value;
        _derivative = other._derivative;
    }

    Aad::Aad(Aad&& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        tmp = other._tree;
        std::swap(_tree, tmp);

        _value = other._value;
        _derivative = other._derivative;

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
        
        return Aad(*this) += rhs;
    }

    const Aad& Aad::operator -(const Aad& rhs) const
    {
        return Aad(*this) -= rhs;
    }

    const Aad& Aad::operator *(const Aad& rhs) const
    {
        return Aad(*this) *= rhs;

    }

    const Aad& Aad::operator /(const Aad& rhs) const
    {
        return Aad(*this) /= rhs;
    }

    const Aad& Aad::operator+=(const Aad& rhs)
    {
        _value = _value + rhs._value;
        _derivative = _derivative + rhs._derivative;

        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*rhs._tree));
        std::swap(tmp, _tree);
        return *this;
    }

    const Aad& Aad::operator-=(const Aad& rhs)
    {
        _value = _value - rhs._value;
        _derivative = _derivative - rhs._derivative;

        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*rhs._tree));
        std::swap(tmp, _tree);
        return *this;
    }

    const Aad& Aad::operator*=(const Aad& rhs)
    {
        _value = _value * rhs._value;
        _derivative = _derivative * rhs._value + _value * rhs._derivative;

        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*rhs._tree));
        std::swap(tmp, _tree);
        return *this;
    }

    const Aad& Aad::operator/=(const Aad& rhs)
    {
        _value = _value / rhs._value;
        _derivative = (_derivative * rhs._value - _value * rhs._derivative) / (rhs._value * rhs._value);

        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*rhs._tree));
        std::swap(tmp, _tree);
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