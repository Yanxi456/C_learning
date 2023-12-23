#include <studio.h>

int(main) {
	printf("请输入你的身高，如七尺四寸");

	double foot;
	double inch;

	scanf("%lf,%lf", foot, inch);

	printf("您的身高是：%lf./n", ((foot + inch / 12) * 0.3048));


}