#include <cstdio>
int a[5] = {5,8,1,6,10};
void quickesort(int left, int right)
{
    int i,j,t,temp;
    if (left > right)
        return;
    temp = a[left];
    i = left;
    j = right;
    while(i != j)
    {
        while (a[j] >= temp && i < j)
            j--;
        while (a[i] <= temp && i < j)
            i++;
        if (i < j)
        {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
        }
    }
    a[left] = a[i];
    a[i] = temp;
    quickesort(left,i-1);
    quickesort(i+1,right);
    return;
}
int main(void)
{
    quickesort(0,4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
