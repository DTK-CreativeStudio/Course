/*
課題work7
program7と同様に3行4列のint型の配列を入力し表を出力し、行ごとの合計と列ごとの合計を計算し
全体の合計も出力しなさい。
表の例：   1   2   3   4  : 10 
           5   6   7   8  : 26
           9  10  11  12  : 42
          -------------------
          15  18  21  24  : 78
*/

#include<stdio.h>
int main(void){
      int aa[3][4],i,j,sum=0,sum1=0;
      for(i=0;i<3;i++){
            for(j=0;j<4;j++){
                  printf("data[%d][%d]",i,j);
                  scanf("%d",&aa[i][j]);
            }
      }
      printf("集計の結果は次の通りである.\n");
      for(i=0;i<3;i++){
            sum=0;
            for(j=0;j<4;j++){
                  printf("%4d",aa[i][j]);
                  sum=sum+aa[i][j];           //横の合計
            }
            printf("：%4d\n",sum);
            sum1=sum1+sum;                    //横の合計をさらに合計
      }
      printf("----------------------\n");
      for(i=0;i<4;i++){
            sum=0;
            for(j=0;j<3;j++){
                  sum=sum+aa[j][i];            //縦の合計
            }
            printf("%4d",sum);
      }
      printf("：%4d",sum1);
      return 0;
}