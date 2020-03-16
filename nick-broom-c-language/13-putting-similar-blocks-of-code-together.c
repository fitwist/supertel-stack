int main() {
    double heights[4] = {1.85, 1.78, 1.66, 1.92};
    double weights[4] = {76, 61, 71, 88};

    double personOneBmi = weights[0] / (heights[0] * heights[0]);
    double personTwoBmi = weights[1] / (heights[1] * heights[1]);
    double personThreeBmi = weights[2] / (heights[2] * heights[2]);
    double personFourBmi = weights[3] / (heights[3] * heights[3]);

    printf("Person 1 BMI is: %f \n", personOneBmi);
    printf("Person 2 BMI is: %f \n", personTwoBmi);
    printf("Person 2 BMI is: %f \n", personThreeBmi);
    printf("Person 2 BMI is: %f \n", personFourBmi);
    
    return 0;
}