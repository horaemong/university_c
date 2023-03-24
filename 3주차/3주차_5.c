//#include <stdio.h>
//
//void main()
//{
//	//bmi 계산기
//
//	// 변수 선언
//	int kg, cm;
//	double bmi, m;
//
//	// 입력
//	printf("몸무게를 입력하세요 : ");
//	scanf_s("%d", &kg);
//	printf("키를 입력하세요 : ");
//	scanf_s("%d", &cm);
//
//	// 계산
//	m = (double)cm / 100;
//	/*bmi = (double)kg / (((double)cm/100) * ((double)cm/100));*/
//	bmi = (double)kg / (m * m);
//
//	printf("당신의 BMI는 %.2f입니다.", bmi);
//}