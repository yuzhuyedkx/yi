#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//�ļ����������������ļ��Ķ�д
//����Book�࣬����isbn������ int����title���ַ���string����price��������double����Ա�������ṩ�вι��캯�����޲ι��캯����ʼ����Ա����, ��Ա����void display()��������鱾��Ϣ��
//���������д���Book����book1�������вι��캯����ʼ���������ļ����������outfileִ�ж������ļ���д�����, ������book1�еĳ�ʼ����Ϣд��������ļ�book.dat, ����Book����book2�������޲ι��캯����ʼ���������ļ�����������infileִ�ж������ļ��Ķ�ȡ����������ȡ��Ϣ���浽����book2�ϣ�����display����������֤���������ԡ�
class Book {
public:
	int isbn;
	string title;
	double price;
public:
	Book() { isbn = 00000; title = "name"; price = 00; }
	Book(int isbn, string title, double price) :isbn(isbn), title(title), price(price) { ; }
	//void getBook(int isbn,string title,double price) { cin >> isbn >> title >> price; }
	int Isbn() { return isbn; }
	string Title() { return title; }
	double Price() { return price; }
	void display();
};
void Book::display() {
	cout << "ISBN: " << isbn << ", ������" << title << ", �۸�" << price <<"Ԫ" << endl;
}
int main() {
	Book book_1(001, "����¥�Ρ�", 65);
	ofstream outfile("book.dat",ios::out|ios::binary);
	if (!outfile) {
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	outfile << "ISBN\t����\t�۸�Ԫ��"<<endl;      //�����ݴ��ڴ�д���ļ�
	outfile << book_1.Isbn()<<"\t" << book_1.Title() << "\t" << book_1.Price() << endl;
    outfile.close();
	ifstream infile("book.dat");
	if (!infile) {
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	string strisbn,strtitle,strprice;
	int isbn;
	string title;
	double price;
	infile >> strisbn >> strtitle >> strprice ;   //���ļ�������ȡ���ڴ�
	infile >> isbn >> title >> price;
	infile.close();
	Book book_2;
	book_2.isbn = isbn;
	book_2.title = title;
	book_2.price = price;
	book_2.display();
	return 0;
}