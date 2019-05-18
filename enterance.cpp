#include "poem.h"
#include <fstream>
using std::cout;
using std::cin;

void mkPoem();

int main()
{
	cout << "\a\a电子诗人V1.0C++版\n\a\a清华大学附属中学西安学校创客空间出品\n\a\a本软件遵循GNU Lesser General Public Lisence(LGPL)V3.0\n\a\a\n"
		<< "本软件使用了NaiveTomcat出品的PoemClass类\nGitHub链接:https://github.com/NaiveTomcat/PoemClass \n已知问题：输出行尾换行符乱码\n\n\n";
	CHOICE:
	char choice;
	cout << "m:作诗\nq:退出\ni:信息\n";
	cin >> choice;
	switch (choice)
	{
	case 'm':
	case 'M':	mkPoem();
				break;
	case 'q':
	case 'Q':	return 0;
				break;
	case 'i':
	case 'I':	cout << "\a\a电子诗人V1.0C++版\n\a\a清华大学附属中学西安学校创客空间出品\n\a\a本软件遵循GNU Lesser General Public Lisence(LGPL)V3.0\n\a\a\n"
					 << "本软件使用了NaiveTomcat出品的PoemClass类\nGitHub链接:https://github.com/NaiveTomcat/PoemClass \n\n\n\n";
				break;
	default:	cout << "无效的输入\n请重新输入\n";
				goto CHOICE;
				break;

	}
	goto CHOICE;
	return 0;
}

void mkPoem()
{
	std::string title;
	int l;
	std::string fileName;
	cout << "请输入诗题\n";
	cin >> title;
	cout << "请输入行数\n";
	cin >> l;
	cout << "请输入要写入的文件\n";
	cin >> fileName;
	std::ofstream fout(fileName.c_str(), std::ios_base::out | std::ios_base::app);
	poem p(title, l);
	p.display(cout);
	p.display(fout);
	cout << std::endl << std::endl;
}