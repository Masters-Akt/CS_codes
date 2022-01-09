class Solution {
public:
    bool isRobotBounded(string instructions) {
        int direction = 0, LRdist = 0, UDdist = 0;
        for(char x: instructions){
            if(x=='L') direction = (direction+5)%4;
            else if(x=='R') direction = (direction+3)%4;
            else{
                if(direction==0) UDdist++;
                else if(direction==1) LRdist++;
                else if(direction==2) UDdist--;
                else LRdist--;
            }
        }
        if((LRdist==0 && UDdist==0) || direction!=0) return true;
        return false;
    }
};