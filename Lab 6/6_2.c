// Arnav Agrawal
// 200905200
// Lab 6
// Question 2
// Find the trace and norm of a given square matrix
#include<stdio.h>
#include<math.h>

int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    #include<stdio.h>
    int m,n,a[10][10],trace=0,sum=0;
    float norm;
    int i,j;
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&m,&n);
    if(m!=n)
        printf("Not a square matrix , trace and norm cant be found\n");
    else
    {
        printf("Enter the elements\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        }
        printf("The Matrix is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                printf("%d\t",a[i][j]);
                printf("\n");
        }
        for(i=0;i<m;i++)
            trace=trace+a[i][i];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                sum=sum+a[i][j]*a[i][j];
        }
        norm = sqrt(sum);
        printf("The trace of the matrix is: %d\n",trace);
        printf("The norm of the matrix is: %f\n",norm); 
    }
    return 0;
}
