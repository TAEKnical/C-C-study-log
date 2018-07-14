#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n"; //분리자는 스페이스, 쉼표, 팹, 줄바꿈문자임
char *token;

/*설명
strtok() 함수는 0개 이상의 토큰 시리즈로 string1을 읽고 string1에서 토큰 분리문자 역할을 하는 문자 세트로 string2를 읽습니다. string1의 토큰은 string2에서 하나 이상의 분리문자로 분리할 수 있습니다. string1의 토큰은 strtok() 함수에 대한 일련의 호출로 찾을 수 있습니다.

지정된 string1에 대한 strtok() 함수의 첫 번째 호출에서 strtok() 함수는 선행 분리문자를 건너뛰고 string1에서 첫 번째 토큰을 검색합니다. 첫 번째 토큰에 대한 포인터가 리턴됩니다.

NULL string1 인수로 strtok() 함수가 호출된 경우 마지막 널이 아닌 string1 매개변수의 저장된 사본에서 다음 토큰을 읽습니다. 각 분리문자는 널 문자로 대체됩니다. 분리문자 세트는 호출마다 달라질 수 있으므로 string2는 임의의 값을 사용할 수 있습니다. string1의 초기값은 strtok() 함수에 대한 호출 이후에 보존되지 않습니다.

strtok() 함수는 버퍼로 데이터를 기록합니다. 버퍼가 strtok() 함수로 손상되므로 토큰화할 스트링을 포함하는 중요하지 않은 버퍼로 함수를 전달해야 합니다.

-출처 : IBM Knowledge Centers
*/

int main(void)
{
	token = strtok(s, seps);
	while(token != NULL){
		printf("토큰: %s\n", token);
		token = strtok(NULL, seps);
	}

	return 0;
}