//
//  test4.c
//  test
//
//  Created by Rikka on 2017/7/18.
//  Copyright © 2017年 Rikka. All rights reserved.
//

//输入某年某月某日，判断这一天是这一年的第几天？

#include <stdio.h>
int main()
{
    int day,month,year,sum,leap;
    printf("请输入年月日，格式为：年，月，日\n");
    scanf("%d,%d,%d",&year,&month,&day);
    switch(month) // 先计算某月以前月份的总天数
    {
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:printf("data error");break;
    }
    sum = sum + day;
    if(year%400==0||(year%4==0&&year%100!=0)){
        leap = 1;
    }else{
        leap = 0;
    }
    if(leap==1&&month>2){
        sum ++;
    }
    printf("这是这一年的第 %d 天！\n",sum);
    
    return 0;
    
}
