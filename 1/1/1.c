#include <stdio.h>
// std -- standard
// i -- input
// o -- output


//int main() {
//	printf("hello bit\n");
//	printf("%d\n", 100);
//	printf("%f\n", 3.14); // %f 纐粄ゴㄓ琌7
//	printf("%lf\n", 100.0);
//
//	return 0;
//}


// 才﹃才计舱い
// string.h
// strlen琌 size_t摸	

int main() {
	

	char arr1[] = "abcdef"; // arr1い\0

	char arr2[] = { 'a','b','c','d','e','f', '\0'}; // arr2いぃ\0


	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	printf("%d\n", strlen("C:\test\bit\114\test.c"));
	// 锣竡才衡才

	return 0;
}