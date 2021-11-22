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
    int power = quick_power(33,n-1);    //������n-1��ָ������Ϊָ���Ǵ��㿪ʼ��
                                        //power�������Ǽ����Ժ�ÿ�μ�ȥǰ����ַ����ĵ�һ���ַ�����power����ʣ�µ��ַ�����hashֵ��
    int targetcode = 0;     //Ŀ���ַ�����hashֵ
    for (int i = 0; i < n; i++) {
        targetcode = (targetcode*33 + s2[i] - 'a')%mod;
        if (targetcode < 0) targetcode += mod;
    }

    int sourcecode = 0;         //���Ƚϵ��ַ�����hashֵ
    for (int i = 0; i < m; i++) {
        if (i >= n) {
            sourcecode = (sourcecode - power*(s1[i-n]-'a')) % mod;  //����Ϊn+1���Ӵ���ô���Ŀ�ͷ����i-n
        }                                                           //Ϊ��ʹ�ñȽϵ��Ӵ�ά�ֳ�����n,��ô�����ȥ��ͷ���ַ���hashֵ

        sourcecode = (33*sourcecode + (s1[i]-'a'))%mod;
        if (sourcecode < 0) sourcecode += mod;

        if (i >= n-1 && sourcecode == targetcode) {
            if (s1.substr(i-n+1,n) == s2) { //c++��substr����,��һ�������ǿ�ͷ���±꣬�ڶ����������ַ����ĳ���
                cout << i-n+1;              //i-(n-1)���ǳ���Ϊn���Ӵ��Ŀ�ͷ�Ǳ�
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}
/* �㷨
��ʲô�㷨:Rabin Karp�㷨
Ϊʲô������㷨����Щ������:��ʱ��������KMP�㷨���Ƚ�KMP�����

### ����ʵ��
��ʲôҪע��ĵط�:����power��ʱ��ָ���Ǵ�0��ʼ�ģ�����ָ����n-1
��ʲô�����Ż��ĵط������Ӷ���Ƚ�O(n)��KMP���Ǵ���

### ʱ�ո��Ӷȷ���
...ʱ�临�Ӷ�:O((n-m+1)*m)


### ��ص���Ŀ����Щ������
HDU-1711�ô��㷨��ʱ����KMP����
*/
