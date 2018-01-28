#pragma once

struct plus {
public:
    static double apply(const double a, const double b)
    {
        return a + b;
    }
};

struct sub {
public:
    static double apply(const double a, const double b)
    {
        return a - b;
    }
};

struct mul {
public:
    static double apply(const double a, const double b)
    {
        return a * b;
    }
};

struct div {
public:
    static double apply(const double a, const double b)
    {
        return a / b;
    }
};

template<typename Left, typename Op, typename Right>
struct X {
    Left leftNode_;
    Right rightNode_;
    X(Left t1, Right t2)
    :leftNode_(t1), rightNode_(t2)
    {}

    double operator[](int i)
    {
        return Op::apply(leftNode_[i], rightNode_[i]);
    }
};

struct Array {
    Array(double* data, int N)
    :data_(data), N_(N)
    {

    }

    template<typename Left, typename Op, typename Right>
    void operator=(X<Left, Op, Right> expression)
    {
        for (std::size_t i = 0; i < N_; ++i) {
            data_[i] = expression[i];
        }
    }

    double operator[](int i)
    {
        return data_[i];
    }

private:
    double* data_;
    int N_;
};

template<typename Left>
X<Left, plus, Array> operator+(Left a, Array b)
{
    return X<Left, plus, Array>(a, b);
}
