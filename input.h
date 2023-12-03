
#include "init.h"
#include "defs.h"
#include "utils.h"

/* main.h�� ���ǵ� ���� ���� ��� */
extern App app;
extern Entity player[3];
extern Entity BALL;
extern Entity game_over;


/**
 @brief �ܺ� �Է��� �޾� ������ ������ ���ϵ��� �Ѵ�.

 �Է� ó���� ���� ��� ������ ��� �ִ� �Լ��̴�. ������ ���� �ൿ�� �����Ѵ�.

 1. â�ݱ� ��ư�� ������ ���α׷� ����
 2. Ű���带 ������ \ref ResponseKeyDown ȣ��
 3. Ű���带 ���� \ref ResponseKeyUp ȣ��

 @return ���� �� ����
 @ingroup Input
*/
void GetInput(void);

/**
 @brief Ű���带 ���� �� ���¸� ����Ѵ�.

 \ref app �� ��� \ref App.key_up , \ref App.key_down , \ref App.key_left , \ref
 App.key_right �� Ű���尡 ����/���� ���¸� ����ϴ� �����̴�. �̺�Ʈ�� ���� Ű���尡
 ���� Ű�� ���� ������ 0���� �����Ѵ�.

 @param[in] event Ű���� �̺�Ʈ ������ ��� �ִ� ����ü

 @remark �������� \ref app ����ü�� �����Ѵ�.

 @return ���� �� ����
 @ingroup Input
*/
void ResponseKeyUp(SDL_KeyboardEvent *event);

/**
 @brief Ű���带 ������ �� ���¸� ����Ѵ�.

 \ref app �� ��� \ref App.key_up , \ref App.key_down , \ref App.key_left , \ref
 App.key_right �� Ű���尡 ���� ���¸� ����ϴ� �����̴�. �̺�Ʈ�� ���� Ű���尡
 ���� Ű�� ���� ������ 1���� �����Ѵ�.

 @param[in] event Ű���� �̺�Ʈ ������ ��� �ִ� ����ü

 @remark �������� App app ����ü�� �����Ѵ�.
 
 @return ���� �� ����
 @ingroup Input
*/
void ResponseKeyDown(SDL_KeyboardEvent *event);

