#include <stdio.h>
// std -- standard
// i -- input
// o -- output


//int main() {
//	printf("hello bit\n");
//	printf("%d\n", 100);
//	printf("%f\n", 3.14); // %f �q�{���L�X�Ӫ��O7��
//	printf("%lf\n", 100.0);
//
//	return 0;
//}


// �r�Ŧ�i�H�s��b�r�żƲդ�
// string.h
// strlen��^���O size_t����	

int main() {
	

	char arr1[] = "abcdef"; // arr1���]�t\0

	char arr2[] = { 'a','b','c','d','e','f', '\0'}; // arr2�����]�t\0


	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	printf("%d\n", strlen("C:\test\bit\114\test.c"));
	// �@����q�r�ź�@�Ӧr��

	return 0;
}