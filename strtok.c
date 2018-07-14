#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n"; //�и��ڴ� �����̽�, ��ǥ, ��, �ٹٲ޹�����
char *token;

/*����
strtok() �Լ��� 0�� �̻��� ��ū �ø���� string1�� �а� string1���� ��ū �и����� ������ �ϴ� ���� ��Ʈ�� string2�� �н��ϴ�. string1�� ��ū�� string2���� �ϳ� �̻��� �и����ڷ� �и��� �� �ֽ��ϴ�. string1�� ��ū�� strtok() �Լ��� ���� �Ϸ��� ȣ��� ã�� �� �ֽ��ϴ�.

������ string1�� ���� strtok() �Լ��� ù ��° ȣ�⿡�� strtok() �Լ��� ���� �и����ڸ� �ǳʶٰ� string1���� ù ��° ��ū�� �˻��մϴ�. ù ��° ��ū�� ���� �����Ͱ� ���ϵ˴ϴ�.

NULL string1 �μ��� strtok() �Լ��� ȣ��� ��� ������ ���� �ƴ� string1 �Ű������� ����� �纻���� ���� ��ū�� �н��ϴ�. �� �и����ڴ� �� ���ڷ� ��ü�˴ϴ�. �и����� ��Ʈ�� ȣ�⸶�� �޶��� �� �����Ƿ� string2�� ������ ���� ����� �� �ֽ��ϴ�. string1�� �ʱⰪ�� strtok() �Լ��� ���� ȣ�� ���Ŀ� �������� �ʽ��ϴ�.

strtok() �Լ��� ���۷� �����͸� ����մϴ�. ���۰� strtok() �Լ��� �ջ�ǹǷ� ��ūȭ�� ��Ʈ���� �����ϴ� �߿����� ���� ���۷� �Լ��� �����ؾ� �մϴ�.

-��ó : IBM Knowledge Centers
*/

int main(void)
{
	token = strtok(s, seps);
	while(token != NULL){
		printf("��ū: %s\n", token);
		token = strtok(NULL, seps);
	}

	return 0;
}