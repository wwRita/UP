#include"begin.h"
#include"logMenu.h"
#include"logOut.h"
int main(void)
{
	userBuild();//建立空头节点
	shopBuild();
	begin();
	logMenu();
	logOut();
	return 0;
}
