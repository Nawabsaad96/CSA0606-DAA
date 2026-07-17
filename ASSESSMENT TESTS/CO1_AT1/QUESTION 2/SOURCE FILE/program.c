#include <stdio.h>

int main()
{
    int n;
    int present = 0, absent = 0;

    printf("Smart Attendance System\n");
    printf("-----------------------\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    int attendance[n];

    for(int i = 0; i < n; i++)
    {
        printf("Student %d (1-Present, 0-Absent): ", i + 1);
        scanf("%d", &attendance[i]);

        if(attendance[i] == 1)
            present++;
        else
            absent++;
    }

    printf("\nAttendance Report\n");
    printf("-----------------\n");
    printf("Total Students : %d\n", n);
    printf("Present        : %d\n", present);
    printf("Absent         : %d\n", absent);

    printf("\nComplexity Analysis\n");
    printf("-------------------\n");
    printf("Time Complexity  : O(n)\n");
    printf("Space Complexity : O(n)\n");

    return 0;
}
