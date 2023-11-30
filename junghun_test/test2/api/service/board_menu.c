#include "../../ui/console/user_keyboard_input.h"

void select_board_menu()
{
    char select_board_menu_keyboard_input[MAX_USER_KEYBOARD_INPUT] = { 0 };
    
    char title_output_message[MAX_OUTPUT_MESSAGE] = {
        "0번. 게시물 조회\n"
        "1번. 게시물 작성\n"
        "2번. 게시물 삭제\n"
        "3번. 게시물 읽기\n"
        "4번. 게시물 수정\n"
        "5번. 프로그램 종료\n"
        "메뉴를 선택하세요. : "
    };
    get_user_keyboard_input_with_message(title_output_message, select_board_menu_keyboard_input);
}