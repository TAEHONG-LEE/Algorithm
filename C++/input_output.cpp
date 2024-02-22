// C++에서 출력을 하는 방법

// C++에서 출력을 하는 기본적인 방법은 std::cout를 사용하는 것이다. 
// std::cout는 C++의 표준 라이브러리인 <iostream> 헤더 파일에 정의되어 있는 출력 스트림이다. 
// 여기에 << 연산자를 사용하여 데이터를 출력 스트림으로 보낼 수 있다.
// using namespace std;를 이용하여 std를 생략할 수 있다.



// C++에서 입력을 넣는 방법

// C++에서 사용자로부터 입력을 받기 위해서는 표준 라이브러리 <iostream>의 cin 객체를 사용한다.
// 여기서 std::cin는 표준 입력 스트림으로, 보통 콘솔 또는 터미널에서의 입력을 받는다. 
// cin >> 연산자를 사용하면 입력 스트림은 공백(스페이스, 탭, 엔터) 등을 구분자로 사용한다.
// 그러므로 공백을 포함한 문자열을 입력하게 된다면 공백 이전의 문자열만 name 변수에 저장된다.
// 공백 이후의 문자열은 다음 입력으로 처리된다.
// getline(cin, name); 과 같이 입력을 받아야 한다.
// 이를 사용하기 위해서 #include <string>을 사용해야 한다.
// 또한 getline을 사용하기 전 입력 버퍼를 비우기 위해 cin.ignore()을 호출해야한다.


#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int myNumber = 10;
    double myDouble = 3.14;
    cout << "Integer: " << myNumber << endl;
    cout << "Double: " << myDouble << endl;
    
    int number;
    cin >> number;
    cout << "Your number: " << number << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string name;
    // cin >> name;
    getline(cin, name);
    cout << "Your name: " << name << endl;

    return 0;
}      