#include <stdio.h>
#include <math.h>

double bmis[4];

double calculateBmiMean() {
    double sumBmi = 0;
    for(int i = 0; i < 4; i ++){
        sumBmi += bmis[i];
    }
    double meanBmi = sumBmi / 4;
    return meanBmi;
}

double calculateBmiSd(double meanBmi) {
    
    double sumSquaredDistance = 0;
    for(int i = 0; i < 4; i ++){
        sumSquaredDistance += (bmis[i] - meanBmi) * (bmis[i] - meanBmi);
    }

    double sd = sqrt(sumSquaredDistance / 4);
    return sd;
}

int main(){
    double heights[4] = {1.85, 1.78, 1.66, 1.92};
    double weights[4] = {76, 61, 71, 88};

    for(int i = 0; i < 4; i ++){
        double bmi = weights[i] / (heights[i] * heights[i]);
        bmis[i] = bmi;
        printf("Person %d is: %f \n", i + 1, bmi);
    }
    
    double meanBmi = calculateBmiMean();
    printf("The mean BMI of the four people is: %f \n", meanBmi);
    printf("The standard deviatiation of the BMI of the four people is: %f \n", calculateBmiSd(meanBmi));
    
    return 0;
}