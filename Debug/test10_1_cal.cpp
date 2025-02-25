/*  常用圆形体体积计算器的主控函数  */
void cal ( int sel )
{
	double  vol_ball(void);			/*  函数声明  */
	double  vol_cylind(void);
	double  vol_cone(void );

	switch (sel) {
    	    case 1: 	/*  计算球体体积  */
			printf("球体体积为：%.2f\n",vol_ball());
			break;
        case 2:  	/*  计算圆柱体体积  */
			printf("圆柱体体积为：%.2f\n",vol_cylind( ));
			break;
        case 3:  	/*  计算圆锥体体积  */
			printf("圆锥体体积为：%.2f\n",vol_cone( ));
			break;
	}
}
