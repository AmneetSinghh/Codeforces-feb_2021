  #include <bits/stdc++.h>
 
    using namespace std;
 
    int main()
    {
        int a0, a1, a2, k0, k1, k2, n;
        scanf("%d %d %d %d %d", &a1, &a2, &k1, &k2, &n);
        //??a1?k????a2
 
        if(k1 < k2)
        {
            swap(k1, k2);
            swap(a1, a2);
        }
        a0 = a1 * (k1 - 1) + a2 *(k2 - 1);
        if(n <= a0)
            printf("0 ");
        else if(n - a0 <= a1 + a2)
            printf("%d ", n - a0);
        else
            printf("%d ", a1 + a2);
 
        if(n < a2 * k2)
            printf("%d\n", n / k2);
        else if(n < a2 * k2 + a1 * k1)
            printf("%d\n", a2 + (n - a2 * k2) / k1);
        else
            printf("%d\n", a1 + a2);
             return 0;
}
