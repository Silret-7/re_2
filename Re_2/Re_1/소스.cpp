#include <iostream>
#include <string>
using namespace std;

// 우선 aniaml 이라는 하나의 클래스로 묶고, 거기서 다양한 동물들을 파생.
// (각각의 소리를 내는 동물들)
// -> 각각 해당하는 (동물)이 입력 됐을 때, 해당 동물의 소리를 출력한다.


class animal{
public:
	virtual void makesound() = 0;
};

class 개 : public animal {
public:
		void makesound() {
		cout << "멍멍!" << endl;
	}
};

class 고양이 : public animal {
public:
		void makesound() {
		cout << "야옹~ " << endl;
	}
};

class 소 : public animal {
public:
		void makesound() {
		cout << "음메~ " << endl;
	}
};

int main() {
	animal* animalsound[3];
	animalsound[0] = new 개();
	animalsound[1] = new 고양이();
	animalsound[2] = new 소();

	
	for (int i = 0; i <= 2; i++) {
		
		animalsound[i]->makesound();
	}

	for (int i = 0; i <= 2; i++) {
		delete animalsound[i];
	}
	
	return 0;
}