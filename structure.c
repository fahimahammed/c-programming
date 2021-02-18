#include<stdio.h>
struct Student{
    int id;
    float cgpa;
    char name[20];
};

int main(){
    struct Student s;
    printf("Enter your ID: ");
    scanf("%d",&s.id);
    printf("Enter your CGPA: ");
    scanf("%f",&s.cgpa);
    printf("Enter your Name: ");
    scanf("%s",&s.name);

    printf("ID: %d, Name: %s, CGPA: %0.3f",s.id, s.name, s.cgpa);
    return 0;
}
