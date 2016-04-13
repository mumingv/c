/***********************************************************
 *     FileName: atoi.c
 *         Desc: 将字符串转换成整数
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-04-13 15:01:56
 *      History:
 ***********************************************************/

/**
 * 语法：int atoi(const char *nptr);
 * 说明：该函数会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字或正负符号才开始做转换，而再遇到非数字或字符串结束时('\0')才结束转换
 */

/**
 * 示例：将字符串a 与字符串b转换成数字后相加
 */
#include<stdlib.h>
int main(int argc, char *argv[])
{
    char a[] = "-100";
    char b[] = "456";
    int c;
    c = atoi(a) + atoi(b);
    printf("c = %d\n", c); //356
    return 0;
}

