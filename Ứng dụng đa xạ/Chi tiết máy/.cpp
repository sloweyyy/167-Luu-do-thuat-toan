#include <iostream>
using namespace std;
#include "CChiTiet.h"
#include "CChiTietDon.h"
#include "CChiTietPhuc.h"
#include "CMay.h"




int main()
{
	CMay may;
	may.Nhap();
	float s = may.TinhTien();
	cout << s;
	return 0;
}