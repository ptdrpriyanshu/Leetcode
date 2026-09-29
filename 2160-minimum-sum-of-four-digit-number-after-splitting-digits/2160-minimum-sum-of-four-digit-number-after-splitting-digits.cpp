class Solution {
public:
    int minimumSum(int num) {
        int a=num/1000;
        int b=(num/100)%10;
        int c=(num/10)%10;
        int d=num%10;

        int arr[4]={a,b,c,d};
        sort(arr,arr+4);

        int x=(10*arr[0])+arr[2];
        int y=(10*arr[1])+arr[3];

        return x+y;

    }
};