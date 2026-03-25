#include <stdio.h>

// 두 정수를 입력받아 사칙연산(+, -, *, /) 및 나머지 연산을 수행하는 프로그램을 작성하시오.
// + , -, *, / , % 의 모든 연산 결과 출력  1, 2 입력 시 출력결과 : 1 + 2 = 3, 1 – 2 = -1 ...


int main() {
	int a, b;

	printf("첫 번째 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("두 번째 숫자를 입력하세요 : ");
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);

	return 0;


}