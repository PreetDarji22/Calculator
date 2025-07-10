#include<stdio.h>
#include<math.h>
void menu();
float modul(int a,int b);
float div(float a,float b);

int main(){
    printf("\n------------------------------------------\n");
    printf("\nWelcome to my Calculator!!!\n");
    int ch;
    float a,b,ans;
    
    while(ch!=7){
        menu();
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        if(ch==7){
            break;
        }
        if(ch<1 || ch>7){
            fprintf(stderr,"\nInvalid Choise!!");
            continue;
        }
        printf("\nPlease Enter The First number:");
        scanf("%f",&a);
        printf("\nNow, Enter The Second number:");
        scanf("%f",&b);
        switch (ch)
        {
        case 1:
            ans=a+b;
            break;
        case 2:
            ans=a-b;
            break;
        case 3:
            ans=a*b;
            break;
        case 4:
            ans=div(a,b);
            break;
        case 5:
            ans=modul(a,b);
            break;
        case 6:
            ans=pow(a,b);
            break;
        default:
            break;
        }
        if(!isnan(ans)){
        printf("\nYour Operation is :%.2f",ans);
        }
    }
    return 0;

}
void menu(){
    printf("\nChoose A Following Option:\n");
    printf("\n1. Add");
    printf("\n2. Substact");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    
}
float div(float a,float b){
    if(b==0){
        fprintf(stderr,"Syntax Error.");
        return NAN;
    }
    else{
        return a/b;
    }
}
float modul(int a,int b){
    if(b==0){
        fprintf(stderr,"Syntax Error.");
        return NAN;
    }
    else{
        return (int)a%(int)b;
    }
}
