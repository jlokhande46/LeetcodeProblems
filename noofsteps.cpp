int numberOfSteps (int num) {
        int steps=0, n=num;
        while(n!=0){
            steps++;
            if(n%2==0)
                n=n/2;
            else
                n=n-1;
        }
        return steps;
    }
};