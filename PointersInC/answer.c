#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//SABA KHANMOHAMMADI ABHARI
//402170924
void printing(float max){
int y = (int)max;
    printf("%d\n",y);
}
typedef struct{
    char Name[100];
     int Average;
     int Id;
     int Pre;
     int Coe;
}dars;

int main(){
    int num;
    int max = 0;
    int max_p = 0;
    int sum = 0;
    int dars_p = 0;
    int path = 0;
    float gpa = 0;
    int dars_max = 0;
    int check = 0 ;
    int p;
    int u = 0;
    int o = 0;
    int shomaresh = 0;
    scanf("%d",&num);
    dars save[num];
    int neww = num +1;
    int list[neww][neww];

     while(o < neww){
        u = 0;
        while(u < neww){
            list[o][u] = 0;
            u++;
        }
   o++;
    }
    for(int i = 0 ; i < num ; i++){
        scanf("%s", save[i].Name);
        scanf("%d",&save[i].Id);
        scanf("%d",&save[i].Coe);
        scanf("%d",&save[i].Average);
        scanf("%d",&save[i].Pre);
    }

    for(int i = 0 ; i < num ; i++){
       check = 0;
       sum = 0;
       path = 0;
       dars_p = 1;
            p = i;
        for(int j = 0 ; j < num ; j++){
            if(save[i].Id == save[j].Pre){
                check = 1;

            }
        }
 if(!check){
            dars_p = 1;
            path += save[i].Coe;
            sum += (save[i].Coe)*(save[i].Average);
            list[i][1]=i;
            shomaresh = 0;
            while(save[p].Pre != 0){
                    if(save[p].Pre == save[shomaresh].Id){
                        sum +=((save[shomaresh].Coe)*(save[shomaresh].Average));
                        dars_p ++;
                        list[i][dars_p] = shomaresh;
                        path += save[shomaresh].Coe;
                        p = shomaresh;
                    } shomaresh++;
                    if(shomaresh == num){
                        shomaresh = 0;
                    }
            }
          //  float q = ;
            gpa = (float)sum / path;
            if(gpa > (float)max){
                max = gpa;
                max_p = i;
               dars_max = dars_p;
            }
        }
    }
   printing(max);
    while(dars_max >= 1){
        printf("%s %d \n" , save[list[max_p][dars_max]].Name , save[list[max_p][dars_max]].Id );
        dars_max--;
    }


    return 0;
}

/*
web  40419 3 16 40244
calc1 22015 4 18 0
calc2 22016 4 17 22015
amar 401 3 16 22016
dif 22034 3 15 22016
-----------
9
fop 40153 3 17 0
ap 40244 3 18 40153
web 40419 3 16 40244
calc1 22015 4 18 0
calc2 22016 4 17 22015
amar 40181 3 16 22015
dif 22034 3 15 22016
an1 37445 2 18 0
an2 37446 2 18 37445

*/
