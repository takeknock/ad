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
        *this = other;
    }

    Aad::Aad(Aad&& other)
    {
        *this = other;
    }

    // operator equals
    const Aad& Aad::operator =(const Aad& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        std::swap(_tree, tmp);

        _value = other._value;
        _derivative = other._derivative;

        return *this;
    }

    const Aad& Aad::operator =(Aad&& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        std::swap(_tree, tmp);

        _value = other._value;
        _derivative = other._derivative;
        return *this;
    }

    // unary operators
    const Aad Aad::operator +(const Aad& rhs)
    {
        Aad parent = Aad();
        parent._tree->addLeft(std::shared_ptr<Aad>(this));
        parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));

        parent._value = _value + rhs._value;
        parent._derivative = _derivative + rhs._derivative;
        
        return parent;
    }

    const Aad Aad::operator -(const Aad& rhs)
    {
        Aad parent = Aad();
        parent._tree->addLeft(std::shared_ptr<Aad>(this));
        parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));

        parent._value = _value - rhs._value;
        parent._derivative = _derivative - rhs._derivative;

        return parent;
    }

    const Aad Aad::operator *(const Aad& rhs)
    {
        //std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*rhs._tree));
        //std::swap(tmp, _tree);
        Aad parent = Aad();
        parent._tree->addLeft(std::shared_ptr<Aad>(this));
        parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));

        parent._value = _value * rhs._value;
        parent._derivative = _derivative * rhs._value + _value * rhs._derivative;

        return parent;
    }

    const Aad Aad::operator /(const Aad& rhs)
    {
        Aad parent = Aad();
        parent._tree->addLeft(std::shared_ptr<Aad>(this));
        parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));

        //const std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        //std::swap(tmp, rhs._tree);
        parent._value = _value / rhs._value;
        parent._derivative = (_derivative * rhs._value - _value * rhs._derivative) / (rhs._value * rhs._value);

        return parent;
    }

    const Aad& Aad::operator+=(const Aad& rhs)
    {
        _value = _value + rhs._value;
        _derivative = _derivative + rhs._derivative;

        return *this;
    }

    const Aad& Aad::operator-=(const Aad& rhs)
    {
        _value = _value - rhs._value;
        _derivative = _derivative - rhs._derivative;

        return *this;
    }

    const Aad& Aad::operator*=(const Aad& rhs)
    {
        _value = _value * rhs._value;
        _derivative = _derivative * rhs._value + _value * rhs._derivative;

        return *this;
    }

    const Aad& Aad::operator/=(const Aad& rhs)
    {
        _value = _value / rhs._value;
        _derivative = (_derivative * rhs._value - _value * rhs._derivative) / (rhs._value * rhs._value);

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