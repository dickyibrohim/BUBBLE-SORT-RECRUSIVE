#include <stdio.h>
// DICKY IBROHIM
int b[8] = { -9, 9, 89, 78, 56, 45, 34, 89 };

void print(int n) // OUTPUT
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d\t", b[i]);

    printf("\n");
}

void rb(int n) // BUBBLE SORT RECRUSIVE
{
    if(n==0)
        return;
    int i;
    for(i=0;i<n-1;i++)
    {
        if(b[i+1]>b[i]) { // DESCENDING
            /* swap the two values and scope j as tightly as possible */
            int j=b[i+1];
            b[i+1]=b[i];
            b[i]=j;
        }
    }
    return rb(n-1);
}

int main()
{
    print(8);
    rb(8);
    print(8);

    return 0;
}
