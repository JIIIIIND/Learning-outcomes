#include<stdio.h>
int main()
{
    char i;
    printf(" *����\n");
    printf(" -��ȣ���� ���� �� û�� �� û�������� �� ����\n\n");

    printf("1.������ȣ�� �߰�\n");
    printf("��ٸ��� ��.....\n");
    Wating:
    printf("û�� ��ȣ�ΰ�?(y/n)");
    fflush(stdin);
    scanf("%c",&i);
     if (i=='y')
    {
        printf("�ǳʴ���....\n");
    }
    else if(i=='n')
    {
        printf("��ٸ��� ��....\n");
        goto Wating;
    }
    else{
        printf("�߸��� �Է��Դϴ�.1\n");
        printf("�ٽ� �Է����ֽʽÿ�.\n");
        goto Wating;
    }
    Blink:
    printf("Ⱦ�ܺ����� �����̴°�?(y/n)");
    fflush(stdin);
    scanf("%c",&i);
    if(i=='y')
    {
        Re:
        printf("�����̴� ������ �� ���� �̻��� �ǳʿԴ°�?(y/n)");
        fflush(stdin);
        scanf("%c",&i);
            if (i=='y')
        {
            printf("�ǳʴ���....\n");
        }
        else if(i=='n')
        {
            printf("�ǵ��ư�����....\n");
            goto Wating;
        }
        else{
            printf("�߸��� �Է��Դϴ�.\n");
            printf("�ٽ� �Է����ֽʽÿ�.\n");
            goto Re;
        }

    }
    else{
            printf("�߸��� �Է��Դϴ�.\n");
            printf("�ٽ� �Է����ֽʽÿ�.\n");
            goto Blink;
        }
    printf("���� Ⱦ��!\n");
    return 0;

}
