#include <iostream>

using namespace std;

// Convert fahrenheit to celsius
double ftoc(double f) {
    double c = (5.0f / 9.0f) * (f - 32.0f);
    return c;
}

int main() {
    for (int f = 0; f <= 20; f++) {
        printf("%dF --> %.2lfC \n", f, ftoc(f));
    }
    return 0;
}
