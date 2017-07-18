//
//  test1.c
//  test
//
//  Created by Rikka on 2017/7/18.
//  Copyright © 2017年 Rikka. All rights reserved.
//

//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include <stdio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int i,j,k;
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            for(k=1;k<5;k++){
                if(i!=j&&i!=k&&j!=k){
                    printf("%d,%d,%d\n",i,j,k);
                }
            }
        }
    }
}
