#include <iostream>
#include <cmath>

void forwardKinematics(double t1, double t2, double L1, double L2) {
    double x = L1 * std::cos(t1) + L2 * std::cos(t1 + t2);
    double y = L1 * std::sin(t1) + L2 * std::sin(t1 + t2);
    std::cout << "x = " << x << ", y = " << y << std::endl;
}

int main() {
    forwardKinematics(0.0, 0.0, 0.5, 0.4);
    forwardKinematics(M_PI / 2, 0.0, 0.5, 0.4);
    return 0;
}
