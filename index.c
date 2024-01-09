#include <stdio.h>
int main(){
    // qua==1



    for(int i=0; i<=6; i++){
        for(int s=0; s<=6; s++){
            if(i==0 || s==0 || i==6 ||s==6){
                printf("   * ");
            }
            else{
                printf("     ");
            }
        }
        printf("\n");
    }    


// qua==2

// float arr[3][3] = {{8, 20, 30}, {13,35, 9}, {2, 7, 6}};
//     int s, k;
//     float sum=0, avg;
//     for (s=0; s<3; s++) {
//         for (k = 0; k<3; k++) {
//             sum +=arr[s][k];
//         }
//     }
//     avg = sum / 9;
//     printf(" average  %.2f", avg);

    return 0;
}
