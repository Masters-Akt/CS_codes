class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int name_pointer=0, typed_pointer=0;
        while(name_pointer!=name.size() || typed_pointer!=typed.size()){
            if(name[name_pointer]==typed[typed_pointer]){
                name_pointer++;
                typed_pointer++;
            }else{
                if(name_pointer==0) return false;
                else{
                    if(name[name_pointer-1]!=typed[typed_pointer]) return false;
                    else typed_pointer++;
                }
            }
        }
        if(name_pointer!=name.size()) return false;
        while(typed_pointer!=typed.size()){
            if(typed[typed_pointer]!=name[name_pointer-1]) return false;
        }
        return true;
    }
};