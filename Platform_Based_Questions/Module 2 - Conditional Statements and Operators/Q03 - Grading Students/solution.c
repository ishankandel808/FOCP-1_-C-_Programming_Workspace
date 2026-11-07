#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count)
{
    int *result = (int *)malloc(grades_count * sizeof(int));
    *result_count = grades_count;

    for (int i = 0; i < grades_count; i++) {
        int grade = grades[i];

        if (grade >= 38) {
            int nextMultiple = ((grade + 4) / 5) * 5;
            if (nextMultiple - grade < 3)
                grade = nextMultiple;
        }

        result[i] = grade;
    }

    return result;
}
