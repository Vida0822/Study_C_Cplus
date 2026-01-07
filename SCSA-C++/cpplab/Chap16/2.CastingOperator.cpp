#include <iostream>

/*
    dynamic_cast (***)
        실행시에 타입 체크 후 형변환
        upcasting, downcastign 모두 사용 가능 
        안전한 형변환을 위해서 RTTI(Running Time Type Information) 사용 
        RTTI : 객체의 실제 타입을 파악 (상관관계 파악하여 형변환 하기 때문에 안전성 보장)
        
        안전하다? 
        - 다운캐스팅의 경우 형변환이 성공된 경우에만 객체 리턴, 실패하면 널을 리턴한다.  
        - 객체가 가상함수를 가지고 있는 경우에만 다운캐스팅을 지원한다. 

    static_cast 
        컴파일시에 타입 체크 후 형변환
        기본 타입의 변환(*)이나 업캐스팅, 다운캐스팅 모두 사용 가능 
        안전성 보장 X : 상속 관계만 봄
        속도 빠름

    reinterpret_cast 
        상속 관계가 없는 타입의 형변환도 지원합니다 
        안전성이 전혀 보장X 

    const_cast 
        const 연산자를 제거한다. 

*/