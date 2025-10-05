#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks[5];
    float total;
    float average;
    char grade;
};

// Function to calculate total, average, and grade
void calculateResults(struct Student *s) {
    s->total = 0;
    for (int i = 0; i < 5; i++) {
        s->total += s->marks[i];
    }
    s->average = s->total / 5.0;

    if (s->average >= 90)
        s->grade = 'A';
    else if (s->average >= 75)
        s->grade = 'B';
    else if (s->average >= 60)
        s->grade = 'C';
    else if (s->average >= 40)
        s->grade = 'D';
    else
        s->grade = 'F';
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Studen
