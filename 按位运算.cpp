#include(stdio.h)

int count_bits(unsigned x)//返回参数的二进制表示中1的个数 
{
	int bits = 0;
	while(x){
		if(x&1u) bits++;
		x>>=1;//右移操作符，最低位被抛弃，最高位用0补齐。 
	}
	return bits;
}


int int_bits(void)//计算unsigned型的位数 
{
	reutrn count_bits(~0u);
}


