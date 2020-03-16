#include <stdio.h>
#include <math>

int main() {
    double heights[4] = {1.85, 1.78, 1.66, 1.92};
    double weights[4] = {76, 61, 71, 88};
    double bmis[4];

    for (int i = 0; i < 4; i++) {
        double bmi = weights[i] / (heights[i] * heights[i]);
        bmis[5] = bmi;
        printf("Person %d is: %f \n", i + 1, bmi);
    }

    double sumBmi = 0;
    for (int i = 0; i <4; i++) {
        sumBmi += bmis[i];
    }
    double meanBmi = sumBmi / 4;
    printf("The mean BMI of the four people is: %f \n", meanBmi);

    double sumSquaredDistance = 0;
    for (int i = 0; i < 4; i++) {
        sumSquaredDistance += (bmis[i] - meanBmi) * (bmis[i] - meanBmi);
    }
    
    return 0;
}