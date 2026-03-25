#include <stdio.h>

// 두 정수를 입력받고 비트 AND, OR, XOR 연산을 수행하고, 두 정수에 각각 비트 NOT 연산을 수행한 결과를 출력하시오.

int main() {

	int a, b;

	printf("첫 번째 숫자를 입력해주세요 : ");
	scanf("%d", &a);
	printf("두 번째 숫자를 입력해주세요 : ");
	scanf("%d", &b);

	printf("a AND b = %d\n", a & b);
	printf("a OR b = %d\n", a | b);
	printf("a XOR b = %d\n", a ^ b);
	printf("~a = %d\n", ~a);
	printf("~b XOR b = %d\n", ~b);


	return 0;
}