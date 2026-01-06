//
//
//#include <iostream>
//
//using namespace std;
//void functionOne(void); 
//void functionTwo(void);
//void functionThree(void);
//
//void functionOne(void) {
//    cout << "one1" << endl; 
//    try {
//        functionTwo();
//    }
//    catch (int ex) {
//        cout << ex << "가 발생했습니다: functionOne()" << endl;
//    }
//    cout << "one2" << endl; // 이 함수에서 예외처리 안해주면 이 코드 시행 안됨 
//}
//
//void functionTwo(void) {
//    cout << "two1" << endl;
//    functionThree();
//    //try {
//    //    functionThree();
//    //}
//    //catch (int ex) {
//    //    cout << ex << "가 발생했습니다: functionTwo()" << endl;
//    //}
//    cout << "two2" << endl; 
//}
//
//void functionThree(void) {
//    cout << "three1" << endl;
//    throw - 1; 
//    cout << "three2" << endl;
//}
//
//int main() {
//    try {
//        functionOne(); 
//    }
//    catch (int ex) {
//        cout << ex << "가 발생했습니다: main()" << endl; 
//    }
//    cout << "End of Main" << endl; 
//    return 0;
//}
