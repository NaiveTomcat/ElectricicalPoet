#include "poem.h"
#include <fstream>
using std::cout;
using std::cin;

void mkPoem();

int main()
{
	cout << "\a\a����ʫ��V1.0C++��\n\a\a�廪��ѧ������ѧ����ѧУ���Ϳռ��Ʒ\n\a\a�������ѭGNU Lesser General Public Lisence(LGPL)V3.0\n\a\a\n"
		<< "�����ʹ����NaiveTomcat��Ʒ��PoemClass��\nGitHub����:https://github.com/NaiveTomcat/PoemClass \n��֪���⣺�����β���з�����\n\n\n";
	CHOICE:
	char choice;
	cout << "m:��ʫ\nq:�˳�\ni:��Ϣ\n";
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
	case 'I':	cout << "\a\a����ʫ��V1.0C++��\n\a\a�廪��ѧ������ѧ����ѧУ���Ϳռ��Ʒ\n\a\a�������ѭGNU Lesser General Public Lisence(LGPL)V3.0\n\a\a\n"
					 << "�����ʹ����NaiveTomcat��Ʒ��PoemClass��\nGitHub����:https://github.com/NaiveTomcat/PoemClass \n\n\n\n";
				break;
	default:	cout << "��Ч������\n����������\n";
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
	cout << "������ʫ��\n";
	cin >> title;
	cout << "����������\n";
	cin >> l;
	cout << "������Ҫд����ļ�\n";
	cin >> fileName;
	std::ofstream fout(fileName.c_str(), std::ios_base::out | std::ios_base::app);
	poem p(title, l);
	p.display(cout);
	p.display(fout);
	cout << std::endl << std::endl;
}