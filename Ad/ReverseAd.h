#pragma once


namespace ad {
    class ReverseAd {
    public:
        ReverseAd(const double x)
        {
            _value = x;
        }

    private:
        double _value;
    };
} // namespace ad {
