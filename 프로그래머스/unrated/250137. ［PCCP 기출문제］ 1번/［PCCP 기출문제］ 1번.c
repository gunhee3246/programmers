#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이, attacks_cols는 2차원 배열 attacks의 열 길이입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int i;
    int j=0;
    int full=0;
    int max=health;
    if (bandage[0]<1 || 50<bandage[0]){
        return printf("time out of range\n");
    }
    if (bandage[1]<1 || 100<bandage[1]){
        return printf("heal out of range\n");
    }
    if (bandage[2]<1 || 100<bandage[2]){
        return printf("extra heal out of range\n");
    }
    
    if (health<1 || 1000<health){
        return printf("health out of range\n");
    }
    
    for(i=1; i<=attacks[attacks_rows-1][0]; i++){
        if(i==attacks[j][0]){
            health=health-attacks[j][1];
            if(health<1){
                health=-1;
                break;
            }
            full=0;
            j++;
        }
        else {
            health=health+bandage[1];
            if(health>max){
                health=max;
            }
            full=full+1;
            if(full==bandage[0]){
                health=health+bandage[2];
                full=0;
            }
        }
        
    }
    if(health<1){
            health=-1;
        }
   
    int answer = 0;
    answer = health;
    return answer;
}