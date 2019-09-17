#define  _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "SCORE.h"
#include <string.h>
//查询：输入学号可查询某个学生的成绩信息
void studentInsert(SS stu[], int N)
{
    int i=0;
    char num[11];
    printf("请输入学号：\n");
    scanf("%s",num);
    while(i<N)
    {
        if(strcmp(stu[i].number,num)==0)
        {
            printf("排名:%d	学号：%s	姓名:%s		平时成绩：%4.2f分		实验成绩：%4.2f分		期末成绩:%4.2f分	总成绩:%4.2f分\n\n",stu[i].sort[i],(stu[i].number), stu[i].name, stu[i].dailyScore,stu[i].experimentalScore, stu[i].finalScore,stu[i].generalScore);
            break;
        }
        if(i==N)
            printf("未找到相关记录\n");
        i++;
    }
}
void analysisScore(SS stu[],int N)
{
    float meanValue;    //均值
    float variance;    //方差
    float mean=0.0;
    float vari=0.0;
    for (int i = 0; i < N; i++)
    {
        mean+=stu[i].generalScore;
    }
    meanValue=mean/N;
    for (int i = 0; i < N; i++)
    {
        vari+=pow(stu[i].generalScore-meanValue,2);
    }
    variance=sqrt(vari/N);
    printf("均值:%4.2f		标准方差：%4.2f\n",meanValue,variance);
    getchar();
}
