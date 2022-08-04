class Solution {
public:
    int mirrorReflection(int p, int q) {
        int exe=q, ref=p;
        while(exe%2==0 && ref%2==0){
            exe/=2;
            ref/=2;
        }
        if(exe%2==0 && ref%2!=0) return 0;
        if(exe%2==1 && ref%2==0) return 2;
        if(exe%2==1 && ref%2!=0) return 1;
        return -1;
            
    }
};