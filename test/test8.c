//
//  test8.c
//  test
//
//  Created by Rikka on 2017/7/18.
//  Copyright © 2017年 Rikka. All rights reserved.
//
//题目：输出9*9口诀。

#include <stdio.h>

int main()
{
    int i,j,sum;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            sum = i * j;
            printf("%d*%d=%d\t",i,j,sum);
        }
        printf("\n");
    }
}
