#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f;
    float x, y;
    printf("Dame el valor de a, b, c, d, e, f\n");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    x=(float)((c*e)-(b*f))/(a*e)-(b*d);
    y=(float)((a*f)-(c*d))/((a*e)-(b*d));
    printf("%d x + %d y = %d\n", a, b, c);
    printf("%d x + %d y = %d\n", d, e, f);
    printf("para los valores\nx=%f\ny=%f", x, y);
    return 0;
}
