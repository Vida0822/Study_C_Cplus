//#include <iostream>
//
//using namespace std;
//
//void Devide(int num1, int num2) {
//    if (num2 == 0) throw num2; 
//
//    cout << num1 / num2 << endl; 
//}
//
//int main() {
//    int num1, num2; 
//    cin >> num1 >> num2; 
//    
//    //if (num2 == 0) return 0; // Bad : if문은 분기문이지 예외처리용이 아니다
//
//    try {
//        //if (num2 == 0) throw num2; 
//        //cout << num1 / num2 << endl;
//        Devide(num1, num2); 
//    }
//    catch (int ex) {
//        cout << "제수는 " << ex << "가 될 수 없습니다.";
//    }
//    catch (double ex) {
//
//    }
//
//    cout << "End of Main" << endl;
//
//    return 0;
//}
