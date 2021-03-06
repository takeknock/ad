#include "Aad.h"

#include <utility>

#include "Ad/functions.h"

namespace ad
{
    // constructors
    Aad::Aad()
    : _value(0.0), _tree(nullptr)
    {
    }

    Aad::Aad(double value)
    :_value(value), _tree(nullptr)
    {
    }

    Aad::Aad(std::shared_ptr<ComputationalGraph> tree)
    :_tree(std::shared_ptr<ComputationalGraph>(tree))
    {
    }

    Aad::Aad(Aad& other)
    {
        _tree = other._tree;
        _value = other._value;
    }

    Aad::Aad(Aad&& other)
    {
        _tree = other._tree;
        _value = other._value;
    }

    // operator equals
    Aad& Aad::operator =(const Aad& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        std::swap(_tree, tmp);

        _value = other._value;

        return *this;
    }

    Aad& Aad::operator =(Aad&& other)
    {
        std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
        std::swap(_tree, tmp);

        _value = other._value;
        return *this;
    }

    // unary operators
    //Aad& Aad::operator +(const Aad& rhs)
    //{
    //    //Aad parent = Aad();
    //    //parent._tree->addLeft(std::shared_ptr<Aad>(this));
    //    //parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));
    //    //parent._tree->addLeft(*this);
    //    //parent._tree->addRight(rhs);

    //    //parent._value = _value + rhs._value;
    //    //parent._derivative = _derivative + rhs._derivative;

    //    //_value = _value + rhs._value;
    //    //_derivative = _derivative + rhs._derivative;

    //    *this += rhs;
    //    return *this;
    //}

    //Aad& Aad::operator -(const Aad& rhs)
    //{
    //    //Aad parent = Aad();
    //    //parent._tree->addLeft(std::shared_ptr<Aad>(this));
    //    //parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));
    //    ////parent._tree->addLeft(*this);
    //    ////parent._tree->addRight(rhs);

    //    //parent._value = _value - rhs._value;
    //    //parent._derivative = _derivative - rhs._derivative;

    //    //return parent;

    //    *this -= rhs;
    //    return *this;
    //}

    //Aad& Aad::operator *(const Aad& rhs)
    //{
    //    //std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*rhs._tree));
    //    //std::swap(tmp, _tree);
    //    //Aad parent = Aad();
    //    //parent._tree->addLeft(std::shared_ptr<Aad>(this));
    //    //parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));
    //    ////parent._tree->addLeft(*this);
    //    ////parent._tree->addRight(rhs);

    //    //parent._value = _value * rhs._value;
    //    //parent._derivative = _derivative * rhs._value + _value * rhs._derivative;

    //    //return parent;
    //    *this *= rhs;
    //    return *this;

    //}

    //Aad& Aad::operator /(const Aad& rhs)
    //{
    //    //Aad parent = Aad();
    //    //parent._tree->addLeft(std::shared_ptr<Aad>(this));
    //    //parent._tree->addRight(std::shared_ptr<Aad>(const_cast<Aad*>(&rhs)));
    //    ////parent._tree->addLeft(*this);
    //    ////parent._tree->addRight(rhs);

    //    ////const std::shared_ptr<ComputationalGraph> tmp(new ComputationalGraph(*_tree));
    //    ////std::swap(tmp, rhs._tree);
    //    //parent._value = _value / rhs._value;
    //    //parent._derivative = (_derivative * rhs._value - _value * rhs._derivative) / (rhs._value * rhs._value);

    //    //return parent;
    //    *this /= rhs;
    //    return *this;
    //}

    //Aad& Aad::operator+=(const Aad& rhs)
    //{
    //    *this._tree = rhs.get
    //    _value = _value + rhs._value;
    //    _derivative = _derivative + rhs._derivative;

    //    return *this;
    //}

    //Aad& Aad::operator-=(const Aad& rhs)
    //{
    //    _value = _value - rhs._value;
    //    _derivative = _derivative - rhs._derivative;

    //    return *this;
    //}

    //Aad& Aad::operator*=(const Aad& rhs)
    //{
    //    _value = _value * rhs._value;
    //    _derivative = _derivative * rhs._value + _value * rhs._derivative;

    //    return *this;
    //}

    //Aad& Aad::operator/=(const Aad& rhs)
    //{
    //    _value = _value / rhs._value;
    //    _derivative = (_derivative * rhs._value - _value * rhs._derivative) / (rhs._value * rhs._value);

    //    return *this;
    //}

    //// unary operators with double
    //Aad& Aad::operator+=(double x)
    //{
    //    _value = _value + x;
    //    return *this;
    //}
    //Aad& Aad::operator-=(double x)
    //{
    //    _value = _value - x;
    //    return *this;
    //}

    //Aad& Aad::operator*=(double x)
    //{
    //    _value = _value * x;
    //    return *this;
    //}

    //Aad& Aad::operator/=(double x)
    //{
    //    _value = _value - x;
    //    return *this;
    //}

    //Aad& Aad::operator +(double x)
    //{
    //    *this += x;
    //    return *this;
    //}

    //Aad& Aad::operator -(double x)
    //{
    //    *this -= x;
    //    return *this;
    //}

    //Aad& Aad::operator *(double x)
    //{
    //    *this *= x;
    //    return *this;
    //}

    //Aad& Aad::operator /(double x)
    //{
    //    *this /= x;
    //    return *this;
    //}

    // methods
    const double Aad::value() const
    {
        return _value;
    }

    const double Aad::getDerivative(const Aad& from) const
    {
        dfs(_tree);
        _tree->setDerivative(1.0);
        rdfs(_tree);
        return 0.0;
    }

    std::shared_ptr<ComputationalGraph> Aad::tree() const
    {
        return _tree;
    }

    void Aad::diff()
    {
        dfs(_tree);
        _tree->setDerivative(1.0);
        rdfs(_tree);

    }

    


} // namespace ad