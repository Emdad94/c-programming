#include<iostream>

using namespace std;

class box{
    int l,w,h;
    public:
    int getvolume(){
        return l*w*h;
    }
    void setter(int len, int wid, int hei){
        l = len;
        w = wid;
        h = hei;
    }
    
};
int main(){
        box b1;
        b1.setter(2,4,3);
        cout<<b1.getvolume()<<endl;
    };