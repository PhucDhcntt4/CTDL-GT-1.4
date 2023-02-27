#include<stdio.h>
#include<conio.h>
#include<math.h>

typedef struct ToaDo {
	int x;
	int y;
	int z;
}TOADO;
void nhapToaDo(TOADO*a)
{
	printf("NHap tao do x:");
	scanf("%d",&a->x);
	printf("NHap tao do y:");
	scanf("%d",&a->y);
	printf("NHap tao do z:");
	scanf("%d",&a->z);
}
void xuatToaDo(TOADO a)
{
	printf("=> toa do la :(%d,%d,%d)\n",a.x,a.y,a.z);
}
int main()
{
	TOADO a;
	nhapToaDo(&a);
	xuatToaDo(a);
	return 0;
}
