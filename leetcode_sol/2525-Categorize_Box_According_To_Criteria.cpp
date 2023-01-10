class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long volume = (long)length*width*height;
        bool bulky = false, heavy = false;
        if(length>=10000 || width>=10000 || height>=10000 || volume>=1000000000) bulky = true;
        if(mass>=100) heavy = true;
        if(bulky && heavy) return "Both";
        if(!bulky && !heavy) return "Neither";
        if(bulky && !heavy) return "Bulky";
        return "Heavy";
    }
};