#include <stdio.h>

// 구구단을 수행할 수 있는 프로그램을 scanf와 연산자를 사용하여 작성하시오.

int main()
{
	int num;  // 단 입력받을 변수 이름 num으로 정의

	printf("단을 입력하세요"); // 단 입력 안내
	scanf("%d", &num); // 단 입력 받기

	printf("===%d단===\n", num);  // 출력할 단 안내
	printf("%d * 1 = %d\n", num, num * 1); // 1단 출력
	printf("%d * 2 = %d\n", num, num * 2); // 2단 출력
	printf("%d * 3 = %d\n", num, num * 3); // 3단 출력
	printf("%d * 4 = %d\n", num, num * 4); // 4단 출력
	printf("%d * 5 = %d\n", num, num * 5); // 5단 출력
	printf("%d * 6 = %d\n", num, num * 6); // 6단 출력
	printf("%d * 7 = %d\n", num, num * 7); // 7단 출력
	printf("%d * 8 = %d\n", num, num * 8); // 8단 출력
	printf("%d * 9 = %d\n", num, num * 9); // 9단 출력

	return 0; // 반환값 0, 프로그램 종료
}
