#include<stdio.h>
/**
 * @description: 计算利润 
 * @author: HuaiAngg
 * @create: 2019-01-23 19:45 
 */
int main(void)
{
    double i;
    double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
    printf("你的净利润是：\n");
    // 输入利润 
    scanf("%lf", &i);
    // 利润(I)低于或等于10万元时 
    bonus1 = 100000 * 0.1;
    // 高于10万元的部分，可提成7.5% 
    bonus2 = bonus1 + 100000*0.075;
	// 高于20万元的部分，可提成5%； 
    bonus4 = bonus2 + 200000*0.05;
    // 高于40万元的部分，可提成3%； 
    bonus6 = bonus4 + 200000*0.03;
    // 高于60万元的部分，可提成1.5%； 
    bonus10 = bonus6 + 400000*0.015;
    if(i <= 100000) {
        bonus = i*0.1;
    } else if(i <= 200000) {
        bonus = bonus1 + (i - 100000) * 0.075;
    } else if(i <= 400000) {
        bonus = bonus2 + (i - 200000) * 0.05;
    } else if(i <= 600000) {
        bonus = bonus4 + (i - 400000) * 0.03;
    } else if(i <= 1000000) {
        bonus = bonus6 + (i - 600000) * 0.015;
    } else if(i > 1000000) {
    	// 超过100万元的部分按1%提成。 
        bonus = bonus10 + (i - 1000000) * 0.01;
    }
    printf("提成为：bonus=%lf", bonus);
    printf("\n");
    
    return 0;
}