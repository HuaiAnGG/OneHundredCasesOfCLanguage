#include <stdio.h>
/**
 * @description: 有1、2、3、4个数字，能组成多少个
 *				互不相同且无重复数字的三位数？各是多少？
 * @author: HuaiAngg
 * @create: 2019-01-23 10:31
 */
int main(void)
{
    int i, j, k, amount = 0;
    printf("---------------------------------------\n");
   	// 以下为三重循环
    for(i=1;i<5;i++) {
        for(j=1;j<5;j++) {
            for (k=1;k<5;k++) { 
				// 确保i、j、k三位互不相同
                if (i!=k&&i!=j&&j!=k) { 
                    printf("%d,%d,%d\n",i,j,k);
                    // 计数器自增 
                    amount ++;
                }
            }
        }
    }
    // 输出个数 
    printf("共有 %d 个组合\n", amount);
    printf("---------------------------------------\n");
    return 0;
}