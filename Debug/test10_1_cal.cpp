/*  ����Բ������������������غ���  */
void cal ( int sel )
{
	double  vol_ball(void);			/*  ��������  */
	double  vol_cylind(void);
	double  vol_cone(void );

	switch (sel) {
    	    case 1: 	/*  �����������  */
			printf("�������Ϊ��%.2f\n",vol_ball());
			break;
        case 2:  	/*  ����Բ�������  */
			printf("Բ�������Ϊ��%.2f\n",vol_cylind( ));
			break;
        case 3:  	/*  ����Բ׶�����  */
			printf("Բ׶�����Ϊ��%.2f\n",vol_cone( ));
			break;
	}
}
