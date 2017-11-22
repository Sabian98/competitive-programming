#include<stdio.h>
#include<math.h>
float s,d,a,b,c;
main()
{
    scanf("%f %f %f", &a, &b, &c);
    s=a+b+c;
    d=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f",d);
    return 0;
}

