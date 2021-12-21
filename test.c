#include <stdio.h>
#include <windows.h>

void Swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b)
	Swap(&a, &b);

    if(a < c)
	Swap(&a, &c);

    if(b < c)
	Swap(&b, &c);

    printf("%d %d %d\n", a, b, c);
    system("pause");
}