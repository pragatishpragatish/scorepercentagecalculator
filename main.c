#include <stdio.h>

int main()
{
    int rollno;
    char name[20];
    float msub1, msub2, msub3, msub4, msub5, total, score;
    
    printf("Enter Your Roll Number:");
    scanf("%d", &rollno);
    printf("Enter Your Name:");
    scanf("%s", name);
    printf("Enter Your Marks in 5 Subjects:");
    scanf("%f%f%f%f%f", &msub1, &msub2, &msub3, &msub4, &msub5);
    total=(msub1+msub2+msub3+msub4+msub5);
    score=total/5;
    printf("Your Rollno is:%d", rollno);
    printf("\nYour Name is:%s", name);
    printf("\nYour score is:%f", score);

    return 0;
}

