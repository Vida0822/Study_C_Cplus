
//#include <iostream>
//
//using namespace std;
//
//void change(int a, int b= 0) {
//    a++;
//    cout << "change : a : " << a << endl;
//}
//void change2(int* a, int b = 0) {
//    (*a)++;
//    cout << "change2 : a : " << *a << endl;
//}
//void change3(int& a, int b = 0) {
//    a++;
//    cout << "change3 : a : " << a << endl;
//}
//int& change4(int& a, int b = 0) {
//    a++;
//    static int c = 20;
//    cout << "change4 : a : " << a << endl;
//    return c;
//}
//int main() {
//    int a = 10, b = 20;
//    //change(a);
//    //change2(&a);
//    // change3(a);
//    int& res = change4(a);
//    cout << "main : res : " << res <<  endl;
//    
//    return 0;
//}
