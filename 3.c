#include <stdio.h>
#define PI 3.14

// 기호상수를 사용하여 원뿔의 부피를 계산하는 프로그램을 작성하시오.
// 밑면의 반지름은 scanf로 입력받으시오.
// 원뿔의 부피 공식은 다음과 같다.
// ?? = 1 / 3 ???? ^ 2 ?


int main() {
	double r, h, volume;

	printf("원뿔의 반지름을 입력하세요");
	scanf("%lf", &r);

	printf("원뿔의 높이를 입력하세요");
	scanf("%lf", &h);

	volume = (1.0 / 3.0) * PI * r * r * h;

	printf("원뿔의 부피는 %lf", volume);

	return 0;
}