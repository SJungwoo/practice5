#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

//�¾�� ���� �ð�
int main(void)
{
	/*double light_speed = 300000;
	double distance = 149600000;

	double time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("���� �ӵ��� %lfkm/s\n", light_speed);
	printf("�¾�� �������� �Ÿ� %lfkm\n", distance);
	printf("���� �ð��� %lf��\n",time);*/

	return 0;
}

//ȭ�� �µ� ��ȯ�ϱ�
int main(void)
{ 
	/*double c, f;

	printf("ȭ���µ� = ");
	scanf("%lf", &f);
	
	c = (f - 32.0) * 5.0 / 9.0;
	printf("�����µ� = %lf\n", c);*/

		return 0;
}

//���� ���� ���
int main(void)
{
	double r, a;
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &r);
    
	a = r * r * PI;
	printf("���� ����: %lf\n", a);

	return 0;
}

//get ascii
int main(void)
{
	char c = 'A';
	printf("A�� �ƽ�Ű �ڵ� = %d\n", c);

	printf("���ڸ� �Է��Ͻÿ�: ");
	c = getchar();

	printf("%c�� �ƽ�Ű �ڵ� = %d\n", c, c);

	return 0;
}

//escape
int main(void)
{
	int id, pass;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");
	printf("id: ____\b\b\b\b");
	scanf("%d", &id);
	printf("pass: ____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);
	return 0;
}

int main(void)
{
	printf("\ac programming\nclass\n");
	return 0;
}
