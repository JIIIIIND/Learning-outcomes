#include<stdio.h>
int main()
{
    int i;

    printf("*����\n");
    printf("-������ ����,��ȸ�� ��ȸ���� �Ҽ��ִ�.\n");
    printf("-������ȣ�� ���� �� û��,û�� ��ȸ�� �� ���� �����̴�\n\n");

    printf("1.������ �������� �����.\n");
    start:
    printf("���� ������ ���� Ȥ�� ��ȸ���ΰ�?(y/n)");
    fflush(stdin);
    scanf("%c",&i);

    if(i=='y')
    {
        Wating:
        printf("����Ѵ�....\n");
        Re:
        printf("������ȣ���� û���ΰ�?(y/n)");
        fflush(stdin);
        scanf("%c",&i);

        if(i=='y')
        {
            printf("���� Ȥ�� ��ȸ�� �Ѵ�.");
        }
        else if (i=='n')
        {
            goto Wating;
        }
        else{
            printf("�߸��� �Է��Դϴ�.\n");
            printf("�ٽ� �Է����ֽʽÿ�.\n");
            goto Re;
        }
    }
    else if (i=='n')
    {
        printf("��ȸ�� �Ѵ�.");
    }
    else{
            printf("�߸��� �Է��Դϴ�.\n");
            printf("�ٽ� �Է����ֽʽÿ�.\n");
            goto start;
    }
    return 0;
}
