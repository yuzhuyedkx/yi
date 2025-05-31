#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//文件流操作：二进制文件的读写
//定义Book类，包含isbn（整型 int）、title（字符串string）、price（浮点数double）成员变量，提供有参构造函数和无参构造函数初始化成员变量, 成员函数void display()用于输出书本信息。
//在主程序中创建Book对象book1，调用有参构造函数初始化，创建文件输出流对象outfile执行二进制文件的写入操作, 将对象book1中的初始化信息写入二进制文件book.dat, 创建Book对象book2，调用无参构造函数初始化，创建文件输入流对象infile执行二进制文件的读取操作，将读取信息储存到对象book2上，调用display（）函数验证数据完整性。
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
	cout << "ISBN: " << isbn << ", 书名：" << title << ", 价格：" << price <<"元" << endl;
}
int main() {
	Book book_1(001, "《红楼梦》", 65);
	ofstream outfile("book.dat",ios::out|ios::binary);
	if (!outfile) {
		cout << "文件打开失败！" << endl;
	}
	outfile << "ISBN\t书名\t价格（元）"<<endl;      //将内容从内存写入文件
	outfile << book_1.Isbn()<<"\t" << book_1.Title() << "\t" << book_1.Price() << endl;
    outfile.close();
	ifstream infile("book.dat");
	if (!infile) {
		cout << "文件打开失败！" << endl;
	}
	string strisbn,strtitle,strprice;
	int isbn;
	string title;
	double price;
	infile >> strisbn >> strtitle >> strprice ;   //将文件内容提取到内存
	infile >> isbn >> title >> price;
	infile.close();
	Book book_2;
	book_2.isbn = isbn;
	book_2.title = title;
	book_2.price = price;
	book_2.display();
	return 0;
}