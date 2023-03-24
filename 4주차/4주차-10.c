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
//	printf("키를 입력하세요 : ");
//	scanf_s("%d", &cm);
//	printf("몸무게를 입력하세요 : ");
//	scanf_s("%d", &kg);
//	
//
//	// 계산
//	m = (double)cm / 100;
//	/*bmi = (double)kg / (((double)cm/100) * ((double)cm/100));*/
//	bmi = (double)kg / (m * m);
//	
//	printf("bmi지수는 %.2f입니다.\n", bmi);
//	//평가 결과
//	if (bmi<18.5)
//	{
//		printf("저체중 입니다.\n");
//	}
//	else if (bmi < 24.9)
//	{
//		printf("정상체중 입니다.\n");
//	}
//	else if (bmi < 29.9)
//	{
//		printf("과체중 입니다.\n");
//	}
//	else
//	{
//		printf("비만 입니다.\n");
//	}
//}