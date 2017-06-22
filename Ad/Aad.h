#pragma once

// std include
#include <memory>

// own include
#include "Ad/Switch.h"
#include "Ad/fwd.h"
#include "Ad/IOperator.h"

namespace ad {
    class Aad {
    public:
        // constructors
        EXPORT_API Aad();
        EXPORT_API Aad(double value);
        EXPORT_API Aad(Aad& other);
        EXPORT_API Aad(Aad&& other);
        EXPORT_API Aad(std::shared_ptr<ComputationalGraph> tree);

        // operator equals
        EXPORT_API Aad& operator =(const Aad& other);
        EXPORT_API Aad& operator =(Aad&& other);

        // unary operators
        //Aad& operator+=(const Aad& rhs);
        //Aad& operator-=(const Aad& rhs);
        //Aad& operator*=(const Aad& rhs);
        //Aad& operator/=(const Aad& rhs);

        //EXPORT_API Aad& operator +(const Aad& rhs);
        //EXPORT_API Aad& operator -(const Aad& rhs);
        //EXPORT_API Aad& operator *(const Aad& rhs);
        //EXPORT_API Aad& operator /(const Aad& rhs);

        //// unary operators with double
        //Aad& operator+=(double x);
        //Aad& operator-=(double x);
        //Aad& operator*=(double x);
        //Aad& operator/=(double x);

        //EXPORT_API Aad& operator +(double x);
        //EXPORT_API Aad& operator -(double x);
        //EXPORT_API Aad& operator *(double x);
        //EXPORT_API Aad& operator /(double x);


        // methods
        EXPORT_API const double value() const;
        EXPORT_API const double getDerivative(const Aad& from) const;
        EXPORT_API std::shared_ptr<ComputationalGraph> tree() const;

        EXPORT_API void diff();

    private:
        double _value;
        std::shared_ptr<ComputationalGraph> _tree;
    };
} // namespace ad
