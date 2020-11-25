#include <stdio.h>

int main()
{
	int chi_so_cu,chi_so_moi,so_dien;
	long int so_tien;
	printf("Nhap chi so cu: ");
	scanf("%d",&chi_so_cu);
	printf("Nhap chi so moi: ");
	scanf("%d",&chi_so_moi);
	so_dien = chi_so_moi - chi_so_cu;
	if (so_dien<=0)
		printf("Khong tinh duoc tien dien !");
	else {
	if (so_dien<=100)
		so_tien = so_dien * 1000;
	if (101<so_dien && so_dien<=150)
		so_tien = 100*so_dien+(so_dien-100)*1500;
	if (so_dien>150)
		so_tien = 100*so_dien+50*1500+(so_dien-150)*1800;
			printf("Tien dien phai tra la: %d",so_tien);
}
}
