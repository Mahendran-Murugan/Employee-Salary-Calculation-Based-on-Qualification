#include <stdio.h>

struct Employee
{
    int genderch, qualificationch;
    int year, salary;
};

int main()
{
    int n;
    printf("Enter the No. of Employees: ");
    scanf("%d", &n);
    struct Employee e[n];
    printf("Enter the Details: \n");
    for (int i = 0; i < n; i++)
    {
        printf("For Employee %d: \n", i + 1);
        printf("Select Your Gender:\n1.Male\n2.Female\nEnter Your Choice: ");
        scanf("%d", &e[i].genderch);
        printf("Enter your Years of Service: ");
        scanf("%d", &e[i].year);
        printf("Select Your Qualification:\n1.Post-Graduate\n2.Graduate\nEnter Your Choice: ");
        scanf("%d", &e[i].qualificationch);
        if (e[i].genderch == 1 && e[i].year >= 10 && e[i].qualificationch == 1)
        {
            e[i].salary = 15000;
        }
        else if (e[i].genderch == 1 && e[i].year >= 10 && e[i].qualificationch == 2 || e[i].genderch == 1 && e[i].year < 10 && e[i].qualificationch == 1 || e[i].genderch == 2 && e[i].year < 10 && e[i].qualificationch == 1)
        {
            e[i].salary = 10000;
        }
        else if (e[i].genderch == 1 && e[i].year < 10 && e[i].qualificationch == 2)
        {
            e[i].salary = 7000;
        }
        else if (e[i].genderch == 2 && e[i].year >= 10 && e[i].qualificationch == 1)
        {
            e[i].salary = 12000;
        }
        else if (e[i].genderch == 2 && e[i].year >= 10 && e[i].qualificationch == 2)
        {
            e[i].salary = 9000;
        }
        else if (e[i].genderch == 2 && e[i].year < 10 && e[i].qualificationch == 2)
        {
            e[i].salary = 6000;
        }
        printf("Your Salary is: %d\n", e[i].salary);
    }
    return 0;
}
