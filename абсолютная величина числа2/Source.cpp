/* функци€, вычисл€юща€ абсолютную величину числа, втора€ верси€ */
// including the necessary library
#include <cstdlib>

// function that calculates the absolute value of a number
int abs(int x) {
    if (x < 0)
        return (-x);
    else
        return (x);
}
