#include <bits/stdc++.h>

using namespace std;

const int mod = 100000;
int quick_power(int a, int x)
{
    if (x == 0) return 1;
    if (x == 1) return a;
    int k = quick_power(a,x/2)%mod;
    if (x % 2 == 0) return k*k;
    else    return a*k%mod*k;
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int m = s1.length(), n = s2.length();
    int power = quick_power(33,n-1);    //必须是n-1的指数，因为指数是从零开始的
                                        //power的作用是计算以后每次减去前面的字符串的第一个字符乘以power就是剩下的字符串的hash值了
    int targetcode = 0;     //目标字符串的hash值
    for (int i = 0; i < n; i++) {
        targetcode = (targetcode*33 + s2[i] - 'a')%mod;
        if (targetcode < 0) targetcode += mod;
    }

    int sourcecode = 0;         //待比较的字符串的hash值
    for (int i = 0; i < m; i++) {
        if (i >= n) {
            sourcecode = (sourcecode - power*(s1[i-n]-'a')) % mod;  //长度为n+1的子串那么它的开头便是i-n
        }                                                           //为了使得比较的子串维持长度是n,那么必须减去开头的字符的hash值

        sourcecode = (33*sourcecode + (s1[i]-'a'))%mod;
        if (sourcecode < 0) sourcecode += mod;

        if (i >= n-1 && sourcecode == targetcode) {
            if (s1.substr(i-n+1,n) == s2) { //c++的substr函数,第一个参数是开头的下标，第二个参数是字符串的长度
                cout << i-n+1;              //i-(n-1)就是长度为n的子串的开头角标
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}
/* 算法
用什么算法:Rabin Karp算法
为什么用这个算法（哪些条件）:有时候可以替代KMP算法，比较KMP更简洁

### 代码实现
有什么要注意的地方:计算power的时候指数是从0开始的，所以指数是n-1
有什么可以优化的地方：复杂度相比较O(n)的KMP还是大了

### 时空复杂度分析
...时间复杂度:O((n-m+1)*m)


### 相关的题目有哪些做过的
HDU-1711用此算法超时，换KMP不会
*/
