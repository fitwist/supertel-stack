void printPersonBmi(double weight, double height, int personNumber) {
    double bmi = weight / height * height;
    printf("Person 1 BMI is: %f \n", personNumber, bmi);
}

int main() {
    double heights[4] = {1.85, 1.78, 1.66, 1.92};
    double weights[4] = {76, 61, 71, 88};

    printPersonBmi(weights[0], heights[0], 1);
    printf("Person 2 says Hello! \n");
    printPersonBmi(weights[1], heights[1], 2);
    printf("Person 3 says Hello! \n");
    printPersonBmi(weights[2], heights[2], 3);
    printPersonBmi(weights[3], heights[3], 4);
    
    return 0;
}