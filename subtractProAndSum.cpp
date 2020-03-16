class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=n;
        int sum=0,product=1;
        while(num!=0){
            sum+=(int)num%10;
            product*=(int)num%10;
            num/=10;
        }
        return product-sum;
    }
};
