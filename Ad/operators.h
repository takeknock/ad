#pragma once
#include "Ad/Aad.h"

namespace ad {
    class IOperator {

    };
    static struct op_add : public IOperator {};
    static struct op_sub : public IOperator {};
    static struct op_mul : public IOperator {};
    static struct op_div : public IOperator {};


    // non member functions
    EXPORT_API Aad operator +(const Aad& lhs, const Aad& rhs);
    EXPORT_API Aad operator -(const Aad& lhs, const Aad& rhs);
    EXPORT_API Aad operator *(const Aad& lhs, const Aad& rhs);
    EXPORT_API Aad operator /(const Aad& lhs, const Aad& rhs);

    EXPORT_API Aad operator +(const Aad& lhs, double x);
    EXPORT_API Aad operator -(const Aad& lhs, double x);
    EXPORT_API Aad operator *(const Aad& lhs, double x);
    EXPORT_API Aad operator /(const Aad& lhs, double x);

    EXPORT_API Aad operator +(double lhs, const Aad& rhs);
    EXPORT_API Aad operator -(double lhs, const Aad& rhs);
    EXPORT_API Aad operator *(double lhs, const Aad& rhs);
    EXPORT_API Aad operator /(double lhs, const Aad& rhs);

    Aad& operator+=(Aad& lhs, const Aad& rhs);
    Aad& operator-=(Aad& lhs, const Aad& rhs);
    Aad& operator*=(Aad& lhs, const Aad& rhs);
    Aad& operator/=(Aad& lhs, const Aad& rhs);


} // namespace ad