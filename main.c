#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	
	
	printf("���ڸ� �Է��ϼ���:");
	scanf ("%i",&a);
	
	printf("�и� �Է��ϼ���:");
	scanf ("%i",&b);
	
	printf("������ ����� %f �Դϴ�.\n",(float)a/b);

	system("PAUSE");
	return 0;
}
