#include <stdio.h>
/**
 * @description: ��1��2��3��4�����֣�����ɶ��ٸ�
 *				������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
 * @author: HuaiAngg
 * @create: 2019-01-23 10:31
 */
int main(void)
{
    int i, j, k, amount = 0;
    printf("---------------------------------------\n");
   	// ����Ϊ����ѭ��
    for(i=1;i<5;i++) {
        for(j=1;j<5;j++) {
            for (k=1;k<5;k++) { 
				// ȷ��i��j��k��λ������ͬ
                if (i!=k&&i!=j&&j!=k) { 
                    printf("%d,%d,%d\n",i,j,k);
                    // ���������� 
                    amount ++;
                }
            }
        }
    }
    // ������� 
    printf("���� %d �����\n", amount);
    printf("---------------------------------------\n");
    return 0;
}