#include <stdio.h>
// TODO: 
int mem_lim(int n)
{
    if (n > 999)
    {
        n = 999;
        printf("Maximum Capacity Reached!(999 Max).");
    }
    return n;
}

int main()
{
    int id[999], grade[999], data[999][2], students, sum=0, count=0;
    double avg;

    printf("Enter The Number Of Students:");
    scanf("%d", &students);
    mem_lim(students);

    printf("Enter The Id and Grade:");
    for (int i=0; i < students; i++)
    {
        scanf("%d%d", &id[i], &grade[i]);
    }

    for (int i=0; i < students; i++)
    {
        data[i][0] = id[i];
        data[i][1] = grade[i];
    }

    printf("\nParallel Arrays:\n");
    for (int i=0; i < students; i++)
        printf("%d. %d %d\n", i + 1, id[i], grade[i]);

    printf("\n2D Array:\n");
    for (int i=0; i < students; i++)
    {
        printf("%d.%d %d\n", i + 1, data[i][0], data[i][1]);
    }
    int  maxID=data[0][0], maxGrade=data[0][1], minID=data[0][0], minGrade=data[0][1];
    //Max Grade
    for (int i=0; i < students; i++){
            if (data[i][1]>maxGrade){
            maxGrade=data[i][1];
            maxID=data[i][0];
            }
    }

    //Min Grade
    for (int i=0; i < students; i++){
        if (data[i][1]<minGrade){
        minGrade=data[i][1];
        minID=data[i][0];
        }
    }

    //Average
    for (int i=0;i<students;i++)
        sum+=data[i][1];
    avg=(double)sum/students;

    //Count > Avg
    for (int i=0;i<students;i++){
        if (data[i][1]>avg) count++; 
    }

    printf("The Average Grade is: %.2f\n",avg);
    printf("The Student With The Highest Grade is: ID:%d Grade:%d\n",maxID,maxGrade);
    printf("The Student With The Lowest Grade is: ID:%d Grade:%d\n",minID,minGrade);
    printf("The Number Of Students Higher Than Average is:%d",count);
    return 0;
}