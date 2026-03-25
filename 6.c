#include <stdio.h>

// 두 정수를 입력받고, 복합 대입 연산자를 사용하여  다음 조건을 만족하는 프로그램을 작성하시오
// a에 b를 더하시오 -> 그 결과에 b를 빼시오 -> 그 결과에 b를 곱하시오 -> 그 결과를 b로 나누시오


int main() {
	int a, b;

	printf("첫 번째 숫자를 입력해주세요 : ");
	scanf("%d", &a);
	printf("두 번째 숫자를 입력해주세요 : ");
	scanf("%d", &b);

	a += b;
	printf("%d\n", a);
	printf("---\n");

	a -= b;
	printf("%d\n", a);
	printf("---\n");

	a *= b;
	printf("%d\n", a);
	printf("---\n");

	a /= b;
	printf("%d\n", a);
	printf("---\n");

	return 0;

}