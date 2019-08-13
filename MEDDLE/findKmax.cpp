// author - newguo@sonaspy.cn
// coding - utf_8

#include <bits/stdc++.h>

#define test() freopen("in", "r", stdin)

using namespace std;
void FindMaxK(int a[], int s, int e, int k)
{
    if (s - e + 1 == k)
        return;
    int key = a[s];
    int i = s, j = e;
    while (i != j)
    {
        while (j > i && a[j] >= key)
            --j;
        swap(a[i], a[j]);
        while (i < j && a[i] <= key)
            ++i;
        swap(a[i], a[j]);
    }
    if (e - i + 1 == k)
        return;
    else if (e - i + 1 > k)
        FindMaxK(a, i + 1, e, k);
    else
        FindMaxK(a, s, i - 1, k - e + i - 1);
}
int a[1000];
int main(int argc, char const *argv[])
{
    /* code */
    //test();
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    int k;
    scanf("%d", &k);
    FindMaxK(a, 0, n - 1, k);
    //for(int i = 0;i < n; ++i)
    //	cout << a[i] << ",";
    //cout << endl;
    sort(a + n - k - 1, a + n);
    for (int i = n - 1; i >= n - k; --i)
        printf("%d\n", a[i]);
    return 0;
}