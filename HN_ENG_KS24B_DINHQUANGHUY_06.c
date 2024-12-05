#include<stdio.h>
int main(){
	int array[100];
	int n;
	int choose;
	do{
		printf("\nMENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang\n");
		printf("3. Dem so luong cac so hoan hao co trong mang\n");
		printf("4. Tim gia tri nho thu 2 trong mang\n");
		printf("5. Them mot phan tu vao vi tri ngau nhien trong mang\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu tang dan\n");
		printf("8. Tim kiem mot phan tu trong mang\n");
		printf("9. Sap xep lai mang( le dung truoc chan dung sau)\n");
		printf("10. kiem tra mang co phai mang tang dan khong\n");
		printf("11. Thoat truong trinh\n");
		printf("Lua chon cua ban la: ");
		scanf("%d",&choose);
		
		switch(choose){
			case 1: {
				printf("Nhap so phan tu: ");
				scanf("%d", &n);
				for(int i=0; i<n; i++){
					printf("Phan tu vi tri %d co gia tri: ", i);
					scanf("%d",&array[i]);
				}
				break;
			}
			case 2: {
				for(int i=0; i<n; i++){
					printf("arr[%d]=%d\n",i,array[i]);
				}
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
				
				break;
			}
			case 5: {
				int index;
				int valueItem;
				printf("Nhap gia tri muon them: ");
				scanf("%d", &valueItem);
				printf("Nhap vi tri muon them:");
				scanf("%d",&index);
				for(int i=n; i>index; i-- ){
					array[i]= array[i-1];
				}
				array[index]= valueItem;
				n++;
				printf("Mang sau khi them:");
				for(int i= 0; i<n ;i++){
					printf("%d ", array[i]);
				}
				break;
			}
			case 6: {
				int index;
				printf("nhap vi tri phan tu muon xoa: ");
				scanf("%d", &index);
				if(index<0 || index>=n){
					printf("Vi tri khong hop le");
				}else{
					for(int i=index ; i< n-1; i++){
						array[i]=array[i+1];
					}
					n--;
					printf("Mang sau khi xoa:");
					for(int i=0; i<n; i++){
						printf("%d ", array[i]);
					}
				}
				break;
			}
			case 7: {
				for(int i=0; i<n; i++){
					for(int j=0; j<n-1-i; j++){
						if(array[j]>array[j+1]){
							int temp= array[j];
							array[j]=array[j+1];
							array[j+1]= temp;
						}
					}
				}
				printf("Mang sau khi sap xep la: ");
				for(int i=0; i<n; i++){
					printf("%d ",array[i]);
				}
				break;
			}
			case 8: {
				int item;
				int flag=-1;
				printf("Nhap phan tu muon tim kiem: ");
				scanf("%d", &item);
				for(int i=0; i<n; i++){
					if(array[i]==item){
						printf("%d nam tai vi tri: %d", item, i);
						flag=0;
						break;
					}
				}
				if(flag==-1){
						printf("Phan tu khong ton tai");
					}
				break;
			}
			case 9:{
				for(int i=0;i<5;i++){
					for(int j=0;j<5-i-1;j++){
						if(array[j]%2==0 && array[j+1]%2!=0){
							int temp = array[j];
							array[j] = array[j+1];
							array[j+1] = temp; 
						} 
					} 
				}
				for(int i=0; i<n; i++){
					printf("%d ", array[i]);
				}
				break;
			}
			case 10: {
				int check=1;
				for(int i=0; i<n; i++){
					if(array[i]>array[i+1]){
						check=0;
					}	
				}
				if(check==1){
					printf("Day la mang tang dan");
				}else{
					printf("Day khong phai la mang tang dan");
				}
				break;
			}
			case 11: {
				printf("Thoat chuong trinh");
				break;
			}
			default: {
				printf("Khong hop le, nhap lai");
				break;
			}
		}
	}while(choose!=11);
	return 0;
}
