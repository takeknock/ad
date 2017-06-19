#include "Aad.h"

#include <utility>


namespace ad
{
    // constructors
    Aad::Aad()
    {
    }

    Aad::Aad(double value)
    :_value(value), _derivative(0.0)
    {
    }

    Aad::Aad(Aad& other)
    {
        _tree = other._tree;
        _value = other._value;
        _derivative = other._derivative;
    }

    Aad::Aad(Aad&& other)
    {
        _tree = other._tree;
        _value = other._value;
        _derivative = other._derivative;
    }

    // operator equals
    Aad& Aad::operator =(const Aad& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        std::swap(_tree, tmp);

        _value = other._value;
        _derivative = other._derivative;

        return *this;
    }

    Aad& Aad::operator =(Aad&& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        std::swap(_tree, tmp);

        _value = other._value;
        _derivative = other._derivative;
        return *this;
    }

    // unary operators
    Aad& Aad::operator +(const Aad& rhs)
    {
        //Aad parent = Aad();
        //parent._tree->addLeft(std::shared_ptr<Aad>(this));
        //parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));
        //parent._tree->addLeft(*this);
        //parent._tree->addRight(rhs);

        //parent._value = _value + rhs._value;
        //parent._derivative = _derivative + rhs._derivative;

        //_value = _value + rhs._value;
        //_derivative = _derivative + rhs._derivative;

        *this += rhs;
        return *this;
    }

    Aad& Aad::operator -(const Aad& rhs)
    {
        //Aad parent = Aad();
        //parent._tree->addLeft(std::shared_ptr<Aad>(this));
        //parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));
        ////parent._tree->addLeft(*this);
        ////parent._tree->addRight(rhs);

        //parent._value = _value - rhs._value;
        //parent._derivative = _derivative - rhs._derivative;

        //return parent;

        *this -= rhs;
        return *this;
    }

    Aad& Aad::operator *(const Aad& rhs)
    {
        //std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*rhs._tree));
        //std::swap(tmp, _tree);
        //Aad parent = Aad();
        //parent._tree->addLeft(std::shared_ptr<Aad>(this));
        //parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));
        ////parent._tree->addLeft(*this);
        ////parent._tree->addRight(rhs);

        //parent._value = _value * rhs._value;
        //parent._derivative = _derivative * rhs._value + _value * rhs._derivative;

        //return parent;
        *this *= rhs;
        return *this;

    }

    Aad& Aad::operator /(const Aad& rhs)
    {
        //Aad parent = Aad();
        //parent._tree->addLeft(std::shared_ptr<Aad>(this));
        //parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));
        ////parent._tree->addLeft(*this);
        ////parent._tree->addRight(rhs);

        ////const std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        ////std::swap(tmp, rhs._tree);
        //parent._value = _value / rhs._value;
        //parent._derivative = (_derivative * rhs._value - _value * rhs._derivative) / (rhs._value * rhs._value);

        //return parent;
        *this /= rhs;
        return *this;
    }

    Aad& Aad::operator+=(const Aad& rhs)
    {
        _value = _value + rhs._value;
        _derivative = _derivative + rhs._derivative;

        return *this;
    }

    Aad& Aad::operator-=(const Aad& rhs)
    {
        _value = _value - rhs._value;
        _derivative = _derivative - rhs._derivative;

        return *this;
    }

    Aad& Aad::operator*=(const Aad& rhs)
    {
        _value = _value * rhs._value;
        _derivative = _derivative * rhs._value + _value * rhs._derivative;

        return *this;
    }

    Aad& Aad::operator/=(const Aad& rhs)
    {
        _value = _value / rhs._value;
        _derivative = (_derivative * rhs._value - _value * rhs._derivative) / (rhs._value * rhs._value);

        return *this;
    }

    // unary operators with double
    Aad& Aad::operator+=(double x)
    {
        _value = _value + x;
        return *this;
    }
    Aad& Aad::operator-=(double x)
    {
        _value = _value - x;
        return *this;
    }

    Aad& Aad::operator*=(double x)
    {
        _value = _value * x;
        return *this;
    }

    Aad& Aad::operator/=(double x)
    {
        _value = _value - x;
        return *this;
    }

    Aad& Aad::operator +(double x)
    {
        *this += x;
        return *this;
    }

    Aad& Aad::operator -(double x)
    {
        *this -= x;
        return *this;
    }

    Aad& Aad::operator *(double x)
    {
        *this *= x;
        return *this;
    }

    Aad& Aad::operator /(double x)
    {
        *this /= x;
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