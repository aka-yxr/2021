#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<stdlib.h>

//int main()
//{
//    int n, i = 0, sum = 0, k = 0;
//    scanf("%d", &n);
//    for (i = 2; i < sqrt(n) + 1; i++)
//    {
//        if ((n % i) != 0)
//            continue;
//        int num = n;
//        int j = i, count = 0;
//        while ((num % j) == 0)
//        {
//            num = num / j;
//            j++;
//            count++;
//        }
//        if (sum < count)
//        {
//            sum = count;
//            k = i;
//        }
//    }
//    if (!sum)
//        printf("%d\n%d\n", 1, n);
//    else
//    {
//        printf("%d\n", sum);
//        for (i = k; i < k + sum - 1; i++)
//        {
//            printf("%d*", i);
//        }
//
//        printf("%d\n", i);
//    }
//
//    return 0;
//}

//程序的环境和预处理
//int main()
//{
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#define eps 1e-5
//
//int main()
//{
//    double x, sum = 1.0;
//    scanf("%lf", &x);
//    double result = 1.0;
//    int i;
//    for (i = 1; ; i++)
//    {
//        result = (result * x) / i;
//        sum += result;
//        if (result < eps) {
//            break;
//        }
//    }
//    printf("%.4f", sum);
//
//    return 0;
//}

/*nt main()
{
    int n = 0;
    scanf("%d", &n);
    double zi = 2, mu = 1;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double tmp = zi;
        sum += zi * 1.0 / mu;
        zi += mu;
        mu = tmp;

    }
    printf("%.2f", sum);

    return 0;
}*/

//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int five = 0, two = 0, one = 0, i = 0;
//    int total = 0, count = 0;
//    for (five = n / 5; five >= 0; five--)
//    {
//        for (two = (n - five * 5) / 2; two >= 0; two--)
//        {
//            for (one = n - five * 5 - two * 2; one >= 0; one--)
//            {
//                if ((five * 5 + two * 2 + one) == n && five >= 1 && two >= 1 && one >= 1)
//                {
//                    total = five + two + one;
//                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", five, two, one, total);
//                    count++;
//                }
//            }
//        }
//    }
//    printf("count = %d\n", count);
//    return 0;
//}


//int main()
//{
//    char ch[50];
//    scanf("%s", ch);
//    double minus = 1;
//    if (ch[0] == '-')
//        minus = 1.5;
//    int len = strlen(ch);
//    double ou = 1.0;
//    if ((ch[len - 1] - '0') % 2 == 0)
//        ou = 2.0;
//    double sum = 0, count = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (ch[i] == '2')
//            count++;
//    }
//    sum = (count * 1.0 / len) * ou * minus;
//    printf("%.2f", sum * 100);
//    printf("%\n");
//    return 0;
//
//}

//int main()
//{
//    int hh, mm;
//    scanf("%d:%d", &hh, &mm);
//    if (hh >= 0 && hh <= 12)
//    {
//        if (hh == 12 && mm > 0)
//            printf("Dang\n");
//        else
//            printf("Only %02d:%02d.  Too early to Dang.\n", hh, mm);
//    }
//    else if (hh > 12 && hh < 24)
//    {
//        int i = 0;
//        if (mm == 0)
//        {
//            for (i = 0; i < hh - 12; i++)
//                printf("Dang");
//        }
//        else
//        {
//            for (i = 0; i < hh - 11; i++)
//                printf("Dang");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n, num, eve = 0, ou = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        if (num % 2 == 0)
//            ou++;
//        else
//            eve++;
//    }
//    printf("%d %d", eve, ou);
//    return 0;
//}
