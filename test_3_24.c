#include<stdio.h>
/*int main()
{
    int x;
    int y=0;
    for (  x = 1000; x < 2000; x++)
    {
        if (x%4==0)
        {
            if (x%100==0)
            {
                printf("%d ",x);
            }
            else
            {
                printf("%d ",x);
            }
            y++;
        }   
    }
    printf("%d\n",y);
    return 0;
}

int main()
{
    int i=0;
    int j;
    int count =0;
    for ( i = 100; i <= 200; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                break;
            }
            
        }
        if (j==i)
        {
            printf("%d\n",j);
            count++;
        }
        
    }
    
 printf("count=%d",count);
    return 0;
}
int main()
{
    int i;
    int count=0;
    for ( i = 1; i < 100; i++)
    {
        if (i%10==9)
        {
            count++;
        }
        if (i/10==9)
        {
            count++;
        }
        
        
    }
    printf("%d\n",count);

    return 0;
}

int main()
{
    int i=1;
    float j=0;
    float x;
    for ( i = 1; i <=100; i++)
    {
        if (i%2==0)
        {
            x=-1.0/i;
        }
        else
        {
            x=1.0/i;
        }
        j+=x;
    }
    
printf("结果为 %f\n",j);
    return 0;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int max=arr[0];
    int i=0;
    int sz=sizeof (arr)/sizeof (arr[0]);
    for ( i = 0; i < sz; i++)
    {
       if (max<arr[i])
       {
        max=arr[i];
       }
       
    }
      printf("最大值为：%d\n",max);
    return 0;
}

int main()
{
    int i=0;
    int x=0;
    int y=0;
    int z=0;
    for ( i = 1; i < 10; i++)
    {
         for ( x = 1; x < 10; x++)
         {
            z=i*x;
            if (i<=x)
            {
                printf("%d%d=%d ",i,x,z);
            }
            
         }
         
    }
    return 0;
}

#include <stdlib.h>
#include <time.h>

void game()
{
    int rad=rand()%100;
    int guess=0;
    int i=0;
    //printf ("%d\n",rad);
    printf("请猜数字:>");
    while (1)
    {
        for (i = 0; i < 10; i++)
        {
            scanf("%d",&guess);
            if (guess<rad)
            {
                printf("您猜的数偏小，请重新猜，还剩%d次机会。\n",9-i);
                continue;
            }
            else if (guess>rad)
            {
                printf("您猜的数偏大，请重新猜，还剩%d次机会。\n",9-i);
                continue;
            }
            else
            {
                printf("您猜对了，答案是%d,用了%d次机会。\n",rad,i+1);
                break;
            }
            break;
        }    
    }
    
}
void menu()
{
    printf("***************************\n");
    printf("******1.paay   0.exit******\n");
    printf("***************************\n");
}
int main()
{
    int input=0;
    srand((unsigned int) time(NULL));
    do
    {
        menu();
        printf("请选择>: ");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
        printf("退出游戏\n");
            break;
        default:
        printf("选择错误\n");
            break;
        } 
    } while (input);
    

    return 0;
}

int main()
{
    printf("hello\n");
    goto again;
again:
    printf("hehe\n");
    return 0;
}
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[20]={0};
    system("shutdown -s -t 60");
again:
    printf("电脑将在60s内关机，输入：你好，就会取消关机\n请输入：");
    scanf("%s",input);
    if (strcmp(input,"你好")==0)
    {
        system("shutdown -a");
        printf("恭喜你，关机计划取消了");
    }
    else
    {
        goto again;
    }
    
    

    return 0;
}
int Add(int x,int y)
{
    int z=0;
    z=x+y;
    return z;
}
int main()
{
    int a=10;
    int b=20;
    int sum =Add(a,b);
    printf("%d\n",sum);

    return 0;
}
#include <string.h>
int main()
{
    char arr1[]="bti";
    char arr2[20]="########";
    strcpy(arr2,arr1);
    printf("%s\n",arr2);
    return 0;
}
#include <string.h>
int main()
{
    char arr[]="hello world";
    memset(arr,'*',5);
    printf("%s\n",arr);

    return 0;
}


int MAX_S(int x,int y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
       
}

int main()
{
    printf ("请输入两个数：");
    int a,b;
    scanf("%d%d",&a,&b);
    int c=MAX_S(a,b);
    printf("最大值为：%d\n",c);

    return 0;
}*/

// void Swap(int x,int y)
// {
//     int tmp=0;
//     tmp=x;
//     x=y;
//     y=tmp;

// }
// void Swap2(int* pa,int* pb)
// {
//     int tmp=0;
//     tmp=*pb;
//     *pb=*pa;
//     *pa=tmp;
// }

// int main()
// {
//     int a,b;
//     printf("请输入两个数；\n");
//     scanf("%d%d",&a,&b);
//     printf("a=%d,y=%d\n",a,b);
//     Swap2(&a,&b);
//     printf("a=%d,b=%d\n",a,b);

//     return 0;
// }

// int main()
// {
//     int a=10;
//     int* pa=&a;
//     *pa=20;
//     printf("%d\n",a);

//     return 0;
// }
// #include <math.h>
// int is_prime(int a)
// {
//     int i=0;
//     for ( i = 2; i <= sqrt(a); i++)
//     {
//         if (a%i==0)
//         {return 0;}
//     }
//    return 1;  
    
// }
// int main()
// {
//     int a=0;
//     printf("请输入一个数：");
//     scanf("%d",&a);
//     if(is_prime(a)==1)
//       printf("%d是素数",a);
//     else
//       printf("%d不是素数",a);  
//     return 0;
// }
// int Run(int x)
// {
//     if(x%100==0 && x%4==0)
//     {
//         return 1;
//     }
//     else if (x%4==0 && x%100!=0)
//     {
//         return 1;
//     }
//     else
//     return 0;
    
// }
// int main()
// {
//     int i=0;
//     for ( i = 1000; i <= 2000; i++)
//     {
//         if (1==Run(i))
//         {
//             printf("%d ",i);
//         }
//         else
//         continue;
//     }
    

//     return 0;
// }

// int binary_search (int arr[],int x,int y)
// {
//     int left =0;
//     int right =y-1;

//     while (left<=right)
//     {
//         int mid=(left+right)/2;
//         if (arr[mid]<x)
//         {
//             left=mid+1;
//         }
//         else if (arr[mid]>x)
//         {
//             right=mid-1;
//         }
//         else
//         {
//             return mid;
//         }
//     }
//     return 0;

// }
// int main()
// {
//     int a=0;
//     int arr[20]={1,2,3,4,5,6,7,8,9,10};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     printf("请输入一个数：\n");
//     scanf("%d",&a);
//     int ret=binary_search(arr,a,sz);
//     if (ret==0)
//     {
//     printf("没找到\n");
//     }
//     else
//     {
//         printf("找到了，%d在第%d位。\n",a,ret);
//     }

//     return 0;
// }
// void Add(int* p)
// {
//     (*p)++;
// }
// int main()
// {
//     int num=0;
//     Add(&num);
//     printf("num=%d\n",num);
//     Add(&num);
//     printf("num=%d\n",num);
//     Add(&num);
//     printf("num=%d\n",num);

//     return 0;
// }

// int main()
// {
//     printf("%d",printf("%d",printf("%d",43)));

//     return 0;
// }

// int main()
// {
//     printf("hehe");
//     main();
//     return 0;
// }
// void print(int x)
// {
//     if(x>9)
//     {
//         print(x/10); 
//     }
//     printf("%d ",x%10);
// }
// int main()
// {
//     unsigned int num=0;
//     scanf("%d",&num);
//     print(num);

//     return 0;
// }
// int my_strlen(char* str)
// {
//     int count=0;
//     while(*str!='\0')
//     {
//         count++;
// //         str++;
// //     }
// //     return count;
// // }
// int my_strlen(char* str)
// {
//     if (*str!='\0')
//     {
//        return 1+my_strlen(str+1);
//     }
//     else
//         return 0;
    

// }
// int main()
// {
//     char arr[]="bit";
//     int len= my_strlen(arr);
//     printf("len=%d\n",len);

//     return 0;
// }
// int Facl(int x)
// {
//     if (x<=1)
//     {
//         return 1;
//     }
//     else
//     return x*Facl(x-1);
    
// }

// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     Facl(n);
//     int ret=Facl(n);
//     printf("%d\n",ret);

//     return 0;
// // }

// int Fib(int x)
// {
//     int y=0;
//     if (x<=2)
//     {
//         return 1;
//     }
//     else
//     {
//         y=Fib(x-1)+Fib(x-2);
//         return y;
//     }
// }
// int Fib2(int n)
// {
//     int a=1;
//     int b=1;
//     int c=1;
//     int i;

// }
// int main()
// {
//     int n=0;
//     int ret =0;
//     scanf("%d",&n);
//     ret=Fib(n);
//     printf("Fib2=%d\n",ret);
//     return 0;
// }

// int main()
// {
//     int arr[10]={1,2,3};
//     char arr1[]={'a','b','c'};
//     char arr3[]="abc";
//     char arr2[]="abcdef";
//     printf("%d\n",sizeof(arr3));
//     printf("%d\n",sizeof(arr1));
//     printf("%d\n",strlen(arr3));
//     printf("%d\n",strlen(arr1));


//     return 0;
// }

// int main()
// {
//     int i=0;
//     char arr[]="abcdef";
//     int strlen();
//     for ( i = 0; i < strlen(arr); i++)
//     {
//         printf("%c ",arr[i]);
//     }
    

//     return 0;
// }

int main()
// {
//     int arr[3][4]={{1,2,3},{4,5}};
//     int i=0;
//     for ( i = 0; i < 3; i++)
//     {
//         int j=0;
//         for ( j = 0; j < 4; j++)
//         {
//             printf("&arr[%d][%d] ",i,j,&arr[i][j]);
//         }
//         printf("\n");
        
//     }
    


//     return 0;
// }
// void bubble_sort (int arr[],int sz)
// {
//     int i=0;
//     for ( i = 0; i < sz-1; i++)
//     {
//         int j=0;
//         for ( j = 0; j < sz-1-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 int tmp=arr[j];
//                 arr[j]=arr[i];
//                 arr[j+1]=tmp;
//             }
//         }
//     }  
// }
// int main()
// {
//     int i=0;
//     int arr[]={9,8,7,4,5,6,1,2,3};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     for ( i=0; i < sz; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }