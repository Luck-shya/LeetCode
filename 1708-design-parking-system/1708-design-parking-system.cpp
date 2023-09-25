class ParkingSystem {
public:
    int bigSpace;
    int mediumSpace;
    int smallSpace;
    
    ParkingSystem(int big, int medium, int small) {
        bigSpace = big;
        mediumSpace = medium;
        smallSpace = small;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if (bigSpace > 0){
                bigSpace -= 1;
                return true;
            }
        }
        else if(carType==2){
            if (mediumSpace > 0){
                mediumSpace -= 1;
                return true;
            }
        }
        else if(carType==3){
            if (smallSpace > 0){
                smallSpace -=1;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */