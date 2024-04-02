#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,fno,n,l;
    char str[20],ans[20];

    printf("Enter your string\n");
    scanf("%s",str);
    printf("\nEnter length of frame: ");
    scanf("%d",&n);
    l=0;
    j=0;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if( l == n)
        {
            printf("\nString in frame %d is %s",fno++,ans);
            l=0;
            j=0;
        }
        ans[j]=str[i];
        j++;
        l++;
        ans[j]='\0';
    }
    printf("\nString in frame %d is %s",fno,ans );
}
