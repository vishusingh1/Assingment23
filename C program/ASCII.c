#include <stdio.h>  
	int main()  
	{  
	    char ch;    // variable declaration  
	    printf("Enter a character");  
	    scanf("%c",&ch);  // user input  
	    printf("\n The ascii value of the ch variable is : %d", ch);  
	    return 0;  
#include <stdio.h>  
2.	int fact (int);  
3.	int main()  
4.	{  
5.	    int n,f;  
6.	    printf("Enter the number whose factorial you want to calculate?");  
7.	    scanf("%d",&n);  
8.	    f = fact(n);  
9.	    printf("factorial = %d",f);  
10.	}  
11.	int fact(int n)  
12.	{  
13.	    if (n==0)  
14.	    {  
15.	        return 0;  
16.	    }  
17.	    else if ( n == 1)  
18.	    {  
19.	        return 1;  
20.	    }  
21.	    else   
22.	    {  
23.	        return n*fact(n-1);  
24.	    }  
25.	}	}
