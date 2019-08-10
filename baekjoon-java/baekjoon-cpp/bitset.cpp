#include <bitset>
#include <iostream>
using namespace std;

int main() {
	bitset<8> b1;  // 0,0,0,0,0,0,0,0
	bitset<10> b2(88);  // 0,0,0,1,0,1,1,0,0,0  88을 기본값으로 하는 10자리
	bitset<8> b3("10110");  // 0,0,0,1,0,1,1,0

	bitset<10> b(88);  // 0,0,0,1,0,1,1,0,0,0

	for (int i = 0; i < b.size(); i++) {
		cout << i << ": " << b[i] << '\n';   // bitset도 container이기 때문에 대괄호([]) 이용 가능
	}

	cout << "-----------------------------------------------------------------\n";

	cout << b << '\n'; // 0001011000

	cout << b.test(4) << '\n';  // 1 = b[4]  대괄호를 이용한 접근과 같음
	cout << b.test(5) << '\n';  // 0 = b[5]

	b.set(0);  // 0번째 위치를 set(1로 바꿈)
	cout << b << '\n';  // 0001011001

	b.reset(3);  // 3번째 위치를 reset(0으로 바꿈)
	cout << b << '\n';  // 0001010001

	b.flip(2);  // 2번째 위치에 0이 있으면 1로, 1이 있으면 0으로 바꿈
	cout << b << '\n';  // 0001010101

	cout << "-----------------------------------------------------------------\n";

	bitset<10> bb(88);  // 0,0,0,1,0,1,1,0,0,0
	cout << bb << '\n';  // 0001011000

	bb.flip();  // 인자가 없으면 전체에 적용. 전체에 대하여 0을 1로 1을 0으로
	cout << bb << '\n';  // 1110100111

	bb.set();
	cout << bb << '\n';  // 1111111111

	bb.reset();
	cout << bb << '\n';  // 0000000000

	cout << "-----------------------------------------------------------------\n";

	bitset<10> bbb(88);  // 0,0,0,1,0,1,1,0,0,0
	cout << bbb << '\n';  // 0001011000

	cout << bbb.all() << '\n';  // 모든 비트가 1인지 -> false
	cout << bbb.any() << '\n';  // 비트가 1인게 1개 이상인지 -> true
	cout << bbb.none() << '\n';  // 모든 비트가 0인지 -> false

	cout << bbb.count() << '\n';  // 1로 되어있는 비트의 개수

	cout << "-----------------------------------------------------------------\n";

	bitset<10> b4(88);  // 0,0,0,1,0,1,1,0,0,0
	bitset<10> b5(47);  // 0,0,0,0,1,0,1,1,1,1

	cout << (b4 & b5) << '\n';  // 0000001000, AND연산
	cout << (b4 | b5) << '\n';  // 0001111111, OR연산
	cout << (b4 ^ b5) << '\n';  // 0001110111, XOR연산
	cout << ~b4 << '\n';  // 1110100111, NOT연산

	cout << (b4 << 2) << '\n';  // 0101100000, SHIFT연산
	cout << (b5 >> 2) << '\n';  // 0000001011, SHIFT연산

	return 0;
}