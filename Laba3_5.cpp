#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string code(string &msg, int key){
	string new_msg = msg;
	int len=msg.length();
	int stroki,stolb;
	if ((len % key) == 0) stroki = len/key;
	else stroki = len/key +1;
	stolb=key;
	for(int i=0;i<len;i++){
		int new_index=stroki * (i % stolb)+ (i / stolb);
		new_msg[new_index]=msg[i];
	}
	return new_msg;
}


string decode(string &msg, int key){
	string new_msg = msg;
	int len=msg.length();
	int stroki,stolb;
	if ((len % key) == 0) stolb = len/key;
	else stolb = len/key +1;
	stroki=key;
	for(int i=0;i<len;i++){
		int new_index=stroki * (i % stolb)+ (i / stolb);
		new_msg[new_index]=msg[i];
	
}
return new_msg;
}

int main(int argc, char **argv)
{
	string msg;
	int key;
	int fun;
	while(true){
		cout << "Введите сообщение(прописные буквы англ): ";
		while(true){
			bool flag=0;
			cin >> msg;
			for (int i =0; i<msg.length();i++){
				if (msg[i] < 'a' || msg [i] > 'z') flag=1; 
			}
			if (flag==0) break;
			else cout << "Неверный формат текста" << endl;;
		}
		while(true){
			cout << "Введите ключ: ";
			cin >> key;
			if (key <= msg.length()/2) break;
			else cout << "Неверный формат ключа" << endl;
		}
	
		cout << "Что делать??" << endl;
		cout << "1 - Зашифровать текст" << endl;
		cout << "2 - Расшифровать текст" << endl;
		cout << "0 - Выйти из программы" << endl;
		cin >> fun;
		if (fun == 1) cout << code(msg,key) << endl;
		if (fun == 2) cout << decode(msg,key) << endl;
		if (fun == 0) break;
		if (fun < 0 || fun > 2) cout << "Такого выбора у  нет..." << endl;
	
	
	}
	return 0;
}
