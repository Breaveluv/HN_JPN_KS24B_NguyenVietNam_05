#include <stdio.h>
int main() {
        int menu, menu1;
        int n = 0;
        int index;
        int temp;
        int pos;
        int j, key;
        int arr[100];
        int mid,right, left;
        menu:
        do {
                printf("1.Nhap so phan tu và giá tri cho mang\n");
                printf("2.In ra giá tri các phan tu trong mang\n");
                printf("3.Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
                printf("4.Tim gia tri lon thu 2 trong mang, khong duoc sap xep mang\n");
                printf("5.Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao,chi them phan tu do vao mangneu phan tu do chua ton tai trong mang	\n");
                printf("6..Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)\n");
                printf("7.Sap xep mang theo thu tu tang dan (Insertion sort)\n");
                printf("8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Binary search).\n");
                printf("9.Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan dung truoc, so le dung sau.\n");
                printf("10.Dao nguoc thu tu cua cac phan tu co trong mang\n");
                printf("11.Thoat!\n");
                printf("_____MOI BAN NHAP LUA CHON CUA MINH_____ ");
                scanf("%d", &menu);
        }while(menu > 11 || menu < 1);

              switch (menu) {
                case 1:
                        do {
                                printf("Nh?p s? ph?n t?: ");
                                scanf("%d", &n);
                                if(n < 1 || n > 100) {
                                        printf("invalid!!\n");
                                }
                        }while (n < 1 || n > 100);

                          for (int i = 0; i < n; i++) {
                                printf("Nhap gia tri phan tu arr[%d]: ", i);
                                scanf("%d", &arr[i]);
                        }
                        
                        break;

                case 2:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                                goto menu1;
                        }
                        for (int i = 0; i < n; i++) {
                                printf("arr[%d]\n", arr[i]);
                        }
                        
                        break;

                case 3:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                                goto menu1;
                        }
                        index = 0;
                       for (int i = 0; i < n; i++) {
                               temp = 0;
                              for(int j = arr[i]; j > 0; j--) {
                                      if(arr[i] % j == 0) {
                                              temp++;
                                      }
                              }
                               if(temp == 2) {
                                       index++;
                               }
                        }


                        printf(" tong so nguen to la %d", index);
                        
                        break;

                case 4:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                                goto menu1;
                        }
                        index = 0;
                        for (int i = 0; i < n; i++) {
                                if(arr[i] > arr[index]) {
                                        index = i;
                                }
                        }
                        temp = arr[index];
                        arr[index] = arr[0];
                        arr[0]  = temp;
                         for (int i = 1; i < n; i++) {
                                if(arr[i] > arr[index]) {
                                        index = i;
                                }
                        }
                        printf("Gia tri lon thu 2 la %d ", arr[index]);
                        
                        break;

                case 5:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                                goto menu1;
                        }
                        printf("vi tri muon them: ");
                        scanf("%d", &pos);
                        pos--;
                         for (int i = n - 1; i > 0; i--) {
                                 arr[i + 1] = arr[i];
                                 if(i == pos){
                                         printf("gia tri muon nhap: ");
                                         scanf("%d", &arr[i]);
                                         break;
                                 }
                         }
                        n++;
                         for (int i = 0; i < n; i++) {
                                printf("arr[%d]\n", arr[i]);
                        }
                        break;

                case 6:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                                goto menu1;
                        }
                        printf("Vi tri can xoa: ");
                        scanf("%d", &pos);
                        pos--;
                        for(int i = pos; i < n; i++) {
                                arr[i] = arr[i+ 1];
                        }
                        n--;
                        for (int i = 0; i < n; i++) {
                                printf("arr[%d]\n", arr[i]);
                        }
                        
                        break;

           
case 11:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                                goto menu1;
                        }
                        printf("Da thoat!");
                        return 0;
                menu1:
                printf("\n");
                do {
                        printf("1.Back to menu\n");
                        printf("2.Exit\n");
                        scanf("%d", &menu1);
                }while (menu1 != 1 && menu1 != 2);
                if(menu1 == 1) {
                      
                }else {
                        return 0;
                }

                        break;
        }
}
