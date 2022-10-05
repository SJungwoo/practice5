#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

//태양빛 도달 시간
int main(void)
{
	/*double light_speed = 300000;
	double distance = 149600000;

	double time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("빛의 속도는 %lfkm/s\n", light_speed);
	printf("태양과 지구와의 거리 %lfkm\n", distance);
	printf("도달 시간은 %lf분\n",time);*/

	return 0;
}

//화씨 온도 변환하기
int main(void)
{ 
	/*double c, f;

	printf("화씨온도 = ");
	scanf("%lf", &f);
	
	c = (f - 32.0) * 5.0 / 9.0;
	printf("섭씨온도 = %lf\n", c);*/

		return 0;
}

//원의 면적 계산
int main(void)
{
	double r, a;
	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &r);
    
	a = r * r * PI;
	printf("원의 면적: %lf\n", a);

	return 0;
}

//get ascii
int main(void)
{
	char c = 'A';
	printf("A의 아스키 코드 = %d\n", c);

	printf("문자를 입력하시오: ");
	c = getchar();

	printf("%c의 아스키 코드 = %d\n", c, c);

	return 0;
}

//escape
int main(void)
{
	int id, pass;

	printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n");
	printf("id: ____\b\b\b\b");
	scanf("%d", &id);
	printf("pass: ____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);
	return 0;
}

int main(void)
{
	printf("\ac programming\nclass\n");
	return 0;
}
