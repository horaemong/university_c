#include <stdio.h>
#include <string.h>

void main()
{
	/*char sample[] = { "what a wonerful world" };
	printf("���� ���ڿ��� ���̴� %d�Դϴ�.\n", strlen(sample));*/

	/*char sample[50], ex[50];
	printf("ù��° ���ڿ��� �Է��ϼ��� : ");
	gets_s(sample, sizeof(sample));
	printf("�ι�° ���ڿ��� �Է��ϼ��� : ");
	gets_s(ex, sizeof(ex));
	if (strcmp(sample, ex) == 0)
	{
		printf("�� ���ڿ��� �����ϴ�.\n");
	}
	else
	{
		if (strcmp(sample, ex) >0)
		{
			printf("ù��° ���ڿ��� �� Ů�ϴ�.\n");
		}
		else
		{
			printf("�� ��° ���ڿ��� �� Ů�ϴ�.\n");
		}
	}*/

	/*char text[] = {"I like you, how about you"};
	int ptr;
	ptr = strchr(text, 'o');
	printf("[%s]���� ������ o�� %p�ּҿ� �Դϴ�.\n", text, ptr);
	printf("%s\n", ptr);*/


	char text[] = { "I like you, how about you" };
	int str;
	str = strstr(text, "you");
	printf("[%s]���� ���ڿ� you�� %d�ּҿ� �ֽ��ϴ�.\n", text, str);
	//printf("%s\n", str);

	if (strstr(text, "like"))
	{
		printf("like�� ����ֽ��ϴ�.");
	}
}