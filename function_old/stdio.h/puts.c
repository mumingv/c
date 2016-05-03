/***********************************************************
 *     FileName: puts.c
 *         Desc: 将字符串写到流stdout中
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-04-12 21:56:16
 *      History:
 ***********************************************************/

/**
 * int puts(const char *s);
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    char string[] = "Just for c learning.\n";
    puts(string);
    return 0;
}

