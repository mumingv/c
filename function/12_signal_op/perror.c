/***********************************************************
 *     FileName: perror.c
 *         Desc: 打印出错的原因描述字符串
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-04-18 19:46:31
 *      History:
 ***********************************************************/

#include <stdio.h>
int main (void)
{
    FILE *fp;
    fp = fopen("/foo/bar", "r");
    if (fp == NULL)
        perror("I found an error"); //I found an error: No such file or directory
    return 0;
}

