#include <bits/stdc++.h>
using namespace std;
struct str
{
    long long t, e;
};
const long long MaxN = 2e5 + 5;
long long n;
long long now;
str p[MaxN];
int main()
{
    scanf("%d", &n);
    for (long long i = 1; i <= n; i++)
    {
        scanf("%d%d", &p[i].t, &p[i].e);
    }
    sort(p + 1, p + 1 + n, [](str x, str y) { return x.e < y.e; });
    for (long long i = 1; i <= n; i++)
    {
        now += p[i].t;
        if (now > p[i].e)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}