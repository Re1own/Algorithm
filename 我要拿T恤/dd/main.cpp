#include <stdio.h>
int a[1000];    //������������������
int main()
{
    int k,n,number,i; //n��ʾ���뼸�����֣�k��ʾ��Ҫ�Ҽ��Σ�number��ʾ��Ҫ�ҵ�����
    scanf("%d",&n); //�������ֵĶ���
    for (i = 0; i < n; i++) //��һ��forѭ������Ҫ�������
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k); //������Ҫ���ҵĴ���
    while(k--)  //ѭ��k��
    {
        int numberok;
        scanf("%d",&number);    //��ѭ��������Ҫ�ҵ�����
        numberok = 0;  //Ҫ�ҵĴ𰸣��������������������
        for (i = 0; i < n; i++)
        {
            if (number < a[i])  //�𰸾��Ǳ���������ִ�����С���ҵ��˾�ֹͣѭ��
            {
                numberok = a[i];
                break;
            }
        }
        if (number < numberok) //�б仯�˾ʹ����ҵ���
            printf("%d\n",numberok);
        else    //����û�ҵ�
            printf("Orz\n");
    }
    return 0;
}
