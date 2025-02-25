/* 计算球体体积 V=4/3*PI*r*r*r  */
double vol_ball( )
{
	double r;

	printf("请输入球体的半径：");
	scanf("%lf", &r);

	return(4.0 / 3.0 * PI * r * r * r);
}

/*  计算圆柱体体积 V=PI*r*r*h  */
double vol_cylind( )
{
	double r , h;

	printf("请输入圆柱体的底圆半径和高：");
	scanf("%lf%lf", &r, &h);

return(PI * r * r * h);
}

/*  计算圆锥体体积 V=h/3*PI*r*r  */
double vol_cone( )
{
	double r , h;

	printf("请输入圆锥体的底圆半径和高：");
	scanf("%lf%lf", &r,&h);

	return(PI * r * r * h / 3.0);
}

