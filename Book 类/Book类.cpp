//4、设计一个图书信息类 Book，通过常量对象和常量引用实现对图书信息的安全访问和管理。要求：
//私有数据成员：title（书名）、author（作者）、isbn（ISBN号）
//构造函数：Book(string title, string author, string isbn)：初始化图书信息。
//常成员函数：string getTitle() const：返回书名。
//string getAuthor() const：返回作者。
//string getISBN() const：返回ISBN号。
//非常成员函数（可选）：
//void setTitle(string title)：设置书名。
//void setAuthor(string author)：设置作者。
//void setISBN(string isbn)：设置ISBN号。
//静态成员函数：
//void displayBook(const Book & book)：通过常量引用显示图书信息。
//编写主程序测试：
//创建一个常量对象 book1：
//调用常成员函数获取书名、作者和ISBN号。
//创建一个非常量对象 book2：
//调用常成员函数获取书名、作者和ISBN号。
//调用非常成员函数修改书名、作者和ISBN号。
//调用静态成员函数 displayBook，传递常量对象 book1和非常量对象 book2：
//Book::displayBook(book1);
//Book::displayBook(book2);
#include <iostream>
using namespace std;
class Book {
private:
    string title,author, isbn;
public:
    Book(string title, string author, string isbn) :title(title), author(author), isbn(isbn) {};
    string getTitle() const { return title ; }
    string getAuthor() const { return author; }
    string getISBN() const { return isbn; }
    void setTitle(string titlet);
    void setAuthor(string author);
    void setISBN(string isbn);
    static void displayBook(const Book& book);
    ~Book() {};
};
void Book::setTitle(string title) {
    Book::title = title;
}
void Book::setAuthor(string author) {
    Book::author = author;
}
void Book::setISBN(string isbn) {
    Book::isbn = isbn;
}
void Book::displayBook(const Book& book) {
    cout << "书名：" << book.getTitle()<< " , 作者：" << book.getAuthor() << " , ISBN：" << book.getISBN() << endl;
}
int main()
{
    cout << "常成员变量信息：" << endl;
    const Book book1("《朝花夕拾》", "鲁迅", "9787020044399");
    Book::displayBook(book1);
    cout << "普通成员变量信息：" << endl;
    cout << "修改前信息：" << endl;
    Book book2("《红楼梦》", "曹雪芹", "9787040318371");
    Book::displayBook(book2);
    cout << "修改后信息：" << endl;
    book2.setTitle("《孙子兵法》");
    book2.setAuthor("孙武");
    book2.setISBN("9789570602166");
    Book::displayBook(book2);
    return 0;
}