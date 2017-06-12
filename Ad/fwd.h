#pragma once

#ifdef EXPORT_DLL
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API __declspec(dllimport)
#endif

namespace ad {
    class Aad;
} // namespace ad