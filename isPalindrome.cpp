bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        int reverse=0;
        while(n>0){
            int f=(int)n%10;
            cout <<f<<'\n';
            reverse=reverse*10+f;
            n=(int)n/10;
            // cout << reverse <<'\n';
        }
        cout << reverse << "and" << x << endl;
        if(reverse==x){
            return true;
        }
        return false;
 }
int main() {
    bool res=isPalindrome(-1);
    cout << res << endl;
}
