class ParkingSystem {
public:
    int s;
    int b;
    int m;
    ParkingSystem(int big, int medium, int small) {
         this->s = small;
         this->b = big;
         this->m = medium;
    }
    
    bool addCar(int carType) {
        if(carType == 3){
            return s>0?s--:0;
        }else if(carType == 2){
            return m>0?m--:0;
        }else{
            return b>0?b--:0;
        }
    }
    
   
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */