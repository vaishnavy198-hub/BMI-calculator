/*#include<stdio.h>
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
}*/
/*.................. simple number pattern.......................................*/
/*#include<stdio.h>
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
/*#include <stdio.h>

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
/*#include <stdio.h>

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
/*#include<stdio.h>
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
/*....................... two pointer technique.........................*/
/*#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 6, 9, 11, 15};
    int target = 15;

    int num1 = 0;
    int num2 = 6;   // Last index of the array

    while (num1 < num2) {
        int current_sum = arr[num1] + arr[num2];

        if (current_sum == target) {
            printf("Indices: %d %d\n", num1, num2);
            printf("Numbers: %d %d\n", arr[num1], arr[num2]);
            return 0;
        }
        else if (current_sum < target) {
            num1++;
        }
        else {
            num2--;
        }
    }

    printf("No pair found.\n");

    return 0;
}
/*................. removing duplicate array (sorted array)*/
/*#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
 int arr[n];
printf("enter the elements of array:");
for( int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
if(n==0)
{
return 0;
}
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
        i++;
        arr[i]=arr[j];
        }
    }
    printf("array after removing duplicates:\n");
    for( int k=0;k<=i;k++){
        printf("%d",arr[k]);
       
    }
     printf("\n new length of array=%d",i+1);

    return 0;
}*/
/*............................ removing duplicates array(unsorted array).......................*/
/*#include <stdio.h>

/*int main() {
    int n;
    printf("enter the size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("array after removing duplicates: ");
    int count = 0;

    for (int i = 0; i < n; i++) {
        int duplicate = 0;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nnew length of array = %d\n", count);

    return 0;
}*/
/*#include<stdio.h>
int LinearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            
        }
    }
return 1;
}
int main(){
    int arr[]={4,2,7,1,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("enter the number of search:");
    scanf("%d",&target);
    int result=LinearSearch(arr,n,target);
    if(result!= -1){
        printf("element found at index %d \n",result);
    }
    else
    {
        printf("element not found \n");
    }
    return 0;
    }*/
    /*.............. linear search...................*/
    /*#include<stdio.h>
    int LinearSearch (int arr[],int n,int target)
    {
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return i;
            
            }
        }
        return -1;
    }
    int main(){
        int arr[]={4,5,6,2,8,9,13,11};
        int n=sizeof(arr)/sizeof(arr[0]);
        int target;
        printf("enter the number of searching:");
        scanf("%d",&target);
        int result=LinearSearch(arr,n,target);
        if(result!=-1){
            printf("elemnet found at index %d\n",result);
            
        }
        else{
            printf("element not found \n");
        }
        return 0;
    }*/
   



