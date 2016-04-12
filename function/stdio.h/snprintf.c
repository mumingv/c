/***********************************************************
 *     FileName: snprintf.c
 *         Desc: 格式化输出到字符串
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-04-12 22:35:52
 *      History:
 ***********************************************************/

/**
 * int snprintf(char *str, size_t size, const char *format, ...);
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    char string[80];
    snprintf(string, sizeof(string), "Just for c lerning. By %s.", "muming");
    puts(string);
    return 0;
}

