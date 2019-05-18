#pragma once
#include <iostream>
#include <string>


class poem
{
private:
	std::string title;
	std::string lines;
	int lc;
	


public:
	poem(std::string tit, int m);
	~poem();
	void display(std::ostream& os);
};

