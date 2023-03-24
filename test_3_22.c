#include <stdio.h>
int num=10;
/*int main()
{
    int num=10;
    int num2=20;
    int max=0;
    max=MAX(num,num2);
    printf("最大值是%d",max);
    if (num<num2)
    printf("较大值是%d",num2);
    else
    printf("较大值是%d",num);


    return 0;
}
int MAX(int x,int y)
{if (x<y)
    return y;
    else
    return x;

}

int main()
{
    int a=0;
    int arr[]={0,1,2,3,4,6,5,8};
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof a);
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));

    return 0;
}
int main()
{
    int a=0;
    int b=~a;
    printf("%d\n",b);

    return 0;
}
int main()
{
    int a =10;
    int b=--a;
    printf("a=%d b=%d",a,b);


    return 0;
}

int main()
{
    int a = (int)3.14;

    return 0;
}

int main()
{
    int a=0;
    int b=5;
    int c=a||b;
    printf("%d\n",c);

    return 0;
}

int main()
{
    int a=100;
    int b=20;
    int max=0;

    max=(a>b?a:b);
    

    printf("%d",max);

    return 0;
}

main()
{
    int arr[10]={0};


    return 0;
}

void test()
{
    static int a=1;//a为静态局部变量
    a++;
    printf("a=%d\n",a);//  2 3 4 5 6
}

int main()
{
    int i=0;
    while(i<5)
    {
        test();
        i++;
    }
    return 0;
}

int MAX(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}

#define MAX(X,Y)(X>Y?X:Y)

int main()
{
    int a=10;
    int b=20;
    int max=MAX(a,b);
    printf("max=%d\n",max);

    max=MAX(a,b);
    printf("max=%d\n",max);

    return 0;
}  

int main()
{
    int a=10;
    int*p=&a;
    //&a;
    //printf("%p\n",&a);
    //printf("%p\n",&p);

    *p=20;
    printf("%d\n",a);
    return 0;
} 


int main()
{
    char ch='w';
    char *pc=&ch;
    printf("%d\n",sizeof(pc));
    *pc='a';
    printf("%c",ch);

    return 0;
}

int sum(int a)
{
    int c=0;
    static int b=3;
    c+=1;
    b+=2;
    return(a+b+c);
}
int main()
{
    int i;
    int a=2;
    for(i=0;i<5;i++)
    {
        printf("%d\n",sum(a));
    }

}

int main()
{
    int a=10;
    printf("%p\n",&a);
    int* p=&a;//指针变量
    printf("%p\n",p);
    *p=20;
    printf("a=%d\n",a);


    return 0;
}

int main()
{
    double d=3.14;
    double* pd=&d;
    *pd=5.5;
    printf("%lf\n",d);
    printf("%lf\n",*pd);
    printf("%d\n",sizeof(*pd));

    return 0;
}

int main()
{
    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(double*));

    return 0;
}

struct Book
{
    char name[20];
    short price;
};

int main()
{
    struct Book b1={"C语言",55};
    struct Book* pb=&b1;
    printf("%s\n",(*pb).name);
    printf("%d\n",(*pb).price);
    printf("%s\n",pb->name);
    printf("%d\n",pb->price);

    printf("书名：%s\n",b1.name);
    printf("价格：%d元\n",b1.price);
    b1.price =15;
    printf("修改后的价格：%d元\n",b1.price);

    return 0;
}

int main()
{
    int age=0;

    if(age<18)
       printf("未成年\n");
    else if(17<age&&age==18)
       printf("刚成年\n");
    else
       printf("成年\n");

    return 0;
}

int main()
{
    int a=0;
    int b=2;
    if(a==1)
        {if(b==2)
            printf("hehe\n");}
    else
        printf("haha\n");

    return 0;
}

int main()
{
    int num=4;
    if(5==num)
    {
        printf("hehe\n");
    }
    else
        printf("啥也不是");
    return 0;
}

int main()
{
    int a;
    printf("请输入一个数a:\n");
    scanf("%d",&a);
    if(a>=1&&a<=100)
    {
        if(a%2==0)
            printf("a是偶数\n");
        else
            while(a<=100)
            {
                i=a;
                if(i%2==1)
                    printf("奇数为%d\n",a);
                    i++;
                else if(i%2==0)
                    i++;
            }
    }
    else
        printf("该数不符合规范\n");
}

int main()
{
    int a=0;
    int i=1;
    while(a<=100)
    {
        if(a%2==1)
            {printf("第%d个余数为%d\n",i,a);
            i++;
            a++;
            }
        else
            a++;
    }

    return 0;
}

int main()
{
    int day=0;
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
    }


    return 0;
}

int main(void)
{
    int day=0;
    scanf("%d",&day);
    switch(day)
    {
        case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("工作日\n");
        break;
    case 6:
    case 7:
        printf("休息日\n");
    break;
    default:
        printf("输入错误\n");
    }
 
    return 0;
}

int main()
{
    int n=1;
    int m=2;
    switch(n)
    {
        case 1:m++;
        case 2:n++;
        case 3:
             switch (n)
                {case 1:n++;
                case 2:m++;n++;
                }
        case 4:m++;
            break;
        default:
            break;
            
    }
    printf("m=%d,n=%d\n",m,n);

    return 0;
}

int main()
{
    int a=1;
    while(a<=10)
    {
        a++;
        if (a==5)
        continue;
        
        printf("a=%d\n",a);
        
    }
    
    return 0;
}

int main()
{

    int ch=getchar();

    putchar(ch);
    printf("%c\n",ch);


    return 0;
}*/
