//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  int sum = 0;
    
    if (gender == 'b') {
        // Sum of marks at even indices (0, 2, 4, ...)
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else if (gender == 'g') {
        // Sum of marks at odd indices (1, 3, 5, ...)
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    
    return sum;
}
