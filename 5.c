#include <stdio.h>

// 화씨온도(℉)를 섭씨로 변환하는 수식을 참고해서 섭씨온도(℃ )를 화씨로 변환하는 프로그램을 작성하시오.
// ℃ =5/9 (℉−32)


int main() {
	double celsius, fahrenheit;

	printf("변환할 섭씨 온도를 입력해주세요 : ");
	scanf("%lf", &celsius);
	fahrenheit = (9.0 / 5.0) * celsius + 32;

	printf("%lf", fahrenheit);

	return 0;
}