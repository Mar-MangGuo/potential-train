#include<stdio.h>
/*int main(void)
{
    int i;
    printf("请输入一个100以内的数:\n");
    scanf("%d",&i);
    if (i<100)
    {
        if (i%2==0)
            printf("该数为偶数\n");
        else
            printf("该数为奇数\n");
    }
    else
        printf("该数不符合规范，请重新输入\n");
    

    return 0;
}

int main(void)
{
    int ch=0;
    while ((ch=getchar())!=EOF)  EOF：文件结束标志
    {
        putchar(ch);
    }
    return 0;
}

int main()
{
    int ret=0;
    int ch=0;
    char password[20]={0};
    printf("请输入密码:");
    scanf("%s",password);
    while ((ch=getchar())!='\n')
    {
        ;
    }
    printf("请输入(Y/N):");
    ret= getchar;
    if (ret=='Y')
    {
        printf("输入成功\n");
    }
    else
    {
        printf("放弃确认\n");
    }
    

    return 0;
}

int main()
{
    int ch=0;
    while ((ch=getchar())!=EOF)
    {
        if (ch<'0'||ch>'9')
        continue;
        putchar(ch);
    }
    

    return 0;
}

int main(void)
{
    int a=0;
    for (a = 1; a <= 10; a++)
    {
        if (a==5)
        {
            continue;;
        }
        
        printf("%d\n",a);
    }
    

    return 0;
}

int main(void)
{
   for (; ; )
   {
    printf("hehe\n");
   }
   
    return 0;
}

int main(void)
{
    int i=0;
    int j=0;

    for(;i<10;i++)
    {
        for (j=0; j < 10; j++)
        {
             printf("hehe\n");
        }
        
    }


    return 0;
}

int main()
{
    int i=0;
    do
    {
        if (i==5)
        {
           continue;
        }
        
        i++;
        printf("%d\n",i);
    } while (i<10);
    
    return 0;
}

int main()
{
    int i=1;
    int n=0;
    int m=1;
    printf("请输入一个人数n:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        m=m*i;

    }
    printf("%d的阶乘为%d\n",n,m);

    return 0;
}

int main()
{
    int i=1;
    int n=0;
    int m=1;
    int j=0;
    while (i<=3)
    {
        m=1;
        for ( n= 1; n <= i; n++)
        {
           m=m*n;
        }
        i++;
        j+=m;

    }
    printf("结果为%d\n",j);
    return 0;
}


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=17;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=sz-1;

    while(left<=right)
    {
    int mid=(left+right)/2;
        if (arr[mid]>k)
        {
            right=mid-1;
        }
        else if(arr[mid]<k)
        {
            left=mid+1;
        }
        else
        {
            printf("找到了，下标是:%d\n",mid);
            break;
        }
    }
    if (left>right)
    {
        printf("找不到");
    }
    
    return 0;
}
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    char arr1[]="welcome to hee!!!!!!";
    char arr2[]="####################";
    int left=0;
    //int right=sizeof(arr1)/sizeof(arr1[0])-2;
    int right=strlen(arr1)-1;
    while(left<right)
    {
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        printf("%s\n",arr2);
        sleep(1000);
        system("cls");
        left++;
        right--;
    }

    return 0;
}

int main()
{
    int i=0;
    char password[20]={0};
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码");
        scanf("%s",password);
        if (password==123456)
        {
            printf("密码正确\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }

    }
    

    return 0;
}


int main()
{
    int a=0;
    int b=0;
    int c=0;
    printf("请输入三个数:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b&&a<c)
    {
        if (b<c)
        {
            printf("三个数大小顺序为%d<%d<%d\n",a,b,c);
        }
        else{
            printf("三个数大小顺序为%d<%d<%d\n",a,c,b);
        }
        
    }
    else if (b<a&&b<c)
    {
        if (a<c)
        {
            printf("三个数大小顺序为%d<%d<%d\n",b,a,c);
        }
        else{
            printf("三个数大小顺序为%d<%d<%d\n",b,c,a);
        }
    }
    else if (c<a&&c<b)
    {
        if (a<b)
        {
            printf("三个数大小顺序为%d<%d<%d\n",c,a,b);
        }
        else{
            printf("三个数大小顺序为%d<%d<%d\n",c,b,a);
        }
    }
    

    return 0;
}*/

int main()
{
    int i=0;
    int j=0;
    for ( i = 0; i <=100; i++)
    {
        if (i%3==0)
        {
            j=i;
            printf("3的倍数包括%d\n",j);
        }
    }
    

    return 0;
}