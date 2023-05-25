#include <stdio.h>
#include <string.h>

void main()
{
	/*char sample[] = { "what a wonerful world" };
	printf("현재 문자열의 길이는 %d입니다.\n", strlen(sample));*/

	/*char sample[50], ex[50];
	printf("첫번째 문자열을 입력하세요 : ");
	gets_s(sample, sizeof(sample));
	printf("두번째 문자열을 입력하세요 : ");
	gets_s(ex, sizeof(ex));
	if (strcmp(sample, ex) == 0)
	{
		printf("두 문자열은 같습니다.\n");
	}
	else
	{
		if (strcmp(sample, ex) >0)
		{
			printf("첫번째 문자열이 더 큽니다.\n");
		}
		else
		{
			printf("두 번째 문자열이 더 큽니다.\n");
		}
	}*/

	/*char text[] = {"I like you, how about you"};
	int ptr;
	ptr = strchr(text, 'o');
	printf("[%s]에서 영문자 o는 %p주소에 입니다.\n", text, ptr);
	printf("%s\n", ptr);*/


	char text[] = { "I like you, how about you" };
	int str;
	str = strstr(text, "you");
	printf("[%s]에서 문자열 you는 %d주소에 있습니다.\n", text, str);
	//printf("%s\n", str);

	if (strstr(text, "like"))
	{
		printf("like가 들어있습니다.");
	}
}