#include "mathTools.h"




/*
    vectorEqual
*/
int main(){
    Vec6 v1;
    Vec6 v2;
    v1.setZero();
    v2 << 0.346679,
-0.198803,
-0.440963,
 0.000848,
        0,
        0;

    std::cout << (int)vectorEqual(v1, v2, 0.05) << std::endl;

}



/*
    inInterval
*/
// int main(){
//     double value = 3.0;

//     if(inInterval(value, 3.0, 2.0, false, true)){
//         std::cout << "In" << std::endl;
//     }else{
//         std::cout << "Out" << std::endl;
//     }

//     return 0;
// }





// int main(){
//     double first = 0.2;
//     double second = 0.3;

//     // std::cout << first << " - " << second << ", result = " << angleError(first, second, true) << std::endl;
//     // std::cout << first << " - " << second << ", result = " << angleError(first, second, false) << std::endl;
//     // std::cout << second << " - " << first << ", result = " << angleError(second, first, true) << std::endl;
//     // std::cout << second << " - " << first << ", result = " << angleError(second, first, false) << std::endl;

//     Vec3 firstVec, secondVec;
//     firstVec << 0.1, 0.2, 0.3;
//     secondVec << 0.3, 0.2, 0.1;

//     std::cout << firstVec.transpose() << " - " << secondVec.transpose() << std::endl;
//     std::cout << angleError(firstVec, secondVec, TurnDirection::NOMATTER).transpose() << std::endl;

//     std::cout << firstVec.transpose() << " - " << secondVec.transpose() << std::endl;
//     std::cout << angleError(firstVec, secondVec, TurnDirection::POSITIVE).transpose() << std::endl;

//     std::cout << firstVec.transpose() << " - " << secondVec.transpose() << std::endl;
//     std::cout << angleError(firstVec, secondVec, TurnDirection::NEGATIVE).transpose() << std::endl;

//     std::cout << secondVec.transpose() << " - " << firstVec.transpose() << std::endl;
//     std::cout << angleError(secondVec, firstVec, TurnDirection::NOMATTER).transpose() << std::endl;

//     std::cout << secondVec.transpose() << " - " << firstVec.transpose() << std::endl;
//     std::cout << angleError(secondVec, firstVec, TurnDirection::POSITIVE).transpose() << std::endl;

//     std::cout << secondVec.transpose() << " - " << firstVec.transpose() << std::endl;
//     std::cout << angleError(secondVec, firstVec, TurnDirection::NEGATIVE).transpose() << std::endl;
    
//     return 0;
// }