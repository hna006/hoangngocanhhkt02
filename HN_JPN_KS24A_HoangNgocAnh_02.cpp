#include <stdio.h>
int main (){
	int menu,i,n,arr[100]; 
		printf (" hoang_ngoc_anh_hktlaptrinhc \n");
		printf ("----MENU----\n");
		printf ("1. Nhap so phan tu va gia tri cho mang \n");
		printf ("2. In ra gia tri cac phan tu trong mang theo dang (arr[0]=1, arr[1]=5 ...) \n");
		printf ("3. Dem so luong cac phan tu chan le trong mang \n");
		printf ("4. Tim gia tri lon thu hai trong mang \n");
		printf ("5. Them mot phan tu vào dau mang, phan tu moi them vao mang phai do nguoi dung nhap vao \n");
		printf ("6. Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)\n");
		printf ("7. Sap xep mang theo thu tu giam dan \n");
		printf ("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong \n");
		printf ("9. in ra toan bo so nguyen to trong mang da duoc binh phuong. \n a. Neu khong co so nguyen to nao thi hien thi ra la khong co so nguyen to nao trong mang \n b. Neu co so nguyen to trong mang thi hien thi toan bo so nguyen to do va binh phuong chung len \n");
		printf ("10. Sap xep mang theo thu tu giam dan \n");
		printf (" ----Nhap lua chon ban muon---- ");
		scanf ("%d", &menu);
		
		switch (menu){
			case 1: //Nhap so phan tu va gia tri cho mang
			printf (" Vui long nhap kich co cua mang : ");
			scanf ("%d",&n);			
			for( int i= 0; 1 < n ; i++){
				printf (" Vui long nhap cac gia tri cua mang :");
				scanf ("%d",&arr[1]);
			}
			break;
		}	
		
		
		
			
		
		
		
		
		
		return 0;
		  
} 
