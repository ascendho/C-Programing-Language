/* ����������� V=4/3*PI*r*r*r  */
double vol_ball( )
{
	double r;

	printf("����������İ뾶��");
	scanf("%lf", &r);

	return(4.0 / 3.0 * PI * r * r * r);
}

/*  ����Բ������� V=PI*r*r*h  */
double vol_cylind( )
{
	double r , h;

	printf("������Բ����ĵ�Բ�뾶�͸ߣ�");
	scanf("%lf%lf", &r, &h);

return(PI * r * r * h);
}

/*  ����Բ׶����� V=h/3*PI*r*r  */
double vol_cone( )
{
	double r , h;

	printf("������Բ׶��ĵ�Բ�뾶�͸ߣ�");
	scanf("%lf%lf", &r,&h);

	return(PI * r * r * h / 3.0);
}

