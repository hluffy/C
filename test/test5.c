//
//  test5.c
//  test
//
//  Created by Rikka on 2017/7/18.
//  Copyright © 2017年 Rikka. All rights reserved.
//

//输入三个整数x,y,z，请把这三个数由小到大输出。

#include <stdio.h>

int main()
{
    int x,y,z,t;
    printf("请输入三个整数\n");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y){
        t = x;
        x = y;
        y = t;
    }
    if(x>z){
        t = x;
        x = z;
        z = t;
    }
    if(y>z){
        t = y;
        y = z;
        z = t;
    }
    
    printf("%d,%d,%d\n",x,y,z);
    
    return 0;
}
