#define  _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "SCORE.h"
#include <string.h>
//��ѯ������ѧ�ſɲ�ѯĳ��ѧ���ĳɼ���Ϣ
void studentInsert(SS stu[], int N)
{
    int i=0;
    char num[11];
    printf("������ѧ�ţ�\n");
    scanf("%s",num);
    while(i<N)
    {
        if(strcmp(stu[i].number,num)==0)
        {
            printf("����:%d	ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��		ʵ��ɼ���%4.2f��		��ĩ�ɼ�:%4.2f��	�ܳɼ�:%4.2f��\n\n",stu[i].sort[i],(stu[i].number), stu[i].name, stu[i].dailyScore,stu[i].experimentalScore, stu[i].finalScore,stu[i].generalScore);
            break;
        }
        if(i==N)
            printf("δ�ҵ���ؼ�¼\n");
        i++;
    }
}
void analysisScore(SS stu[],int N)
{
    float meanValue;    //��ֵ
    float variance;    //����
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
    printf("��ֵ:%4.2f		��׼���%4.2f\n",meanValue,variance);
    getchar();
}
