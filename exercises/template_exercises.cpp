#include <cstddef>
#include <utility>

template <typename T>
T Add(T x, T y)
{
    return x + y;
}

template <typename T>
T ArraySum(const T *pArr, size_t arrSize)
{
    T sum{};
    for (size_t i = 0; i < arrSize; i++)
    {
        sum += pArr[i];
    }
    return sum;
}

template <typename T>
T Max(const T *pArr, size_t arrSize)
{
    if (arrSize <= 0)
        return 0;
    T max = pArr[0];
    for (size_t i = 0; i < arrSize; i++)
    {
        if (pArr[i] > max)
            max = pArr[i];
    }
    return max;
}

template <typename T>
std::pair <T, T> MinMax(const T *pArr, size_t arrSize)
{
    if (arrSize <= 0)
        return std::make_pair(0,0);
    T max = pArr[0];
    T min = pArr[0];
    for (size_t i = 0; i < arrSize; i++)
    {
        if (pArr[i] > max)
        {
            max = pArr[i];
        }
        if (pArr[i] < min)
        {
            min = pArr[i];
        }
    }
    return std::make_pair(min, max);
}
/*

int Add(int x, int y)
{
    return x + y;
}

int ArraySum(const int *pArr, size_t arrSize)
{
    int sum{};
    for (size_t i = 0; i < arrSize; i++)
    {
        sum += pArr[i];
    }
    return sum;
}

int Max(const int *pArr, size_t arrSize)
{
    if (arrSize <= 0)
        return 0;
    int max = pArr[0];
    for (size_t i = 0; i < arrSize; i++)
    {
        if (pArr[i] > max)
            max = pArr[i];
    }
    return max;
}

std::pair <int, int> MinMax(const int *pArr, size_t arrSize)
{
    if (arrSize <= 0)
        return std::make_pair(0,0);
    int max = pArr[0];
    int min = pArr[0];
    for (size_t i = 0; i < arrSize; i++)
    {
        if (pArr[i] > max)
        {
            max = pArr[i];
        }
        if (pArr[i] < min)
        {
            min = pArr[i];
        }
    }
    return std::make_pair(min, max);
}

*/

