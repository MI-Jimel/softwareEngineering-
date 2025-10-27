
#include<iostream>
using namespace std;

int main() {

    int arr1[] = {1, 4, 6, 3, 6, 9};
    int arr2[] = {5, 3, 7, 1, 2, 6};
    int cnt = -1;
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size3;
    if(size1<=size2) size3 = size1;
    else size3 = size2;
    int arr3[size3];

    for (int i = 0; i< size1; i++) {
        for (int j = 0; j< size2; j++) {
            if(arr1[i] == arr2[j]) {
                cnt++;
                arr3[cnt] = arr1[i];
                break;
            }
        }


    }

    int s=0;

    if(cnt == -1) {
        cout << "No common elements!";
    }


    else {

    for (int i = 0; i<=cnt; i++) {
        for (int j = 0; j<= cnt; j++) {
            if(arr3[i]!=arr3[j]&&arr3[i]==arr3[i]) {
                s++;
                break;
            }
    }
    }

    int arr4[s], b= -1;
    for (int i = 0; i<=cnt; i++) {
        for (int j = 0; j<= cnt; j++) {
            if(arr3[i]!=arr3[j]&&arr3[i]==arr3[i]) {
                    b++;
                arr4[b]=arr3[i];
                break;
            }
    }
    }

    for (int i = 0;i<=b;i++) {
        cout<< arr4[i] << "  ";
    }



}
}
