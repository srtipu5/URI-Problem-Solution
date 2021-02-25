#include<stdio.h>
int main ()
{
    int n, num, i, total = 0, total_C = 0, total_R=0, total_S = 0;
    double per_c, per_s, per_r;
    char ch;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf ("%d %c", &num, &ch);
        if (ch == 'C')
            total_C = total_C + num;
        else if (ch == 'R')
            total_R = total_R + num;
        else if (ch == 'S')
            total_S = total_S + num;
    }
    total =total_C+total_S+total_R;
    per_c =(100.00 * total_C) / total;
    per_s =(100.00 * total_S) / total;
    per_r =(100.00 * total_R) / total;

    printf ("Total: %d cobaias\nTotal de coelhos: %d\n", total, total_C);
    printf ("Total de ratos: %d\nTotal de sapos: %d\n", total_R, total_S);
    printf ("Percentual de coelhos: %.2lf %\n", per_c);
    printf ("Percentual de ratos: %.2lf %\n", per_r);
    printf ("Percentual de sapos: %.2lf %\n", per_s);

    return 0;

}

