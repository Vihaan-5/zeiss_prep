import numpy as np


def forward_kinematics(theta1, theta2, L1=0.5, L2=0.4):
    x = L1 * np.cos(theta1) + L2 * np.cos(theta1 + theta2)
    y = L1 * np.sin(theta1) + L2 * np.sin(theta1 + theta2)
    return x, y


print(forward_kinematics(0, 0))
print(forward_kinematics(np.radians(90), 0))
