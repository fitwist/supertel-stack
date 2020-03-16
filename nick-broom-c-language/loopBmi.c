/*
    This is a 
    quick comment
*/
int main() {
    double heights[4] = {1.85, 1.78, 1.66, 1.92};
    double weights[4] = {76, 61, 71, 88};

    // Decided not to add another function to keep program as short as possible
    for (int i = 0; i < 4; i++) {
        double bmi = weights[i] / (heights[i] * heights[i]);
        printf("Person %d BMI is: %f \n", i+1, bmi);
    }
    
    return 0;
}