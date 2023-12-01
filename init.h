#ifndef INIT_H
#define INIT_H

#include "defs.h"
#include "utils.h"

/* main.h�� ���ǵ� ���� ���� ��� */


/**
 @brief ���α׷� ���࿡ �ʿ��� �ʱ�ȭ ���� ����

 SDL �ʱ�ȭ ������ �����Ѵ�. ���� .png�� .jpg ������ ����ϱ� ���� �۾��� �����Ѵ�.

 @exception �ʱ�ȭ ���� �� ������ �ֿܼ� ����Ѵ�.
 @remark �������� \ref app �� �����Ѵ�.

 @return ���� �� ����
 @ingroup Init
*/
void InitSDL(void);

/**
 @brief TTF��Ʈ ����� ���� �ʱ�ȭ ���� ����

 TTF��Ʈ �ʱ�ȭ ������ �����Ѵ�.

 @exception �ʱ�ȭ ���� �� ������ �ֿܼ� ����ϰ� ���α׷��� �����Ѵ�.
 @remark �������� \ref app �� �����Ѵ�.

 @return ���� �� ����
 @ingroup Init
*/
void InitTTF(void);

/**
 @brief ���α׷� ���ῡ �ʿ��� ��ƾ�� �����ϰ� ���α׷� ����

 ���α׷� ���� �� �������� \ref app �� \ref App.renderer �� \ref App.window ��
 �ݰ� ���α׷��� �����Ѵ�.

 @param[in] flag ���� �Լ��� �Ѱ��� ���α׷� ���ϰ�

 @remark �������� \ref app �� �����Ѵ�.

 @return ���� �� ����
 @ingroup Init
*/
void QuitSDL(int flag);

/**
 @brief �� ��Ʈ ������ �ݰ� TTF ���� ����

 \ref app �� \ref App.font �� �ݰ� TTF ������ �����Ѵ�.

 @remark �������� \ref app �� �����Ѵ�.

 @return ���� �� ����
 @ingroup Init
*/
void QuitTTF(void);

/**
 @brief ���� ���� �޸� ���� �ʱ�ȭ

 ��� ���� ������ �޸� ������ 0���� �ʱ�ȭ�Ѵ�.

 @remark �ʱ�ȭ ���: \ref app , \ref game_over \ref player , \ref bullet , \ref
 score_board .

 @return ���� �� ����
 @ingroup Init
*/
void InitMemorySet(void);

/**
 @brief ���ھ�� �ʱ�ȭ

 \ref score_board �� �۾� ����� ��ġ�� �ʱ�ȭ�Ѵ�. �۾� ������ ������, ��ġ��
 (420, 40) ���� �����Ѵ�.
 �� ��ü�� �ʺ�� ���̴� �ؽ��� ������ �������� \ref Draw ����� �Լ����� �ϰ�
 ����Ͽ� �ݿ��ϹǷ� ������ �������� �ʴ´�.

 @remark �������� \ref score_board �� �����Ѵ�.

 @return ���� �� ����
 @ingroup Init
*/
void InitScoreBoard(void);

/**
 @brief �÷��̾� �ʱ�ȭ

 \ref player �� �ؽ��ĸ� �ҷ����� ��ġ�� �ʱ�ȭ�ϰ� ü���� 1�� �ʱ�ȭ�Ѵ�.
 �ؽ��Ĵ� gfx/Player.png�� ����ϰ� ��ġ�� ȭ���� �߾������� �Ѵ�.
 �� ��ü�� �ʺ�� ���̴� �ؽ��� ������ �������� \ref Draw ����� �Լ����� �ϰ�
 ����Ͽ� �ݿ��ϹǷ� ������ �������� �ʴ´�.

 @remark �������� \ref app �� \ref player �� �����Ѵ�.

 @return ���� �� ����
 @ingroup Init
*/
void InitPlayer(void);

/**
 @brief �Ѿ� �ʱ�ȭ

 \ref bullet �� �ؽ��ĸ� �ҷ����� ������ ��ҷ� ��ġ�� �����ϰ� \ref player ����
 ������ ����Ѵ�. �ؽ��Ĵ� gfx/Bullet.png�� ����Ѵ�.
 �� ��ü�� �ʺ�� ���̴� �ؽ��� ������ �������� \ref Draw ����� �Լ����� �ϰ�
 ����Ͽ� �ݿ��ϹǷ� ������ �������� �ʴ´�.

 @remark �������� \ref bullet , \ref app �� �����Ѵ�.

 @return ���� �� ����
 @ingroup Init
*/
void InitBullet(void);

/**
 @brief ���ӿ��� ȭ�� �ʱ�ȭ (�ؽ���, ��ġ)

 \ref game_over �� �ؽ��ĸ� �ҷ��´�. \ref game_over �� �ؽ��Ĵ� ȭ�� ��ü
 ũ��� �����ϹǷ� ��ġ�� (0, 0)���� �����Ѵ�.
 �� ��ü�� �ʺ�� ���̴� �ؽ��� ������ �������� \ref Draw ����� �Լ����� �ϰ�
 ����Ͽ� �ݿ��ϹǷ� ������ �������� �ʴ´�.

 @remark �������� \ref game_over , \ref app �� �����Ѵ�.

 @return ���� �� ����
 @ingroup Init
*/
void InitGameOver(void);

#endif
