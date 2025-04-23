#include <stdio.h>
#include <string.h>

typedef struct 
{
    int Eday;
    int Emonth;
    int Eyear;
} DOB;

typedef struct
{
    int ID;
    char name[100];
    DOB dob;
} EMPLOYEE;

void getDetails(EMPLOYEE *details);
int getAge(EMPLOYEE details, int Cday, int Cmonth, int Cyear);
void display(EMPLOYEE details, int age);
void trimLine(char str[]);

int main(void)
{
    EMPLOYEE details;
    int Cday, Cmonth, Cyear;

    printf("Enter the current day, month, year (dd/mm/yyyy): ");
    scanf("%d %d %d", &Cday, &Cmonth, &Cyear);
    getchar();

    getDetails(&details);
    int age = getAge(details, Cday, Cmonth, Cyear);
    display(details, age);

    return 0;
}

void getDetails(EMPLOYEE *details)
{
    printf("Enter the employee ID: ");
    scanf("%d", &details->ID);
    getchar();

    printf("Enter the name of the employee: ");
    fgets(details->name, sizeof(details->name), stdin);
    trimLine(details->name);

    printf("Enter the date of birth of the employee (dd mm yyyy): ");
    scanf("%d %d %d", &details->dob.Eday, &details->dob.Emonth, &details->dob.Eyear);
    getchar();
}

int getAge(EMPLOYEE details, int Cday, int Cmonth, int Cyear)
{
    int age = Cyear - details.dob.Eyear;

    if (Cmonth < details.dob.Emonth || 
       (Cmonth == details.dob.Emonth && Cday < details.dob.Eday))
        age--;

    return age;
}

void display(EMPLOYEE details, int age)
{
    printf("Employee ID: %d\n", details.ID);
    printf("%s is an employee of CIT-U. These are his details: \n", details.name);
    printf("Date of Birth: %d/%d/%d\n", details.dob.Eday, details.dob.Emonth, details.dob.Eyear);
    printf("Current Age: %d years old\n", age);
}

void trimLine(char str[]) 
{
    char *newline = strpbrk(str, "\r\n");
    if (newline) *newline = '\0';
}
