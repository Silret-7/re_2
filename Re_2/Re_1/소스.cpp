#include <iostream>
#include <string>
using namespace std;

// �켱 aniaml �̶�� �ϳ��� Ŭ������ ����, �ű⼭ �پ��� �������� �Ļ�.
// (������ �Ҹ��� ���� ������)
// -> ���� �ش��ϴ� (����)�� �Է� ���� ��, �ش� ������ �Ҹ��� ����Ѵ�.


class animal{
public:
	virtual void makesound() = 0;
};

class �� : public animal {
public:
		void makesound() {
		cout << "�۸�!" << endl;
	}
};

class ����� : public animal {
public:
		void makesound() {
		cout << "�߿�~ " << endl;
	}
};

class �� : public animal {
public:
		void makesound() {
		cout << "����~ " << endl;
	}
};

int main() {
	animal* animalsound[3];
	animalsound[0] = new ��();
	animalsound[1] = new �����();
	animalsound[2] = new ��();

	
	for (int i = 0; i <= 2; i++) {
		
		animalsound[i]->makesound();
	}

	for (int i = 0; i <= 2; i++) {
		delete animalsound[i];
	}
	
	return 0;
}