    #include<iostream>

using namespace std;

class Prime {
    int range1,range2,factor;
    public:
    void insert(){
        cout<<"Enter the lower limit: ";
        cin>>range1;
        cout<<"Enter the upper limit: ";
        cin>>range2;
    }
    void isPrime(){
        for(int i=range1;i<=range2; i++){
            factor = 1;
            for(int j=1;j<=range2; j++){
                if(i % j == 0) 
                    factor = factor * j;
                if(factor > i) break;
            }
            if(factor == i) cout<<" "<<i;
        }
        cout<<"\n";
    }
};

int main(void) {
    Prime p1;

    p1.insert();
    p1.isPrime();

    return 0;
}
