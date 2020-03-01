#include<iostream>
using namespace std;
int main() {
	int a, b;
	int num;
    //C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자.
    // 단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
    // cin.tie와 sync_with_stdio는 편법이므로 printf와 scanf를 사용하자.
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}

}