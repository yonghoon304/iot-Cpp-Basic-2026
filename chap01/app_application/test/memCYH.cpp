#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include <algorithm>
using namespace std;

class Member {
private:
	int id;
	string name;
	string email;
	string phone;

public:
	Member(int id, string name, string email, string phone) {
		this->id = id;
		this->name = name;
		this->email = email;
		this->phone = phone;
	}
	// 게터,세터
	int getId() { return id; }
	string getName() { return name; }
	string getPhone() { return phone; }
	string getEmail() { return email; }
	void setId(int id) { this->id = id; }
	void setName(string name) { this->name = name; }
	void setEmail(string email) { this->email = email; }
	void setPhone(string phone) { this->phone = phone; }

	void input() {
		cout << "ID: ";
		cin >> id;
		cout << "Name: ";
		cin >> name;
		cout << "Email: ";
		cin >> email;
		cout << "Phone: ";
		cin >> phone;
	}
	// left는 왼쪽 정렬, setw는 출력 너비 설정
	void print() {
		cout << left << setw(10) << id
			<< left << setw(15) << name
			<< left << setw(15) << email
			<< left << setw(25) << phone
			<< endl;
	}
	void update() {
		cout << "new Name : ";
		cin >> name;
		cout << "new Email : ";
		cin >> email;
		cout << "new Phone : ";
		cin >> phone;

	}
};
class MemberManager {
private:
	vector<Member> members;
public:
	void loadFromFile() {
		ifstream file("members.txt");
		if (!file.is_open()) {
			cout << "파일을 열 수 없습니다. 새로운 파일이 생성됩니다.\n";
			return;
		}
		int id;
		string name, email, phone;
		while (file >> id >> name >> email >> phone) {
			members.emplace_back(id, name, email, phone);
		}
		file.close();
	}

	bool exists(int id) {
		for (auto& m : members) {
			if (m.getId() == id) {
				return true;
			}
		}
		return false;
	}

	void addMember() {
		Member m(0, "", "", "");
		m.input();
		if (exists(m.getId())) {
			cout << "이미 존재하는 ID입니다. 회원 등록 실패.\n";
			return;
		}
		members.push_back(m);
		cout << "회원 등록 성공.\n";
	}

	void viewMembers() {
		if (members.empty()) {
			cout << "등록된 회원이 없습니다.\n";
			return;
		}
		cout << left << setw(10) << "ID"
			<< left << setw(15) << "Name"
			<< left << setw(15) << "Email"
			<< left << setw(25) << "Phone"
			<< endl;
		cout << string(65, '-') << endl;
		// maping할때 자동으로 변수 선언해주는 것
		for (auto& m : members) {
			m.print();
		}
	}

	void saveToFile() {
		ofstream outFile("members.txt");
		for (auto& m : members) {
			outFile << m.getId() << " " << m.getName() << " "
				<< m.getEmail() << " " << m.getPhone() << endl;
		}
	}

	void searchMember() {
		int id;
		cout << "검색할 ID 입력: ";
		cin >> id;
		for (auto& m : members) {
			if (m.getId() == id) {
				m.print();
				return;
			}
		}
		cout << "회원이 존재하지 않습니다.\n";
	}

	void updateMember() {
		int id;
		cout << "수정할 ID 입력: ";
		cin >> id;
		for (auto& m : members) {
			if (m.getId() == id) {
				m.update();
				cout << "회원 정보가 수정되었습니다.\n";
				return;
			}
		}
		cout << "회원이 존재하지 않습니다.\n";
	}

	void deleteMember() {
		int id;
		cout << "삭제할 ID 입력: ";
		cin >> id;
		for (auto it = members.begin(); it != members.end(); ++it) {
			if (it->getId() == id) {
				members.erase(it);
				cout << "회원이 삭제되었습니다.\n";
				return;
			}
		}
		cout << "회원이 존재하지 않습니다.\n";
	}

	void countMembers() {
		cout << " 현재 등록된 회원 수 : " << members.size() << "명" << endl;
	}

	void searchMember_name() {
		string name;
		bool found;
		cout << "검색할 이름 입력 >";
		cin >> name;

		cout << left << setw(10) << "ID"
			<< left << setw(15) << "Name"
			<< left << setw(15) << "Email"
			<< left << setw(25) << "Phone"
			<< endl;

		cout << string(65, '-') << endl;

		for (auto& m : members) {
			if (m.getName() == name) {
				m.print();
				found = true;
			}
			// if (false)면 출력이 안됨.
		}if (!found) {
			cout << "회원이 존재하지 않습니다" << endl;
		}
	}

	void sortMembers() {
		// 람다는 이번 한번만 쓰는 임시 함수
		sort(members.begin(), members.end(), [](Member a, Member b) {
			return a.getName() < b.getName();
			});
		cout << "이름 기준 정렬 완료\n";
		viewMembers();

	};
};

int main() {
	char menu;
	MemberManager manager;
	manager.loadFromFile();

	while (true) {
		cout << "\n========== 회원관리 ==========\n";
		cout << "1. 회원 등록\n";
		cout << "2. 전체 조회\n";
		cout << "3. 회원 검색\n";
		cout << "4. 회원 수정\n";
		cout << "5. 회원 삭제\n";
		cout << "6. 회원 수\n";
		cout << "7. 이름으로 회원 검색 \n";
		cout << "8. 이름 기준 오름차순 정렬 후 출력\n";
		cout << "Q. 종료\n";
		cout << "\n========== 선택창 ==========\n";
		cout << "메뉴 선택 : ";
		cin >> menu;
		switch (menu) {
		case '1':
			manager.addMember();
			break;
		case '2':
			manager.viewMembers();
			break;
		case '3':
			manager.searchMember();
			break;
		case '4':
			manager.updateMember();
			break;
		case '5':
			manager.deleteMember();
			break;
		case '6':
			manager.countMembers();
			break;
		case '7':
			manager.searchMember_name();
			break;
		case '8':
			manager.sortMembers();
			break;
		case ('Q'):
		case ('q'):
			manager.saveToFile();
			cout << "프로그램 종료\n";

			return 0;
		default:
			cout << "잘못된 메뉴 선택입니다. 다시 선택해주세요.\n";;
		}
	}

	return 0;
}
