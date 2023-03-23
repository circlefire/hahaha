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

/*�Լ� ������*/
void server_init() {
	server_sock.sck = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	/*
	socket(int AF, int ���Ÿ��, int protocol)
	- �ּ� ü�� ����
	- ��� Ÿ�� ����
	- � �������� �������
	*/
	
	SOCKADDR_IN server_addr = {};
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(7777);
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	//localhost=127.0.0.1

	bind(server_sock.sck, (sockaddr*)&server_addr, sizeof(server_addr));
	/*
	bind(SOCKET s, const sockaddr *name, int namelen)
	- socket() ���� ������� ����
	- ���ϰ� ������ �ּ� ������ ��� �ִ� ����ü
	(�ڵ忡���� server_addr)
	- �� ��° �Ű������� ũ��
	*/
	listen(server_sock.sck, SOMAXCONN);
	/*	listen(SOCKET s, int backlog)*/
	server_sock.user = "server";
	// ������ ������ ���� ����
	cout << "Server On!" << endl;
}

