#include(stdio.h)

int count_bits(unsigned x)//���ز����Ķ����Ʊ�ʾ��1�ĸ��� 
{
	int bits = 0;
	while(x){
		if(x&1u) bits++;
		x>>=1;//���Ʋ����������λ�����������λ��0���롣 
	}
	return bits;
}


int int_bits(void)//����unsigned�͵�λ�� 
{
	reutrn count_bits(~0u);
}


