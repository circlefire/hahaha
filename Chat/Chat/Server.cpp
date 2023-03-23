#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <WinSock2.h>

#define MAX_SIZE 1024
#define MAX_CLIENT 3

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct SOCKET_INFO {
	SOCKET sck;
	string user;
};

std::vector<SOCKET_INFO> sck_list;
SOCKET_INFO server_sock;
int client_count = 0;

int main() {

}

/*함수 구현부*/
void server_init() {
	server_sock.sck = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	/*
	socket(int AF, int 통신타입, int protocol)
	- 주소 체계 형식
	- 통신 타입 설정
	- 어떤 프로토콜 사용할지
	*/
	
	SOCKADDR_IN server_addr = {};
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(7777);
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	//localhost=127.0.0.1

	bind(server_sock.sck, (sockaddr*)&server_addr, sizeof(server_addr));
	/*
	bind(SOCKET s, const sockaddr *name, int namelen)
	- socket() 으로 만들어준 소켓
	- 소켓과 연결할 주소 정보를 담고 있는 구조체
	(코드에서는 server_addr)
	- 두 번째 매개변수의 크기
	*/
	listen(server_sock.sck, SOMAXCONN);
	/*	listen(SOCKET s, int backlog)*/
	server_sock.user = "server";
	// 서버가 켜지면 나올 문구
	cout << "Server On!" << endl;
}

