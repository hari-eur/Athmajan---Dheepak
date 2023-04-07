#include <stdio.h>

struct Student_Details {
    char Name[50];
    char mailID[50];
    long long Mobile_number;
    float Percentage;
};

struct Department {
    char Dept_Name[50];
    struct Student_Details stu_details;
    float TotalAverage;
};

int main() {
    int n, i, j;
    printf("Number of Inputs: ");
    scanf("%d", &n);

    struct Department dept[n];

    for (i = 0; i < n; i++) {
        printf("Enter Department Name: ");
        scanf("%s", dept[i].Dept_Name);

        printf("Enter Student Name: ");
        scanf("%s", dept[i].stu_details.Name);

        printf("Enter Student Mail ID: ");
        scanf("%s", dept[i].stu_details.mailID);

        printf("Enter Student Mobile Number: ");
        scanf("%lld", &dept[i].stu_details.Mobile_number);

        printf("Enter Student Percentage: ");
        scanf("%f", &dept[i].stu_details.Percentage);

        dept[i].TotalAverage = dept[i].stu_details.Percentage;
    }

    printf("Number of branches: %d\n", n);

    printf("Average percentage per Department:\n");

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(dept[i].Dept_Name, dept[j].Dept_Name) == 0) {
                dept[i].TotalAverage += dept[j].stu_details.Percentage;
                dept[j].stu_details.Percentage = 0; // To avoid duplicate addition
            }
        }
        if (dept[i].stu_details.Percentage != 0) {
            printf("%s - %.2f%%\n", dept[i].Dept_Name, dept[i].TotalAverage);
        }
    }

    return 0;
}
