#include <stdio.h>

float sum(float a[] ) {//合計を求める関数
	float x = 0;
	int i;
	for (i = 0; i < 3; i++) {
		x = x + a[i];
	}
	return x;
}
int main(void) {//表示するmain関数
	float num[3];
	printf("3つの整数値を入力してください\n");
	scanf("%f %f %f", &num[0], &num[1], &num[2]);
	printf("入力した数の合計は%fです。\n", sum(num));
}

/*
課題work9
上にならって平均を求める関数を作って、表示させてみましょう。
*/