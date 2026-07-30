/*.................. simple number pattern.......................................*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
}
return 0;
}
/*......................... largest of three number................................*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any 3 number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    printf("largest =%d",a);
    else if(b>=a&&b>=c)
    printf("largest=%d",b);
    else
    printf("largest=%d",c);
    return 0;
    }
/*................duplicate elements.............................*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
/*................ linear search.............................*/
#include <stdio.h>

int main()
{
    int n, i, key, pos = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        printf("Element found at position %d", pos + 1);
    else
        printf("Element not found");

    return 0;
}
/*...............2D arrays matric input.................................*/
#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d",&row,&col;
    int matrix[row][col]);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d,&matrix[i][j]")
        }
    }
}
