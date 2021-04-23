
 #include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 Number: \n");
    scanf("%d", &a);	1
    scanf("%d", &b);
    scanf("%d", &c);
    if (a>b){	2
       if (a>c){	3
             printf("The largest number is %d", a);	4
        }
        else{
            printf("The largest number is %d", c);	5
            }
    }
    else{
        if (b>c){	6
            printf("The largest number is %d", b);	7
        }
        else{
            printf("The largest number is %d", c);	8
            }
    }
return 0;
