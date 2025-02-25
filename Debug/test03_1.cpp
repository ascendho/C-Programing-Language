# include <stdio.h>
int main(void)
{
	int cnt_a, cnt_f, cnt_p, i, n, score;   /* score存放输入的成绩 */
	/* cnt_a记录优秀证书数量, cnt_f记录没有证书的数量，cnt_p记录及格证书的数量 */

	printf("Enter n(n>0): ");   	/* 提示输入学生人数 n */
	scanf("%d", &n);
	cnt_a = cnt_p = cnt_f = 0; 		/* 置存放统计结果的3个变量的初值为零 */
	for(i = 1; i <= n; i++){
    	scanf ("%d", &score);  		/* 输入第i个成绩 */
    	if(score >= 60){			/* 统计优秀证书的数量 */
    	    cnt_p++;
    	}else (score >= 85){		/* 统计合格证书的数量 */
    	    cnt_a++;
    	}else{						/* 统计没有证书的数量 */
    		cnt_f++;
		}
	}
	printf("%d %d %d\n", cnt_a, cnt_p, cnt_f);

    return 0;
}
