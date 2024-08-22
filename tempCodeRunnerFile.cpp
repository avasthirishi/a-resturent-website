#include<stdio.h>
int sum(int n1,int n2);
int sum(int n1, int n2){
    return (n1+n2);
}
int product(int n1,int n2);
int product(int n1, int n2){
    return (n1*n2);
}
int difference(int n1,int n2);
int difference(int n1, int n2){
    return (n1-n2);
}
int main()
{
    int num1,num2,result;
    char op;
    int choice = 1;
    while(choice){
    
    
        printf("enter 2 number\n");
        scanf("%d%d",&num1,&num2);
        printf("enter your choice of operation\n");
        scanf("%s",&op);
        switch(op){
            case '+' : result = sum(num1,num2);
            break;
            case '-' : result = difference(num1,num2);
            break;
            case '*' : result = product(num1,num2);
            break;
            default : printf("you have entered an invalid choice");
        }
        printf("result is equal to %d",result);
        printf("press 1 for continue and 0 for skip");
        scanf("%d",&choice);

    }
    return 0;


}