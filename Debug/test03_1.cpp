# include <stdio.h>
int main(void)
{
	int cnt_a, cnt_f, cnt_p, i, n, score;   /* score�������ĳɼ� */
	/* cnt_a��¼����֤������, cnt_f��¼û��֤���������cnt_p��¼����֤������� */

	printf("Enter n(n>0): ");   	/* ��ʾ����ѧ������ n */
	scanf("%d", &n);
	cnt_a = cnt_p = cnt_f = 0; 		/* �ô��ͳ�ƽ����3�������ĳ�ֵΪ�� */
	for(i = 1; i <= n; i++){
    	scanf ("%d", &score);  		/* �����i���ɼ� */
    	if(score >= 60){			/* ͳ������֤������� */
    	    cnt_p++;
    	}else (score >= 85){		/* ͳ�ƺϸ�֤������� */
    	    cnt_a++;
    	}else{						/* ͳ��û��֤������� */
    		cnt_f++;
		}
	}
	printf("%d %d %d\n", cnt_a, cnt_p, cnt_f);

    return 0;
}
