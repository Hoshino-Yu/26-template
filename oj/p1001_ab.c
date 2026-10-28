/* 洛谷 P1001 A+B Problem
 * 日期：2026-11-05
 * 思路：读入两个整数，输出它们的和
 * 卡点：第一次写 scanf 忘了 & 取地址，程序输出乱值
 */
#include <stdio.h>

int main(void)
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }
    printf("%d\n", a + b);
    return 0;
}