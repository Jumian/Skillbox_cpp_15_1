#include <iostream>
#include "vector"
std::vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};

void print(){
    for(int i=0;i<a.size();++i){
        std::cout<<a[i]<< " ";
    }
    std::cout<<std::endl;
}

int maxSum(std::vector<int> arr,int index1,int index2){
    int sum=0;
    for(int i=index1;i<a.size()&&i<=index2;++i){
        sum+=arr[i];
    }
    return sum;
}
int i1=0,i2=a.size();
int max=maxSum(a,i1,i2);

void handle(){
    for(int k=0;k<a.size();++k) {
        for (int i = k; i < a.size(); ++i) {
            int maxi = maxSum(a, k, i);
            if (maxi > max) {
                max = maxi;
                i1 = k;
                i2 = i;
            }
        }
    }
    std::cout << i1 <<" "<<i2<<" "<< std::endl;
}

int main() {
    print();
    handle();
}
