#include<stdio.h>
/**
 * @description: �������� 
 * @author: HuaiAngg
 * @create: 2019-01-23 19:45 
 */
int main(void)
{
    double i;
    double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
    printf("��ľ������ǣ�\n");
    // �������� 
    scanf("%lf", &i);
    // ����(I)���ڻ����10��Ԫʱ 
    bonus1 = 100000 * 0.1;
    // ����10��Ԫ�Ĳ��֣������7.5% 
    bonus2 = bonus1 + 100000*0.075;
	// ����20��Ԫ�Ĳ��֣������5%�� 
    bonus4 = bonus2 + 200000*0.05;
    // ����40��Ԫ�Ĳ��֣������3%�� 
    bonus6 = bonus4 + 200000*0.03;
    // ����60��Ԫ�Ĳ��֣������1.5%�� 
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
    	// ����100��Ԫ�Ĳ��ְ�1%��ɡ� 
        bonus = bonus10 + (i - 1000000) * 0.01;
    }
    printf("���Ϊ��bonus=%lf", bonus);
    printf("\n");
    
    return 0;
}