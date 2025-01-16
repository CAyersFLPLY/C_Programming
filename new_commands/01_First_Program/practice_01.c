#include <stdio.h>

int main(void) {
    char name[] = "Chris Ayers";
    int c_id = 2271;
    int s_id = 17409;
    int difference = c_id - s_id;
    printf("Name: %s\n", name);
    printf("Course ID: %d\n", c_id);
    printf("Student ID: %d\n", s_id);
    printf("Course ID - Student ID is: %d", difference);
    return 0;
}