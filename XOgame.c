#include <stdio.h>
#include <stdlib.h>
//** Saba Khan Mohammadi Abhari 402170924**//
int main()
{
int num;
int x;
int y;
int z;

scanf("%d" , &num);

z = num% 1000;
num = num / 1000;
y = num % 1000;
x = num /1000;
if( x == 222 || y == 222 || z == 222){
    printf("2");
}
else if(x == 111 || y == 111 || z == 111){
    printf("1");
}
else if ( (x/10)%10 == 1 && (y/10)%10 == 1 && (z/10)%10 == 1){
    printf("1");
}
else if ( x/200 == 1 && y/200 == 1 && z/200 == 1){
    printf("2");
   }
else if (x %10 ==1 && y%10 == 1 && z%10 == 1){
    printf("1");
}
else if ( x%10 ==  2 && y%10 ==2 && z%10 == 2){
    printf("2");
}
else if (x / 100 == 1 && y /100 == 1 && z/ 100 == 1){
    printf("1");
}
else if(x%100 / 10 == 2 && y%100 / 10 == 2 && z%100 / 10 == 2){
     printf("2");
}
else if(x/100 ==1&& (y/10)%10 == 1 && z%10 == 1){
    printf("1");
}
else if(x/100 == 2 && (y/10)%10 == 2 && z%10 == 2){
    printf("2");
}
else if(x%10 == 1 && (y/10)%10 == 1&&z/ 100== 1){
    printf("1");
}
else if(x%10 == 2&& (y/10)%10 == 2 && z/ 100== 2){
    printf("2");
}
else{
    printf("0");
}
return 0;
}
