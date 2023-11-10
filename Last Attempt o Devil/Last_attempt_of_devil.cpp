#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
char only_use_in_level_3 = '2';
char quit_checker = 'X';
int enemy_one_health = 20;
int enemy_two_health = 20;
int enemy_three_health = 20;
int health_of_devil = 50;
int health_of_morodo = 50;
int immoral_power = 0;
int time = 0;
int mordor_sol_health[6] = {50, 50, 50, 50, 50, 50};
int devils_sol_health[7] = {50, 50, 50, 50, 50, 50, 50};
// MONORODO OBJECTS
int bulletX_left_2[100];
int bulletY_left_2[100];
int bulletX_right_2[100];
int bulletY_right_2[100];
int bulletCount_left_2 = 0;
int bulletCount_right_2 = 0;
// DEVIL OBJECTS
int bulletX_left[100];
int bulletY_left[100];
int bulletX_right[100];
int bulletY_right[100];
int bulletCount_left = 0;
int bulletCount_right = 0;
// VAN OBJECTS
int bulletX_left_van[100];
int bulletY_left_van[100];
int bulletX_right_van[100];
int bulletY_right_van[100];
int bulletCount_left_van = 0;
int bulletCount_right_van = 0;
// VAN 2 OBJECTS
int bulletX_left_van_2[100];
int bulletY_left_van_2[100];
int bulletX_right_van_2[100];
int bulletY_right_van_2[100];
int bulletCount_left_van_2 = 0;
int bulletCount_right_van_2 = 0;
// POLICE ROBOT
int bulletX_right_robot_2[100];
int bulletY_right_robot_2[100];
int bulletCount_right_robot_2 = 0;

// Intail Phase
void printMaze();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
int selector();
void score_level_2(int a1d[3], int a2d[3], int a3d[3], int a1m[3], int a2m[3], int a3m[3]);
void view_list_level_1();
void devil_lose_page();
void end_page();
void printMaze_level_2();
void things_in_lad_reused();
// Enemy Fire
void generate_fire(int axis[2], string direction);
void print_bullet_right_enemy(int x, int y);
void print_bullet_left_enemy(int x, int y);
void remove_bullet_from_enemy_array_right(int index);
void remove_bullet_from_enemy_array_left(int index);
void remove_bullet_from_enemy_array_right_2(int index);
void remove_bullet_from_enemy_array_left_2(int index);
void move_van_fire_right();
void move_van_fire_left();
void generate_enemy_bullet_left(int arr[2]);
void generate_enemy_bullet_right(int arr[2]);
void move_van_fire_right_2();
void move_van_fire_left_2();
void generate_enemy_bullet_left_2(int arr[2]);
void generate_enemy_bullet_right_2(int arr[2]);
void check_fire_direction_2(string direction);
void check_fire_direction(string direction);
void devil_fire_mover();
void move_robot_fire_right();
void remove_bullet_from_enemy_array_right_3(int index);
void generate_enemy_bullet_right_3(int arr[2]);
// moving Platform
void erase_line(int arr[2]);
string move_line_up_down(int arr[2], string line_direction, int devil_axis[2]);
void print_up_downer(int arr[2]);
// bullet
void front_page();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void move_fire_left();
void move_fire_right();
void generate_fire_left(int arr[2]);
void generate_fire_right(int arr[2]);
void remove_fire_from_array_right(int index);
void remove_fire_from_array_left(int index);
//Levels
bool level_one();
bool level_two();
bool level_three();
//
void instructions_lad();
int selecting_function(int x, int y);
void slecter_horizantel_line(int x, int y);
void levels_select_printer();
void rod_remover();
void remove_first_phase_line();
void vertical_lines();
void health_devil_mordor_soldiers();
int mordor_all_soldiers(int devils_axis_level_3[2], int mordor_soldier_1[3], int mordor_soldier_2[3], int mordor_soldier_3[3], int mordor_soldier_4[3], int mordor_soldier_5[3], int mordor_soldier_6[3]);
int devil_all_soldiers(int mordor_axis_level_3[2], int devil_soldier_1[3], int devil_soldier_2[3], int devil_soldier_3[3], int devil_soldier_4[3], int devil_soldier_5[3], int devil_soldier_6[3], int devil_soldier_7[3]);
int smartly_move_soldiers(int arr[2], int soldiers[3]);
int mordor_soldiers_smart(int arr[2], int soldiers[3]);
void devils_soldiers(int arr[3]);
void mordor_soldiers(int arr[3]);
int smartly_move(int arr[2], int soldiers[3]);
int devils_soldiers_smart(int arr[2], int soldiers[3]);
void printMaze_last_level();
void mordor_soldiers(int arr[3]);
void devils_soldiers(int arr[3]);
void line_in_center(string line);
char erase_question();
char question_in_up(string line);
char question_in_center(string line);
int right_left_sides(int arr[3], int x);
int up_down_sides(int arr[3], int x);
int smartly_move(int arr[2], int angel[3]);
void erase_five_character(int arr[3]);
void print_angel_character(int arr[3]);
void printBullet_monorodo(int x, int y);
void morodo_fire_mover();
void generate_fire_2(int axis[2], string direction);
void move_fire_right_2();
void move_fire_left_2();
void remove_fire_from_array_left_2(int index);
void remove_fire_from_array_right_2(int index);
void generate_fire_left_2(int arr[2]);
void generate_fire_right_2(int arr[2]);
int gravity(int arr[2], string direction);
void print_devil_up(int arr[2]);
void print_devil_down(int arr[2]);
void print_devil_right(int arr[2]);
void print_devil_left(int arr[2]);
void erase_three_character_row(int arr[2]);
void erase_two_rows_character(int arr[2]);
int character_move_left(int arr[2]);
int character_move_right(int arr[2]);
int character_move_up(int arr[2]);
int character_move_down(int arr[2]);
void print_polive_van_right(int arr[2]); // Police Van Start
void print_polive_van_left(int arr[2]);
string police_van_move_left_right(int arr[2], string police_van_direction, int code);
bool to_check_any_side_of_character_two(char nextLocation, char nextLocation1);
bool to_check_any_side(char nextLocation, char nextLocation1, char nextLocation2);
void key_printer();
int imoral_power_1();
int imoral_power_2();
int imoral_power_3();
void print_police_robot(int arr[2]);
string move_robot_up_down(int arr[2], string police_robot_direction);
bool to_check_any_side_of_character_five(char nextLocation, char nextLocation1, char nextLocation2, char nextLocation3, char nextLocation4, char nextLocation5, char nextLocation6, char nextLocation7, char nextLocation8);
void print_police_robot(int arr[2]);
char character_by_user;
main()
{
    int main_option;

    front_page();
start_of_devil_game:
    bool check_level_one = true;
    bool check_level_two = true;
    bool check_level_three = true;
    quit_checker = 'X';
    things_in_lad_reused();
    main_option = selector();
    if (main_option == 1)
    {
    check_level_one = level_one();
    goto start_of_devil_game;
    }
    else if (main_option == 2)
    {
    check_level_two = level_two();
    goto start_of_devil_game;
    }
    else if (main_option == 3)
    {
    check_level_three = level_three();
    goto start_of_devil_game;
    }
    
}
// Level One
bool level_one()
{
        enemy_one_health = 20;
        enemy_two_health = 20;
        enemy_three_health = 20;
        health_of_devil = 50;
        immoral_power = 0;
        int code_1 = 1, code_2 = 2; // For selecting health of enemy in function (use as parameter)
        int devil_axis[2] = {8, 6};
        int police_van_axis[2] = {58, 16};
        int police_van_no_2_axis[2] = {58, 30};
        int police_robot_axis[2] = {10, 30};
        int line_no_1_axis[2] = {20, 35};
        int enemy_three_health = 20;
        string devil_direction = "right";
        string police_van_direction = "right";
        string police_van_no_2_direction = "left";
        string police_robot_direction = "up";
        string bridge_direction = "up";
        int van_time = 0, robot_timer = 0, bridge_timer = 0;
        int activate_devil_bullet = 0, activate_attack_by_sides = 0, activate_angel = 0, gravity_timer = 0, time_scoreer = 0, bullet_timer = 0;
        int terminator;
        printMaze();
        key_printer();
        bool gameRunning = true;
        first_while:
        while (gameRunning)
        {

            view_list_level_1();
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                quit_checker = question_in_up("IS YOU WANT TO QUIT (Y/N)");
                if (quit_checker == 'y' || quit_checker == 'Y')
                {
                    return true;
                }
                else
                {
                    erase_question();
                    goto first_while;
                }
            }
            if (GetAsyncKeyState(VK_LEFT))
            {
                terminator = character_move_left(devil_axis);
                devil_direction = "left";
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                terminator = character_move_right(devil_axis);
                devil_direction = "right";
            }
            if (GetAsyncKeyState(VK_UP))
            {
                terminator = character_move_up(devil_axis);
                devil_direction = "up";
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                terminator = character_move_down(devil_axis);
                devil_direction = "down";
            }
            if (GetAsyncKeyState(VK_SPACE) && activate_devil_bullet == 1)
            {
                generate_fire(devil_axis, devil_direction);
            }
            if (immoral_power > 0)
            {
                activate_devil_bullet = imoral_power_1();
                activate_attack_by_sides = imoral_power_2();
                activate_angel = imoral_power_3();
                if (activate_angel == 1)
                {
                    immoral_power = 4;
                }
            }
            if (van_time == 3)
            {
                if (enemy_one_health > 0)
                {
                    police_van_direction = police_van_move_left_right(police_van_axis, police_van_direction, code_1);
                }
                else
                {
                    erase_two_rows_character(police_van_axis);
                }
                if (enemy_two_health > 0)
                {
                    police_van_no_2_direction = police_van_move_left_right(police_van_no_2_axis, police_van_no_2_direction, code_2);
                }
                else
                {
                    erase_two_rows_character(police_van_no_2_axis);
                }

                van_time = 0;
            }
            if (robot_timer == 3 && enemy_three_health > 0)
            {
                police_robot_direction = move_robot_up_down(police_robot_axis, police_robot_direction);
                robot_timer = 0;
            }
            if (bridge_timer == 3)
            {
                bridge_direction = move_line_up_down(line_no_1_axis, bridge_direction, devil_axis);
                bridge_timer = 0;
            }
            if (bullet_timer == 3)
            {
                if ((police_van_direction == "right" && (devil_axis[0] - police_van_axis[0] > 0)) && ((devil_axis[1] - police_van_axis[1] == 0) || (devil_axis[1] - police_van_axis[1] == -1) || (devil_axis[1] - police_van_axis[1] == -2)))
                {
                    generate_enemy_bullet_right(police_van_axis);
                }
                else if ((police_van_direction == "left" && (devil_axis[0] - police_van_axis[0] < 0) && ((devil_axis[1] - police_van_axis[1] == 0) || (devil_axis[1] - police_van_axis[1] == 1) || (devil_axis[1] - police_van_axis[1] == 2))))
                {
                    generate_enemy_bullet_left(police_van_axis);
                }
                if ((police_van_no_2_direction == "right" && (devil_axis[0] - police_van_no_2_axis[0] > 0)) && ((devil_axis[1] - police_van_no_2_axis[1] == 0) || (devil_axis[1] - police_van_no_2_axis[1] == -1) || (devil_axis[1] - police_van_no_2_axis[1] == -2)))
                {
                    generate_enemy_bullet_right(police_van_no_2_axis);
                }
                else if ((police_van_no_2_direction == "left" && (devil_axis[0] - police_van_no_2_axis[0] < 0) && ((devil_axis[1] - police_van_no_2_axis[1] == 0) || (devil_axis[1] - police_van_no_2_axis[1] == 1) || (devil_axis[1] - police_van_no_2_axis[1] == 2))))
                {
                    generate_enemy_bullet_left(police_van_no_2_axis);
                }
                // Bullet of Robot
                if (devil_axis[0] < 60 && ((devil_axis[0] - police_robot_axis[0] > 0) && ((devil_axis[1] - police_robot_axis[1] == 0) || (devil_axis[1] - police_robot_axis[1] == 1) || (devil_axis[1] - police_robot_axis[1] == -1))))
                {
                    generate_enemy_bullet_right_3(police_robot_axis);
                }
                bullet_timer = 0;
            }

            check_fire_direction(police_van_direction);
            check_fire_direction_2(police_van_no_2_direction);
            move_robot_fire_right();
            devil_fire_mover();
            time_scoreer++;
            robot_timer++;
            van_time++;
            bridge_timer++;
            gravity_timer++;
            bullet_timer++;
            Sleep(20);
            if (terminator == 88 && immoral_power == 4)
            {
                end_page();
                return true;
            }
            if (health_of_devil == 0)
            {
                devil_lose_page();
                return false;
            }
        }
    return true;
    
    
}
// Level TWO
bool level_two()
{
    
        int code_1 = 1, code_2 = 2; // For selecting health of enemy in function (use as parameter)
        int devil_axis[2] = {8, 6};
        int mordor_axis[2] = {8, 36};
        int angel_1M[3] = {50, 26, 50};
        int angel_2M[3] = {88, 36, 50};
        int angel_3M[3] = {10, 29, 50};
        int angel_1D[3] = {50, 8, 50};
        int angel_2D[3] = {88, 16, 50};
        int angel_3D[3] = {108, 9, 50};
        int line_no_1_axis[2] = {20, 35};
        string devil_direction = "right";
        string devil_direction_2 = "right";
        int terminator;
        int terminator_1;
        int smarty_time_count = 0;
        before_second_while:
        printMaze_level_2();
        bool gameRunning = true;
        while (gameRunning)
        {
            score_level_2(angel_1D, angel_2D, angel_3D, angel_1M, angel_2M, angel_3M);
            if ((angel_1D <= 0 && angel_2D <= 0 && angel_3D <= 0 && health_of_devil > 0) || health_of_morodo <= 0)
            {
                line_in_center("DEVIL WIN THE WARS");
                Sleep(1500);
                return true;
            }
            if ((angel_1M <= 0 && angel_2M <= 0 && angel_3M <= 0 && health_of_morodo > 0) || health_of_devil <= 0)
            {
                line_in_center("MORDOR WIN THE WARS");
                Sleep(1500);
                return true;
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                quit_checker = question_in_center("IS YOU REALY WANT TO QUIT (Y/N)");
                if (quit_checker == 'y' || quit_checker == 'Y')
                {
                    quit_checker = 'X';
                    return true;
                }
                else
                {
                    goto before_second_while;
                }
            }
            if (GetAsyncKeyState(VK_LEFT))
            {
                terminator = character_move_left(devil_axis);
                devil_direction = "left";
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                terminator = character_move_right(devil_axis);
                devil_direction = "right";
            }
            if (GetAsyncKeyState(VK_UP))
            {
                terminator = character_move_up(devil_axis);
                devil_direction = "up";
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                terminator = character_move_down(devil_axis);
                devil_direction = "down";
            }
            if (GetAsyncKeyState(VK_SPACE))
            {
                generate_fire(devil_axis, devil_direction);
            }
            // MORDOR
            if (GetAsyncKeyState(0x41))
            {
                terminator_1 = character_move_left(mordor_axis);
                devil_direction_2 = "left";
            }
            if (GetAsyncKeyState(0x44))
            {
                terminator_1 = character_move_right(mordor_axis);
                devil_direction_2 = "right";
            }
            if (GetAsyncKeyState(0x57))
            {
                terminator_1 = character_move_up(mordor_axis);
                devil_direction_2 = "up";
            }
            if (GetAsyncKeyState(0x53))
            {
                terminator_1 = character_move_down(mordor_axis);
                devil_direction_2 = "down";
            }
            if (GetAsyncKeyState(0x46))
            {
                generate_fire_2(mordor_axis, devil_direction_2);
            }
            if (smarty_time_count == 3)
            {
                if (angel_1D[2] > 0)
                {
                    smartly_move(devil_axis, angel_1D);
                }
                else if (angel_1D[2] == 0)
                {
                    erase_five_character(angel_1D);
                }
                if (angel_1M[2] > 0)
                {
                    smartly_move(mordor_axis, angel_1M);
                }
                else if (angel_1M[2] == 0)
                {
                    erase_five_character(angel_1M);
                }
                if (angel_2D[2] > 0)
                {
                    smartly_move(devil_axis, angel_2D);
                }
                else if (angel_2D[2] == 0)
                {
                    erase_five_character(angel_2D);
                }
                if (angel_2M[2] > 0)
                {
                    smartly_move(mordor_axis, angel_2M);
                }
                else if (angel_2M[2] == 0)
                {
                    erase_five_character(angel_2M);
                }
                if (angel_3D[2] > 0)
                {
                    smartly_move(devil_axis, angel_3D);
                }
                else if (angel_3D[2] == 0)
                {
                    erase_five_character(angel_3D);
                }
                if (angel_3M[2] > 0)
                {
                    smartly_move(mordor_axis, angel_3M);
                }
                else if (angel_3M[2] == 0)
                {
                    erase_five_character(angel_3M);
                }
                smarty_time_count = 0;
            }
            smarty_time_count++;
            devil_fire_mover();
            morodo_fire_mover();
            Sleep(50);
        }
    return true;
    
}
// Level Three
bool level_three()
{
    
        only_use_in_level_3 = '3';
        int devil_axis_level_3[2] = {35, 18};
        int mordor_axis_level_3[2] = {70, 18};
        int devil_soldier_1[3] = {9, 4, 50};
        int devil_soldier_2[3] = {9, 9, 50};
        int devil_soldier_3[3] = {9, 14, 50};
        int devil_soldier_4[3] = {9, 19, 50};
        int devil_soldier_5[3] = {9, 23, 50};
        int devil_soldier_6[3] = {9, 28, 50};
        int devil_soldier_7[3] = {9, 33, 50};
        int mordor_soldier_1[3] = {158, 7, 50};
        int mordor_soldier_2[3] = {158, 12, 50};
        int mordor_soldier_3[3] = {158, 17, 50};
        int mordor_soldier_4[3] = {158, 22, 50};
        int mordor_soldier_5[3] = {158, 27, 50};
        int mordor_soldier_6[3] = {158, 32, 50};
        string devil_direction_3 = "right";
        string mordor_direction_3 = "right";
        int terminator_devil;
        int terminator_1_mordor;
        int smarty_time_count = 0;
        int time_increaser = 0;
    before_third_while:
        printMaze_last_level();
        vertical_lines();
        bool gameRunning = true;
        while (gameRunning)
        {
            health_devil_mordor_soldiers();
            if ((health_of_devil > 0) && health_of_morodo <= 0)
            {
                line_in_center("DEVIL WIN THE WARS");
                Sleep(1500);
                return true;
            }
            if (health_of_morodo > 0 && health_of_devil <= 0)
            {
                line_in_center("MORDOR WIN THE WARS");
                Sleep(1500);
                return true;
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                quit_checker = question_in_center("IS YOU REALY WANT TO QUIT (Y/N)");
                if (quit_checker == 'y' || quit_checker == 'Y')
                {
                    quit_checker = 'X';
                    return true;
                }
                else
                {
                    goto before_third_while;
                }
            }
            if (GetAsyncKeyState(VK_LEFT))
            {
                terminator_devil = character_move_left(devil_axis_level_3);
                devil_direction_3 = "left";
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                terminator_devil = character_move_right(devil_axis_level_3);
                devil_direction_3 = "right";
            }
            if (GetAsyncKeyState(VK_UP))
            {
                terminator_devil = character_move_up(devil_axis_level_3);
                devil_direction_3 = "up";
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                terminator_devil = character_move_down(devil_axis_level_3);
                devil_direction_3 = "down";
            }
            if (GetAsyncKeyState(VK_SPACE))
            {
                generate_fire(devil_axis_level_3, devil_direction_3);
            }
            // MORDOR
            if (GetAsyncKeyState(0x41))
            {
                terminator_1_mordor = character_move_left(mordor_axis_level_3);
                mordor_direction_3 = "left";
            }
            if (GetAsyncKeyState(0x44))
            {
                terminator_1_mordor = character_move_right(mordor_axis_level_3);
                mordor_direction_3 = "right";
            }
            if (GetAsyncKeyState(0x57))
            {
                terminator_1_mordor = character_move_up(mordor_axis_level_3);
                mordor_direction_3 = "up";
            }
            if (GetAsyncKeyState(0x53))
            {
                terminator_1_mordor = character_move_down(mordor_axis_level_3);
                mordor_direction_3 = "down";
            }
            if (GetAsyncKeyState(0x46))
            {
                generate_fire_2(mordor_axis_level_3, mordor_direction_3);
            }
            if (smarty_time_count == 5)
            {
                devil_all_soldiers(mordor_axis_level_3, devil_soldier_1, devil_soldier_2, devil_soldier_3, devil_soldier_4, devil_soldier_5, devil_soldier_6, devil_soldier_7);
                mordor_all_soldiers(devil_axis_level_3, mordor_soldier_1, mordor_soldier_2, mordor_soldier_3, mordor_soldier_4, mordor_soldier_5, mordor_soldier_6);
                smarty_time_count = 0;
            }
            if (time_increaser == 20)
            {
                time++;
                time_increaser = 0;
            }
            rod_remover();
            time_increaser++;
            smarty_time_count++;
            devil_fire_mover();
            morodo_fire_mover();
            Sleep(50);
        }
    return false;

}

// Print Bullet
void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << "+";
}
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void move_fire_left()
{
    for (int x = 0; x < bulletCount_left; x++)
    {
        char next = getCharAtxy(bulletX_left[x] - 1, bulletY_left[x]);
        char next1 = getCharAtxy(bulletX_left[x] - 1, bulletY_left[x]);
        if (next != ' ')
        {
            eraseBullet(bulletX_left[x], bulletY_left[x]);
            remove_fire_from_array_left(x);
        }
        else
        {
            eraseBullet(bulletX_left[x], bulletY_left[x]);
            bulletX_left[x] = bulletX_left[x] - 1;
            printBullet(bulletX_left[x], bulletY_left[x]);
        }
        if (only_use_in_level_3 == '3' && (next == '<' || next == '>' || next == '\\' || next == '/' || next == 'Y'))
        {
            health_of_morodo = health_of_morodo - 5;
        }
    }
}
// Move devil fires
void move_fire_right()
{
    for (int x = 0; x < bulletCount_right; x++)
    {
        char next = getCharAtxy(bulletX_right[x] + 1, bulletY_right[x]);
        char next1 = getCharAtxy(bulletX_right[x] + 1, bulletY_right[x]);
        if (next != ' ')
        {
            eraseBullet(bulletX_right[x], bulletY_right[x]);
            remove_fire_from_array_right(x);
        }
        else
        {
            eraseBullet(bulletX_right[x], bulletY_right[x]);
            bulletX_right[x] = bulletX_right[x] + 1;
            printBullet(bulletX_right[x], bulletY_right[x]);
        }
        if (only_use_in_level_3 == '3' && (next == '<' || next == '>' || next == '\\' || next == '/' || next == 'Y'))
        {
            health_of_morodo = health_of_morodo - 5;
        }
    }
}
// monorodo
void move_fire_left_2()
{
    for (int x = 0; x < bulletCount_left_2; x++)
    {
        char next = getCharAtxy(bulletX_left_2[x] - 1, bulletY_left_2[x]);
        char next1 = getCharAtxy(bulletX_left_2[x] - 1, bulletY_left_2[x]);
        if (next != ' ')
        {
            eraseBullet(bulletX_left_2[x], bulletY_left_2[x]);
            remove_fire_from_array_left_2(x);
        }
        else
        {
            eraseBullet(bulletX_left_2[x], bulletY_left_2[x]);
            bulletX_left_2[x] = bulletX_left_2[x] - 1;
            printBullet_monorodo(bulletX_left_2[x], bulletY_left_2[x]);
        }
        if (only_use_in_level_3 == '3' && (next == '<' || next == '>' || next == '\\' || next == '/' || next == 'Y'))
        {
            health_of_devil = health_of_devil - 5;
        }
    }
}
// Move devil fires
void move_fire_right_2()
{
    for (int x = 0; x < bulletCount_right_2; x++)
    {
        char next = getCharAtxy(bulletX_right_2[x] + 1, bulletY_right_2[x]);
        char next1 = getCharAtxy(bulletX_right_2[x] + 1, bulletY_right_2[x]);
        if (next != ' ')
        {
            eraseBullet(bulletX_right_2[x], bulletY_right_2[x]);
            remove_fire_from_array_right_2(x);
        }
        else
        {
            eraseBullet(bulletX_right_2[x], bulletY_right_2[x]);
            bulletX_right_2[x] = bulletX_right_2[x] + 1;
            printBullet_monorodo(bulletX_right_2[x], bulletY_right_2[x]);
        }
        if (only_use_in_level_3 == '3' && (next == '<' || next == '>' || next == '\\' || next == '/' || next == 'Y'))
        {
            health_of_devil = health_of_devil - 5;
        }
    }
}
// Print Monorodo Bullet
void printBullet_monorodo(int x, int y)
{
    gotoxy(x, y);
    cout << "X";
}
// fire Generate lEFT rIGHT
void generate_fire_right(int arr[2])
{
    bulletX_right[bulletCount_right] = arr[0] + 4;
    bulletY_right[bulletCount_right] = arr[1] + 1;
    gotoxy(arr[0] + 4, arr[1] + 1);
    cout << "+";
    bulletCount_right++;
}
void generate_fire_left(int arr[2])
{
    bulletX_left[bulletCount_left] = arr[0] - 1;
    bulletY_left[bulletCount_left] = arr[1] + 1;
    gotoxy(arr[0] - 1, arr[1] + 1);
    cout << "+";
    bulletCount_left++;
}
// fire Generate 2
void generate_fire_right_2(int arr[2])
{
    bulletX_right_2[bulletCount_right_2] = arr[0] + 4;
    bulletY_right_2[bulletCount_right_2] = arr[1] + 1;
    gotoxy(arr[0] + 4, arr[1] + 1);
    cout << "X";
    bulletCount_right_2++;
}
void generate_fire_left_2(int arr[2])
{
    bulletX_left_2[bulletCount_left_2] = arr[0] - 1;
    bulletY_left_2[bulletCount_left_2] = arr[1] + 1;
    gotoxy(arr[0] - 1, arr[1] + 1);
    cout << "X";
    bulletCount_left_2++;
}
void remove_fire_from_array_left_2(int index)
{
    for (int x = index; x < bulletCount_left_2 - 1; x++)
    {
        bulletX_left_2[x] = bulletX_left_2[x + 1];
        bulletY_left_2[x] = bulletY_left_2[x + 1];
    }
    bulletCount_left_2--;
}

void remove_fire_from_array_right_2(int index)
{
    for (int x = index; x < bulletCount_right_2 - 1; x++)
    {
        bulletX_right_2[x] = bulletX_right_2[x + 1];
        bulletY_right_2[x] = bulletY_right_2[x + 1];
    }
    bulletCount_right_2--;
}

void remove_fire_from_array_left(int index)
{
    for (int x = index; x < bulletCount_left - 1; x++)
    {
        bulletX_left[x] = bulletX_left[x + 1];
        bulletY_left[x] = bulletY_left[x + 1];
    }
    bulletCount_left--;
}

void remove_fire_from_array_right(int index)
{
    for (int x = index; x < bulletCount_right - 1; x++)
    {
        bulletX_right[x] = bulletX_right[x + 1];
        bulletY_right[x] = bulletY_right[x + 1];
    }
    bulletCount_right--;
}

// Bullet Working
// Power reaction Function
int imoral_power_1()
{
    if (immoral_power == 1)
    {
        for (int i = 4; i < 8; i++)
        {
            for (int j = 122; j < 123; j++)
            {
                gotoxy(j, i);
                cout << " ";
            }
        }
        return 1;
    }
}
// Imoral 2 Power
int imoral_power_2()
{
    if (immoral_power == 2)
    {
        for (int i = 152; i < 165; i++)
        {
            for (int j = 35; j < 36; j++)
            {
                gotoxy(i, j);
                cout << " ";
            }
        }
        return 1;
    }
    return 0;
}
// Imoral 3 Power
int imoral_power_3()
{
    if (immoral_power == 3)
    {
        gotoxy(152, 18);
        cout << ":::::";
        gotoxy(152, 19);
        cout << "::Y::";
        gotoxy(152, 20);
        cout << ":::::";

        return 1;
    }
    return 0;
}
// Print Maze
void printMaze()
{
    system("cls");
    cout << endl
         << endl
         << endl;
    cout << "\33[35m"
         << "     |#################################################################################################################################################################||  " << endl;
    cout << "     |##                                                                                                                  #                                          ##||  " << endl;
    cout << "     |##                                                                                                                  #                                          ##||  " << endl;
    cout << "     |##                                                                                                                  #                                          ##||  " << endl;
    cout << "     |##                                                                                                                  #                                          ##||  " << endl;
    cout << "     |##                               #########                                                                      #########                                      ##||  " << endl;
    cout << "     |##                               #      >>                                                                      #########                                      ##||  " << endl;
    cout << "     |##                               #########                                                                      #########                                      ##||  " << endl;
    cout << "     |##############        ###############################################################          ##################       #########################################||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                  ######                                                     ##################||  " << endl;
    cout << "     |##                                            #>=                                                                                  ####-                       ##||  " << endl;
    cout << "     |##                                            #>=                                                                                  ####-                       ##||  " << endl;
    cout << "     |##                         J                  #>=                                                                                  ####-                       ##||  " << endl;
    cout << "     |##                      #######               ##########################################################################################                       ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                          =----------------  ##||  " << endl;
    cout << "     |##                                                                                                                                          =----------------  ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "\33[35m"
         << "     |##                                     #######################                        ##################                                                       ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                          #############################################                         ############################################                 ##||  " << endl;
    cout << "     |##                          #                                                                                                       ##########                 ##||  " << endl;
    cout << "     |##                          #                                                                                                       ##########                 ##||  " << endl;
    cout << "     |##                          #                                                                                                       ##########        ###########||  " << endl;
    cout << "     |##                          # ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^##########                 ##||  " << endl;
    cout << "     |##                          ##################################################################################################################                 ##||  " << endl;
    cout << "     |##                                                                                                                                                ###############||  " << endl;
    cout << "     |##                                                                                                                                             ####            ##||  " << endl;
    cout << "\33[35m"
         << "     |##                                                                                                                                                #            ##||  " << endl;
    cout << "     |##                                                                                                                                 ##########     #            ##||  " << endl;
    cout << "     |##         #################-------------------------------------------------------------------------------------------------------##########     #            ##||  " << endl;
    cout << "     |#################################################################################################################################################################||  " << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
// UP and Stand Position of Devil
void print_devil_up(int arr[2])
{
    char devil_character[3][3] = {{'<', character_by_user, '>'}, {'/', 'Y', '\\'}, {'/', ' ', '\\'}};
    int devil_x = arr[0];
    int devil_y = arr[1];
    for (int i = 0; i < 3; i++)
    {
        gotoxy(devil_x, devil_y);
        for (int j = 0; j < 3; j++)
        {
            cout << "\33[31m" << devil_character[i][j];
        }
        devil_y++;
    }
}
// Down and Stand Position of Devil
void print_devil_down(int arr[2])
{
    char devil_character[3][3] = {{'<', character_by_user, '>'}, {'/', 'Y', '\\'}, {' ', char(247), ' '}};
    int devil_x = arr[0];
    int devil_y = arr[1];
    for (int i = 0; i < 3; i++)
    {
        gotoxy(devil_x, devil_y);
        for (int j = 0; j < 3; j++)
        {
            cout << "\33[31m" << devil_character[i][j];
        }
        devil_y++;
    }
}
// left and Stand Position of Devil
void print_devil_left(int arr[2])
{
    char devil_character[3][3] = {{'<', character_by_user, '>'}, {'\\', 'Y', '\\'}, {'\\', ' ', '\\'}};
    int devil_x = arr[0];
    int devil_y = arr[1];
    for (int i = 0; i < 3; i++)
    {
        gotoxy(devil_x, devil_y);
        for (int j = 0; j < 3; j++)
        {
            cout << "\33[31m" << devil_character[i][j];
        }
        devil_y++;
    }
}
// right and Stand Position of Devil
void print_devil_right(int arr[2])
{
    char devil_character[3][3] = {{'<', character_by_user, '>'}, {'/', 'Y', '/'}, {'/', ' ', '/'}};
    int devil_x = arr[0];
    int devil_y = arr[1];
    for (int i = 0; i < 3; i++)
    {
        gotoxy(devil_x, devil_y);
        for (int j = 0; j < 3; j++)
        {
            cout << "\33[31m" << devil_character[i][j];
        }
        devil_y++;
    }
}

// Erase Three Character Row
void erase_three_character_row(int arr[2])
{
    int erase_x = arr[0];
    int erase_y = arr[1];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            gotoxy(erase_x + j, erase_y + i);
            cout << " ";
        }
    }
}
// erase two Character
void erase_two_rows_character(int arr[2])
{

    int erase_x = arr[0];
    int erase_y = arr[1];
    for (int i = 0; i < 2; i++)
    {
        gotoxy(erase_x, erase_y);
        for (int j = 0; j < 3; j++)
        {
            cout << " ";
        }
        erase_y++;
    }
}
// Move Lefts
int character_move_left(int arr[2])
{
    char nextLocation = getCharAtxy(arr[0] - 1, arr[1]);
    char nextLocation1 = getCharAtxy(arr[0] - 1, arr[1] + 1);
    char nextLocation2 = getCharAtxy(arr[0] - 1, arr[1] + 2);
    if (to_check_any_side(nextLocation, nextLocation1, nextLocation2))
    {
        erase_three_character_row(arr);
        arr[0] = arr[0] - 1;
        print_devil_left(arr);
    }
    if (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157))
    {
        immoral_power++;
    }
    if (nextLocation == '*' || nextLocation1 == '*' || nextLocation2 == '*')
    {
        health_of_devil--;
    }
    if (nextLocation == 'Y' || nextLocation1 == 'Y' || nextLocation2 == 'Y')
    {
        return 88;
    }

    return arr[0];
}
// Moce Character Right
int character_move_right(int arr[2])
{
    char nextLocation = getCharAtxy(arr[0] + 3, arr[1]);
    char nextLocation1 = getCharAtxy(arr[0] + 3, arr[1] + 1);
    char nextLocation2 = getCharAtxy(arr[0] + 3, arr[1] + 2);
    
    char next = getCharAtxy(arr[0] - 1, arr[1]);
    char next1 = getCharAtxy(arr[0] - 1, arr[1] + 1);
    char next2 = getCharAtxy(arr[0] - 1, arr[1] + 2);
    if (to_check_any_side(nextLocation, nextLocation1, nextLocation2))
    {
        erase_three_character_row(arr);
        arr[0] = arr[0] + 1;
        print_devil_right(arr);
    }

    if (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157))
    {
        immoral_power++;
    }
    if (nextLocation == '*' || nextLocation1 == '*' || nextLocation2 == '*' || next == '*' || next1 == '*' || next2 == '*')
    {
        health_of_devil--;
    }
    if (nextLocation == 'Y' || nextLocation1 == 'Y' || nextLocation2 == 'Y')
    {
        return 88;
    }
    return arr[0];
}
// Moce Character Up
int character_move_up(int arr[2])
{
    char nextLocation = getCharAtxy(arr[0], arr[1] - 1);
    char nextLocation1 = getCharAtxy(arr[0] + 1, arr[1] - 1);
    char nextLocation2 = getCharAtxy(arr[0] + 2, arr[1] - 1);
    
    char next = getCharAtxy(arr[0] - 1, arr[1]);
    char next1 = getCharAtxy(arr[0] - 1, arr[1] + 1);
    char next2 = getCharAtxy(arr[0] - 1, arr[1] + 2);
    // char nextLocation3 = getCharAtxy(arr[0] + 3, arr[1]);
    // char nextLocation4 = getCharAtxy(arr[0] + 3, arr[1] + 1);
    // char nextLocation5 = getCharAtxy(arr[0] + 3, arr[1] + 2);
    // char nextLocation6 = getCharAtxy(arr[0]  , arr[1] - 1);
    // char nextLocation7 = getCharAtxy(arr[0] + 1, arr[1] - 1);
    // char nextLocation8 = getCharAtxy(arr[0] + 2, arr[1] - 1);

    if (to_check_any_side(nextLocation, nextLocation1, nextLocation2))
    {
        erase_three_character_row(arr);
        arr[1] = arr[1] - 1;
        print_devil_up(arr);
    }
    if (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157))
    {
        immoral_power++;
    }
    if (nextLocation == '*' || nextLocation1 == '*' || nextLocation2 == '*' || next == '*' || next1 == '*' || next2 == '*')
    {
        health_of_devil--;
    }
    if (nextLocation == 'Y' || nextLocation1 == 'Y' || nextLocation2 == 'Y')
    {
        return 88;
    }
    return arr[0];
}
// Move Character Down
int character_move_down(int arr[2])
{
    char nextLocation = getCharAtxy(arr[0], arr[1] + 3);
    char nextLocation1 = getCharAtxy(arr[0] + 1, arr[1] + 3);
    char nextLocation2 = getCharAtxy(arr[0] + 2, arr[1] + 3);
    
    char nextz = getCharAtxy(arr[0] - 1, arr[1]);
    char next1 = getCharAtxy(arr[0] - 1, arr[1] + 1);
    char next2 = getCharAtxy(arr[0] - 1, arr[1] + 2);
    char next = getCharAtxy(arr[0] + 2, arr[1] + 3);
    if (to_check_any_side(nextLocation, nextLocation1, nextLocation2))
    {
        erase_three_character_row(arr);
        arr[1] = arr[1] + 1;
        print_devil_down(arr);
    }
    if (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157))
    {
        immoral_power++;
    }
    if (nextLocation == '*' || nextLocation1 == '*' || nextLocation2 == '*' || nextz == '*' || next1 == '*' || next2 == '*')
    {
        health_of_devil--;
    }
    if (nextLocation == 'Y' || nextLocation1 == 'Y' || nextLocation2 == 'Y')
    {
        return 88;
    }

    return arr[0];
}

// Police Van Direction
void print_polive_van_right(int arr[2])
{
    int van_x = arr[0];
    int van_y = arr[1];
    char police_van[3][3] = {{char(220), char(220), '>'}, {char(220), char(220), '>'}, {'0', '0', ' '}};
    for (int i = 0; i < 3; i++)
    {
        gotoxy(van_x, van_y + i);
        for (int j = 0; j < 3; j++)
        {
            cout << "\33[34m" << police_van[i][j];
        }
    }
}
// Left side van
void print_polive_van_left(int arr[2])
{
    int van_x = arr[0];
    int van_y = arr[1];
    char police_van[3][3] = {{'<', char(220), char(220)}, {'<', char(220), char(220)}, {' ', '0', '0'}};
    for (int i = 0; i < 3; i++)
    {
        gotoxy(van_x, van_y + i);
        for (int j = 0; j < 3; j++)
        {
            cout << "\33[34m" << police_van[i][j];
        }
    }
}
// Police_van_move_left_right
string police_van_move_left_right(int arr[2], string police_van_direction, int code)
{
    if (police_van_direction == "right")
    {
        char nextLocation = getCharAtxy(arr[0] + 3, arr[1]);
        char nextLocation1 = getCharAtxy(arr[0] + 3, arr[1] + 1);
        char nextLocation2 = getCharAtxy(arr[0] + 3, arr[1] + 2);

        if ((to_check_any_side_of_character_two(nextLocation, nextLocation1)))
        {
            health_of_devil--;
        }
        else if (nextLocation == '+' || nextLocation1 == '+' || nextLocation2 == '+')
        {
            if (code == 1)
            {
                enemy_one_health--;
            }
            else if (code == 2)
            {
                enemy_two_health--;
            }
        }
        else
        {
            if ((nextLocation != char(157) && nextLocation1 != char(157) && nextLocation2 != char(157)) && (nextLocation != '#' && nextLocation1 != '#' && nextLocation2 != '#') && (nextLocation != '=' && nextLocation1 != '=' && nextLocation2 != '=') && (nextLocation != '-' && nextLocation1 != '-' && nextLocation2 != '-'))
            {
                erase_three_character_row(arr);
                arr[0] = arr[0] + 1;
                print_polive_van_right(arr);
            }
            else if ((nextLocation == '#' || nextLocation1 == '#' || nextLocation2 == '#') || (nextLocation == '=' || nextLocation1 == '=' || nextLocation2 == '=') || (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157)))
            {
                police_van_direction = "left";
            }
        }
    }

    if (police_van_direction == "left")
    {

        char nextLocation1 = getCharAtxy(arr[0] - 1, arr[1]);
        char nextLocation = getCharAtxy(arr[0] - 1, arr[1] + 1);
        char nextLocation2 = getCharAtxy(arr[0] + 3, arr[1] + 2);
        if ((to_check_any_side_of_character_two(nextLocation, nextLocation1)))
        {
            health_of_devil--;
        }

        else if (nextLocation == '+' || nextLocation1 == '+' || nextLocation2 == '+')
        {

            if (code == 1)
            {
                enemy_one_health--;
            }
            else if (code == 2)
            {
                enemy_two_health--;
            }
        }
        else
        {
            if ((nextLocation != '#' && nextLocation1 != '#') && (nextLocation != '>' && nextLocation1 != '>') && (nextLocation != '-' && nextLocation1 != '-') && (nextLocation != '=' && nextLocation1 != '='))
            {
                erase_three_character_row(arr);
                arr[0] = arr[0] - 1;
                print_polive_van_left(arr);
            }
            else if ((nextLocation == '#' || nextLocation1 == '#' || nextLocation2 == '#') || (nextLocation == '=' || nextLocation1 == '=' || nextLocation2 == '=') || (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157)))
            {
                police_van_direction = "right";
            }
        }
    }
    return police_van_direction;
}
// Police Robot Print
void print_police_robot(int arr[2])
{
    int robo_x = arr[0];
    int robo_y = arr[1];
    char police_robot[3][3] = {{'^', char(154), ')'}, {char(198), char(178), char(228)}, {char(232), ' ', char(232)}};
    for (int i = 0; i < 3; i++)
    {
        gotoxy(robo_x, robo_y + i);
        for (int j = 0; j < 3; j++)
        {
            cout << "\33[32m" << police_robot[i][j];
        }
    }
}
// To Check Any side of for two next locations
bool to_check_any_side_of_character_two(char nextLocation, char nextLocation1)
{
    char character_by_devil[7] = {'<', character_by_user, '>', '/', 'Y', '\\', char(247)};
    bool checker = false; // Not Present
    for (int i = 0; i < 7; i++)
    {
        if (character_by_devil[i] == nextLocation || character_by_devil[i] == nextLocation1)
        {
            checker = true;
        }
    }
    return checker;
}
// To check three next locations
bool to_check_any_side(char nextLocation, char nextLocation1, char nextLocation2)
{
    char character_by_devil[16] = {'<', '#', '>', '^', '*', '-', '^', '_', '=', char(247), ')', char(198), char(178), char(228), char(232), char(220)};
    bool view = true;
    for (int i = 0; i < 16; i++)
    {
        if (character_by_devil[i] == nextLocation || character_by_devil[i] == nextLocation1 || character_by_devil[i] == nextLocation2)
        {
            view = false;
        }
    }
    return view;
}

bool to_check_any_side_of_character_five(char nextLocation, char nextLocation1, char nextLocation2, char nextLocation3, char nextLocation4, char nextLocation5, char nextLocation6, char nextLocation7, char nextLocation8)
{
    char character_by_devil[12] = {'<', character_by_user, '>', '/', 'Y', '\\', char(247), '#', char(198), char(178), char(228), char(232)};
    bool view = true;
    for (int i = 0; i < 12; i++)
    {
        if (character_by_devil[i] == nextLocation || character_by_devil[i] == nextLocation1 || character_by_devil[i] == nextLocation2 || character_by_devil[i] == nextLocation3 || character_by_devil[i] == nextLocation4 || character_by_devil[i] == nextLocation5 || character_by_devil[i] == nextLocation6 || character_by_devil[i] == nextLocation7 || character_by_devil[i] == nextLocation8)
        {
            view = false;
        }
    }
    return view;
}
// Key Printer
void key_printer()
{
    gotoxy(146, 8);
    cout << "\33[32m" << char(157);
    gotoxy(135, 31);
    cout << "\33[32m" << char(157);
    gotoxy(158, 37);
    cout << "\33[32m" << char(157);
}
// Police Robot Move Up and Down
string move_robot_up_down(int arr[2], string police_robot_direction)
{
    char next = getCharAtxy(arr[0] + 3, arr[1]);
    char next1 = getCharAtxy(arr[0] + 3, arr[1] + 1);
    char next2 = getCharAtxy(arr[0] + 3, arr[1] + 2);

    if (police_robot_direction == "up")
    {
        char nextLocation = getCharAtxy(arr[0], arr[1]);
        char nextLocation1 = getCharAtxy(arr[0] + 1, arr[1] - 1);
        char nextLocation2 = getCharAtxy(arr[0] + 2, arr[1] - 1);
        char nextlocation3 = getCharAtxy(arr[0] + 3, arr[1] + 1); // to check side

        if (to_check_any_side_of_character_two(nextLocation2, nextlocation3))
        {

            health_of_devil--;
        }
        if (next == '+' || next1 == '+' || next2 == '+')
        {
            enemy_three_health = enemy_three_health - 1;
        }
        else
        {

            if ((nextLocation != '#' && nextLocation1 != '#' && nextLocation2 != '#') && (nextLocation != '=' && nextLocation1 != '=' && nextLocation2 != '=') && (nextLocation != '-' && nextLocation1 != '-' && nextLocation2 != '-'))
            {
                erase_three_character_row(arr);
                arr[1] = arr[1] - 1;
                print_police_robot(arr);
            }
            else if ((nextLocation == '#' || nextLocation1 == '#' || nextLocation2 == '#') || (nextLocation == '=' || nextLocation1 == '=' || nextLocation2 == '=') || (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157)))
            {
                police_robot_direction = "down";
            }
        }
    }

    if (police_robot_direction == "down")
    {
        char nextLocation = getCharAtxy(arr[0], arr[1] + 3);
        char nextLocation1 = getCharAtxy(arr[0] + 1, arr[1] + 3);
        char nextLocation2 = getCharAtxy(arr[0] + 2, arr[1] + +3);
        char nextlocation3 = getCharAtxy(arr[0] + 3, arr[1] + 1); // to check side
        if (to_check_any_side_of_character_two(nextLocation2, nextlocation3))
        {
            health_of_devil--;
        }
        if (next == '+' || next1 == '+' || next2 == '+')
        {
            enemy_three_health--;
        }
        else
        {

            if ((nextLocation != '#' && nextLocation1 != '#') && (nextLocation != '>' && nextLocation1 != '>') && (nextLocation != '-' && nextLocation1 != '-') && (nextLocation != '=' && nextLocation1 != '='))
            {
                erase_three_character_row(arr);
                arr[1] = arr[1] + 1;
                print_police_robot(arr);
            }

            else if ((nextLocation == '#' || nextLocation1 == '#' || nextLocation2 == '#') || (nextLocation == '=' || nextLocation1 == '=' || nextLocation2 == '=') || (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157)))
            {
                police_robot_direction = "up";
            }
        }
    }
    return police_robot_direction;
}
// Print Up and Down
void print_up_downer(int arr[2])
{
    int line_x = arr[0];
    int line_y = arr[1];
    char line[1][6] = {'#', '#', '#', '#', '#', '#'};
    for (int i = 0; i < 1; i++)
    {
        gotoxy(line_x, line_y);
        for (int j = 0; j < 6; j++)
        {
            cout << line[i][j];
        }
    }
}
// Erase a Line
void erase_line(int arr[2])
{
    int line_x = arr[0];
    int line_y = arr[1];
    for (int i = 0; i < 1; i++)
    {
        gotoxy(line_x, line_y + i);
        for (int j = 0; j < 10; j++)
        {
            cout << " ";
        }
    }
}
// To Check New Locations

// Police Robot Move Up and Down
string move_line_up_down(int arr[2], string line_direction, int devil_axis[2])
{
    if (line_direction == "up")
    {

        char nextLocation = getCharAtxy(arr[0], arr[1] - 1);
        char nextLocation1 = getCharAtxy(arr[0] + 2, arr[1] - 1);
        char nextLocation2 = getCharAtxy(arr[0] + 3, arr[1] - 1);
        char nextLocation3 = getCharAtxy(arr[0] + 4, arr[1] - 1);
        char nextLocation4 = getCharAtxy(arr[0] + 5, arr[1] - 1);
        char nextLocation5 = getCharAtxy(arr[0] + 6, arr[1] - 1);
        char nextLocation6 = getCharAtxy(arr[0] + 7, arr[1] - 1);
        char nextLocation7 = getCharAtxy(arr[0] + 8, arr[1] - 1);
        char nextLocation8 = getCharAtxy(arr[0] + 9, arr[1] - 1);
        if ((nextLocation != '#' && nextLocation1 != '#') && (nextLocation2 != '#' && nextLocation1 != '>') && (nextLocation7 != '#' && nextLocation8 != '#') && (nextLocation != '=' && nextLocation1 != '='))
        {
            erase_line(arr);
            arr[1] = arr[1] - 1;
            print_up_downer(arr);
            if (!(to_check_any_side_of_character_five(nextLocation, nextLocation1, nextLocation2, nextLocation3, nextLocation4, nextLocation5, nextLocation6, nextLocation7, nextLocation8)) && (arr[1] - devil_axis[1] == 2))
            {
                erase_three_character_row(devil_axis);
                devil_axis[1] = devil_axis[1] - 1;
                print_devil_down(devil_axis);
            }
        }

        else if ((nextLocation8 == '#' || nextLocation1 == '#' || nextLocation2 == '#' || nextLocation4 == '#' || nextLocation3 == '#') || (nextLocation == '=' || nextLocation1 == '=' || nextLocation2 == '=') || (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157)))
        {
            line_direction = "down";
        }
    }

    if (line_direction == "down")
    {
        char nextLocation = getCharAtxy(arr[0], arr[1] + 1);
        char nextLocation1 = getCharAtxy(arr[0] + 2, arr[1] + 1);
        char nextLocation2 = getCharAtxy(arr[0] + 3, arr[1] + 1);
        char nextLocation3 = getCharAtxy(arr[0] + 4, arr[1] + 1);
        char nextLocation4 = getCharAtxy(arr[0] + 5, arr[1] + 1);
        char nextLocation5 = getCharAtxy(arr[0] + 6, arr[1] + 1);
        char nextLocation6 = getCharAtxy(arr[0] + 7, arr[1] + 1);
        char nextLocation7 = getCharAtxy(arr[0] + 8, arr[1] + 1);
        char nextLocation8 = getCharAtxy(arr[0] + 9, arr[1] + 1);

        if ((nextLocation != '#' && nextLocation1 != '#') && (nextLocation != '>' && nextLocation1 != '>') && (nextLocation != '-' && nextLocation1 != '-') && (nextLocation != '=' && nextLocation1 != '='))
        {
            erase_line(arr);
            arr[1] = arr[1] + 1;
            print_up_downer(arr);
        }
        else if ((nextLocation == '#' || nextLocation1 == '#' || nextLocation2 == '#') || (nextLocation == '=' || nextLocation1 == '=' || nextLocation2 == '=') || (nextLocation == char(157) || nextLocation1 == char(157) || nextLocation2 == char(157)))
        {

            line_direction = "up";
        }
        if (!(to_check_any_side_of_character_five(nextLocation, nextLocation1, nextLocation2, nextLocation3, nextLocation4, nextLocation5, nextLocation6, nextLocation7, nextLocation8)) && (arr[1] - devil_axis[1] == 2))
        {
            erase_three_character_row(devil_axis);
            devil_axis[1] = devil_axis[1] + 1;
            print_devil_down(devil_axis);
        }
    }
    return line_direction;
}
// Gravity
int gravity(int arr[2], string direction)
{
    char nextlocation = getCharAtxy(arr[0], arr[1] + 3);
    if (nextlocation == ' ')
    {
        erase_three_character_row(arr);
        arr[1] = arr[1] + 1;

        print_devil_up(arr);
    }
    return arr[0];
}
// Front_page
void front_page()
{

    system("cls");
    Sleep(20);
    cout << "\t\t\t\t\t             ::..+*######%%%%%%%%%@%%@@%@@@@@%%@@@@@@@@@%%%%%%%%%%%@%%%%#################*" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t          .-*###*###%%%#%%%%@@%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@%@%%%%%%################" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t       -*#####%%%%%%%@@@%@@@@@%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%#***++++===--====**###" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t      .-%%%%%%%@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@%%%%%#######****+++====----:::::...:::==" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t    ...:+%@@@@@@@@@@@@@@@@@@@@%%%%###########################***++++====------::::::......" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t   ..:--=+##%%%%%%############################################*****++++===------:::::.... " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t ..::-==+****************#################*#######################*****++===------:::::..." << endl;
    Sleep(20);
    cout << "\t\t\t\t\t..::-=+****************####***++===---------======++++*****###########****++===-----::::.." << endl;
    Sleep(20);
    cout << "\t\t\t\t\t:--=+*************+=-:..............::---===++++++++=========+++++*****######***++==---:::" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t--=++***********=:...      ..::-=++**##%%%%@@@@@@@@%%%##******+++++++++++***####***+==---:" << endl;
    Sleep(20);
    cout << "\33[34m"
         << "\t\t\t\t\t-=+++++******=:..      ..:-=+*#%%%%%@@@@@@@@@@@@@@@@@@@@@@@@%##******+==----=++*##***+==--" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t-=++++****+-..      .:-=*##%%%%@@@@@%%%%%%%%%%%%%%%%@@@@@@@@@@@@@%%##%%#**=--::--+*##**+==" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t=+++++**+-.      .:=*##%%%@#%@@@%%%#####%%#######%%%%%%%@@@@@@%%%@@@@@@%%%%%#*=::::-=*#**+" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t==+++++-.     .:=*#%%%#*=-.+@@%%**#######%%%%%%%%%%#%%@@%@@@@@@%%%%%%%@@@@@%%%%#*+-:.:-***" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t=++++=.     .-+#%%%*+-:.  *@@%#=  *#*#%%##########%%%%#%@%@@@@@@%#%%%%%%%%@@@@%%%%%#+-:.-*" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t=++=:     :=*#%%#+=::.   =@%%##+--*#%#*#**##%%%#####%%@%%@@%@@@@@%#######%%%%@@@@%%%@%+-:." << endl;
    Sleep(20);
    cout << "\t\t\t\t\t++-.    :+#%%##+--..    :@@%##*##*###***%@@@@@@@@@%###%@@@@@@@@@@@#******#####%%@@@@@%%%*=" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t=.    :+#%%##*=-:.      +@%%###*##%#***@@@@@@@@@@@@@%##%@@@@%@@@@@%*++++++++***#%%@@@@%#%%" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t.   :+#%%##*+--:..      %@%#######%*#*%@@@@@@@@@@@@@@##%%@%@%%@@@@%+=========++*#%%@@@@@%%" << endl;
    Sleep(20);
    cout << "\33[32m"
         << "\t\t\t\t\t  .=#%%##**+-::.        %@%######%%##*@@@@@@@@@@@@@@@##%%@%@%%@@@@%==---------==##%@@@@@%@" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t.-*%%###**=-::.         #@%#####%%%##*#@@@@@@@@@@@@@%##%@@%%%%@@@@#----::::::--+##%@@@**##" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t+#%*=--+*+=::..         =@@%####@@@%***#@@@@@@@@@@@%###%@%@@%@@@@@+-::::::::::-*#@@@*=*#**" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t%#*=--::++-:...          %@%%###%@@@%###*#%%@@@%%#####@@#%@%%@@@@%:::......::-+#@@#=+#***#" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t#*+=----*+-::..          :%@%%####%*#@%##*##########%@%#@@%%%@@@@:........::-*%@*=+#***##*" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t**##**+*#*+-:..           :@@%%####%%##%@%%%%%%%%@@@%%%%%%%@@@@%:........:-+%%*=+##**##*=:" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t.::-==+++++++=--:.         .#@@%%####%%%#%##%#####%%@@%%%%@@@@#: ......:=*##+=+***###*-:.." << endl;
    Sleep(20);
    cout << "\t\t\t\t\t    ....:-=+++==---::::      :#@@@%%%#####%%%%%%%%%%%%%%@@@@%-    ..-+*#+--=#***###*+:...." << endl;
    Sleep(20);
    cout << "\t\t\t\t\t         ....:===++=-:.:--:--:.:+%@@@%%%%%%%##%%%%%%@@@@@@*: ..-=+**+-:-+*#*##%%#+=+:....:" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t.....      ......::==-==--:::::::-+*#%@@@@@@@%@@@@@@@@@#+=++**==-=--=**#*#%%#***=:::..::::" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t.......................=--=+====-----::--==++++++++===--::::-=++***#%%%%##*+=---:::::::::." << endl;
    Sleep(20);
    cout << "\33[35m"
         << "\t\t\t\t\t   .......................=-.:-+=======+****+=++++++++*########%%%##*+*+++--::::::--:::..." << endl;
    Sleep(20);
    cout << "\t\t\t\t\t     .....................:...+-..:*--=*****#####****###%######*+***=-==+-:::::---::::... " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t        ......::::............:...-=:::*=:--*----======**+++*==--=+=-:::-:------::::....  " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t          ......::::::::............:::+:::=+::::------===-==-----=----------::::......   " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t            .......::::::::::::::::::::::::::::::-------------------------:::::......     " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t              .........::::::------------------------------------------:::::.......       " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t                 .........:::::::-------------------========-------:::::::.......         " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t                      ............::::::::::::::::::::::::::::::::.........        .  :---" << endl
         << endl;
    Sleep(20);
    cout << "\33[33m"
         << "\t\t\t\t\t                                   LAST ATTEMPT OF DEVIL";
    Sleep(1000);
    system("cls");
    cout << endl
         << endl
         << endl
         << endl;
    Sleep(20);
    cout << "\t\t\t       __         ______    ______  ________         ______  ________  ________  ________  __       __  _______  ________  " << endl;
    Sleep(20);
    cout << "\t\t\t      |  \\       /      \\  /      \\|        \\       /      \\|        \\|        \\|        \\|  \\     /  \\|       \\|        \\ " << endl;
    Sleep(20);
    cout << "\t\t\t      | $$      |  $$$$$$\\|  $$$$$$\\$$$$$$$$      |  $$$$$$\\$$$$$$$$ \\$$$$$$$$| $$$$$$$$| $$\\   /  $$| $$$$$$$\\$$$$$$$$ " << endl;
    Sleep(20);
    cout << "\t\t\t      | $$      | $$__| $$| $$___\\$$  | $$         | $$__| $$  | $$      | $$   | $$__    | $$$\\ /  $$$| $$__/ $$  | $$    " << endl;
    Sleep(20);
    cout << "\t\t\t      | $$      | $$    $$ \\$$    \\   | $$         | $$    $$  | $$      | $$   | $$  \\   | $$$$\\  $$$$| $$    $$  | $$    " << endl;
    Sleep(20);
    cout << "\t\t\t      | $$      | $$$$$$$$ _\\$$$$$$\\  | $$         | $$$$$$$$  | $$      | $$   | $$$$$   | $$\\$$ $$ $$| $$$$$$$   | $$    " << endl;
    Sleep(20);
    cout << "\t\t\t      | $$_____ | $$  | $$|  \\__| $$  | $$         | $$  | $$  | $$      | $$   | $$_____ | $$ \\$$$| $$| $$        | $$    " << endl;
    Sleep(20);
    cout << "\t\t\t      | $$     \\| $$  | $$ \\$$    $$  | $$         | $$  | $$  | $$      | $$   | $$     \\| $$  \\$ | $$| $$        | $$    " << endl;
    Sleep(20);
    cout << "\t\t\t       \\$$$$$$$$ \\$$   \\$$  \\$$$$$$    \\$$          \\$$   \\$$   \\$$       \\$$    \\$$$$$$$$ \\$$      \\$$ \\$$         \\$$    " << endl;
    Sleep(20);
    cout << "\t\t\t                    ______   ________        _______   ________  __     __  ______  __                                     " << endl;
    Sleep(20);
    cout << "\t\t\t                   /      \\ |        \\      |       \\ |        \\|  \\   |  \\|      \\|  \\                                    " << endl;
    Sleep(20);
    cout << "\t\t\t                  |  $$$$$$\\| $$$$$$$$      | $$$$$$$\\| $$$$$$$$| $$   | $$ \\$$$$$$| $$                                    " << endl;
    Sleep(20);
    cout << "\t\t\t                  | $$  | $$| $$__          | $$  | $$| $$__    | $$   | $$  | $$  | $$                                    " << endl;
    Sleep(20);
    cout << "\t\t\t                  | $$  | $$| $$  \\         | $$  | $$| $$  \\    \\\\$$\\ /  $$  | $$  | $$                                    " << endl;
    Sleep(20);
    cout << "\t\t\t                  | $$  | $$| $$$$$         | $$  | $$| $$$$$     \\$$\\  $$   | $$  | $$                                    " << endl;
    Sleep(20);
    cout << "\t\t\t                  | $$__/ $$| $$            | $$__/ $$| $$_____    \\$$ $$   _| $$_ | $$_____                               " << endl;
    Sleep(20);
    cout << "\t\t\t                   \\$$    $$| $$            | $$    $$| $$     \\    \\$$$   |   $$ \\| $$     \\                              " << endl;
    Sleep(20);
    cout << "\t\t\t                    \\$$$$$$  \\$$             \\$$$$$$$  \\$$$$$$$$     \\$     \\$$$$$$ \\$$$$$$$$                              " << endl;
    Sleep(20);
    cout << "\t\t\t                                                                                                                           " << endl
         << endl
         << endl
         << endl;
    Sleep(20);
    cout << "\t\t\t                                        PRESS ANY KEY TO START THE GAME ";
    getch();
}
// select single or multiplayer
int selector()
{
    select:
    int n;
    //instructions_lad();
        system("cls");
    cout << endl
         << endl
         << endl;
    cout << "\t\t\t\t\tDDD  EEEE V     V III L     SSS      W     W  AA  III TTTTTT III N   N  GGG " << endl;
    cout << "\t\t\t\t\tD  D E    V     V  I  L    S         W     W A  A  I    TT    I  NN  N G    " << endl;
    cout << "\t\t\t\t\tD  D EEE   V   V   I  L     SSS      W  W  W AAAA  I    TT    I  N N N G  GG" << endl;
    cout << "\t\t\t\t\tD  D E      V V    I  L        S      W W W  A  A  I    TT    I  N  NN G   G" << endl;
    cout << "\t\t\t\t\tDDD  EEEE    V    III LLLL SSSS        W W   A  A III   TT   III N   N  GGG " << endl;
    cout << "\t\t\t\t\t-----------------------------------------------------------------------------" << endl;
    cout << endl
         << endl
         << endl;
    cout << "\33[34m"
         << "\t\t\t\t\t\t\t\t USE ARROW KEY TO SELECT ONE OPTION";
    
    levels_select_printer();
    
    n = selecting_function(35, 26);
    gotoxy(52, 32);
    cout << "ENTER YOUR CHARACTER NAME: ";
    cin >> character_by_user;
    return n;
}
// Enemy 1 and 2 bullet fire
// generate Bullet enemy
void generate_enemy_bullet_right(int arr[2])
{
    bulletX_right_van[bulletCount_right_van] = arr[0] + 4;
    bulletY_right_van[bulletCount_right_van] = arr[1];
    gotoxy(arr[0] + 4, arr[1]);
    cout << "*";
    bulletCount_right_van++;
}
// generate Left bullet
void generate_enemy_bullet_left(int arr[2])
{
    bulletX_left_van[bulletCount_left_van] = arr[0] - 1;
    bulletY_left_van[bulletCount_left_van] = arr[1];
    gotoxy(arr[0] - 1, arr[1]);
    cout << "*";
    bulletCount_left_van++;
}
void move_van_fire_left()
{
    for (int x = 0; x < bulletCount_left_van; x++)
    {
        char next = getCharAtxy(bulletX_left_van[x] - 1, bulletY_left_van[x] );
        char next1 = getCharAtxy(bulletX_left_van[x] - 1, bulletY_left_van[x] );
        if (next != ' ' || next == '#' || next == '+')
        {
            eraseBullet(bulletX_left_van[x], bulletY_left_van[x]);
            remove_bullet_from_enemy_array_left(x);
        }
        else if (next1 == ' ')
        {
            eraseBullet(bulletX_left_van[x], bulletY_left_van[x]);
            bulletX_left_van[x] = bulletX_left_van[x] - 1;
            print_bullet_left_enemy(bulletX_left_van[x], bulletY_left_van[x]);
        }
    }
}
// Move devil fires
void move_van_fire_right()
{
    for (int x = 0; x < bulletCount_right_van; x++)
    {
        char next = getCharAtxy(bulletX_right_van[x] + 1, bulletY_right_van[x] );
        char next1 = getCharAtxy(bulletX_right_van[x] + 1, bulletY_right_van[x] );
        if (next == '#' || next != ' ' || next == '+')
        {
            eraseBullet(bulletX_right_van[x], bulletY_right_van[x]);
            remove_bullet_from_enemy_array_right(x);
        }
        else if (next1 == ' ')
        {
            eraseBullet(bulletX_right_van[x], bulletY_right_van[x]);
            bulletX_right_van[x] = bulletX_right_van[x] + 1;
            print_bullet_right_enemy(bulletX_right_van[x], bulletY_right_van[x]);
        }
    }
}
// Romove Fire from Enemy Array Left
void remove_bullet_from_enemy_array_left(int index)
{
    for (int x = index; x < bulletCount_left_van - 1; x++)
    {
        bulletX_left_van[x] = bulletX_left_van[x + 1];
        bulletY_left_van[x] = bulletY_left_van[x + 1];
    }
    bulletCount_left_van--;
}
// remove_bullet_from_enemy_array_right
void remove_bullet_from_enemy_array_right(int index)
{
    for (int x = index; x < bulletCount_right_van - 1; x++)
    {
        bulletX_right_van[x] = bulletX_right_van[x + 1];
        bulletY_right_van[x] = bulletY_right_van[x + 1];
    }
    bulletCount_right_van--;
}
void print_bullet_left_enemy(int x, int y)
{
    gotoxy(x, y);
    cout << "*";
}
void print_bullet_right_enemy(int x, int y)
{
    gotoxy(x, y);
    cout << "*";
}
// Fire From Van 2
void generate_enemy_bullet_right_2(int arr[2])
{
    bulletX_right_van_2[bulletCount_right_van_2] = arr[0] + 4;
    bulletY_right_van_2[bulletCount_right_van_2] = arr[1];
    gotoxy(arr[0] + 4, arr[1]);
    cout << "*";
    bulletCount_right_van_2++;
}
// generate Left bullet
void generate_enemy_bullet_left_2(int arr[2])
{
    bulletX_left_van_2[bulletCount_left_van_2] = arr[0] - 1;
    bulletY_left_van_2[bulletCount_left_van_2] = arr[1];
    gotoxy(arr[0] - 1, arr[1]);
    cout << "*";
    bulletCount_left_van_2++;
}
void move_van_fire_left_2()
{
    for (int x = 0; x < bulletCount_left_van_2; x++)
    {
        char next = getCharAtxy(bulletX_left_van_2[x] - 1, bulletY_left_van_2[x]);
        char next1 = getCharAtxy(bulletX_left_van_2[x] - 1, bulletY_left_van_2[x]);
        if (next != ' ' || next == '#' || next == '+')
        {
            eraseBullet(bulletX_left_van_2[x], bulletY_left_van_2[x]);
            remove_bullet_from_enemy_array_left_2(x);
        }
        else if (next1 == ' ')
        {
            eraseBullet(bulletX_left_van_2[x], bulletY_left_van_2[x]);
            bulletX_left_van_2[x] = bulletX_left_van_2[x] - 2;
            print_bullet_left_enemy(bulletX_left_van_2[x], bulletY_left_van_2[x]);
        }
    }
}
// Move devil fires
void move_van_fire_right_2()
{
    for (int x = 0; x < bulletCount_right_van_2; x++)
    {
        char next = getCharAtxy(bulletX_right_van_2[x] + 1, bulletY_right_van_2[x] );
        char next1 = getCharAtxy(bulletX_right_van_2[x] + 1, bulletY_right_van_2[x] );
        if (next != ' ' || next == '#' || next == '+')
        {
            eraseBullet(bulletX_right_van_2[x], bulletY_right_van_2[x]);
            remove_bullet_from_enemy_array_right_2(x);
        }
        else if (next1 == ' ')
        {
            eraseBullet(bulletX_right_van_2[x], bulletY_right_van_2[x]);
            bulletX_right_van_2[x] = bulletX_right_van_2[x] + 1;
            print_bullet_right_enemy(bulletX_right_van_2[x], bulletY_right_van_2[x]);
        }
    }
}
// Romove Fire from Enemy Array Left
void remove_bullet_from_enemy_array_left_2(int index)
{
    for (int x = index; x < bulletCount_left_van_2 - 1; x++)
    {
        bulletX_left_van_2[x] = bulletX_left_van_2[x + 1];
        bulletY_left_van_2[x] = bulletY_left_van_2[x + 1];
    }
    bulletCount_left_van_2--;
}
// remove_bullet_from_enemy_array_right
void remove_bullet_from_enemy_array_right_2(int index)
{
    for (int x = index; x < bulletCount_right_van_2 - 1; x++)
    {
        bulletX_right_van_2[x] = bulletX_right_van_2[x + 1];
        bulletY_right_van_2[x] = bulletY_right_van_2[x + 1];
    }
    bulletCount_right_van_2--;
}
// Generate Fire
void generate_fire(int axis[2], string direction)
{
    if (direction == "right")
    {
        generate_fire_right(axis);
    }
    if (direction == "left")
    {
        generate_fire_left(axis);
    }
}
// Generate Fire 2
void generate_fire_2(int axis[2], string direction)
{
    if (direction == "right")
    {
        generate_fire_right_2(axis);
    }
    if (direction == "left")
    {
        generate_fire_left_2(axis);
    }
}
// Van one Fire Checker
void check_fire_direction(string direction)
{
    if (direction == "right")
    {
        move_van_fire_right();
    }
    else if (direction == "left")
    {
        move_van_fire_left();
    }
}
// Devil Fire Mover
void devil_fire_mover()
{
    move_fire_left();
    move_fire_right();
}
// MORODO FIRE MOVER
void morodo_fire_mover()
{
    move_fire_left_2();
    move_fire_right_2();
}
void check_fire_direction_2(string direction)
{
    if (direction == "right")
    {
        move_van_fire_right_2();
    }
    else if (direction == "left")
    {
        move_van_fire_left_2();
    }
}
// Game Ender
void end_page()
{
    system("cls");
    cout << endl
         << endl
         << endl
         << endl;
    Sleep(20);
    cout << "\t\t\t\t\t>=>      >=>     >===>      >=>     >=>       >=>        >=>     >===>      >==>    >=>" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t >=>    >=>    >=>    >=>   >=>     >=>       >=>        >=>   >=>    >=>   >> >=>  >=>" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t  >=> >=>    >=>        >=> >=>     >=>       >=>   >>   >=> >=>        >=> >=> >=> >=>" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t    >=>      >=>        >=> >=>     >=>       >=>  >=>   >=> >=>        >=> >=>  >=>>=>" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t    >=>      >=>        >=> >=>     >=>       >=> >> >=> >=> >=>        >=> >=>   > >=>" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t    >=>        >=>     >=>  >=>     >=>       >> >>    >===>   >=>     >=>  >=>    >>=>" << endl;
    Sleep(20);
    cout << "\t\t\t\t\t    >=>          >===>        >====>          >=>        >=>     >===>      >=>     >=>" << endl;
    Sleep(1000);
}
// dEVIL lOSE
void devil_lose_page()
{
    system("cls");
    cout << "\33[33m"
         << "\t\t\t\t\t########  ######## ##     ## #### ##          ########    ###    #### ##       " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t##     ## ##       ##     ##  ##  ##          ##         ## ##    ##  ##       " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t##     ## ##       ##     ##  ##  ##          ##        ##   ##   ##  ##       " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t##     ## ######   ##     ##  ##  ##          ######   ##     ##  ##  ##       " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t##     ## ##        ##   ##   ##  ##          ##       #########  ##  ##       " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t##     ## ##         ## ##    ##  ##          ##       ##     ##  ##  ##       " << endl;
    Sleep(20);
    cout << "\t\t\t\t\t########  ########    ###    #### ########    ##       ##     ## #### ######## " << endl;
    Sleep(1000);
}
// Bullets of Robot
void generate_enemy_bullet_right_3(int arr[2])
{
    bulletX_right_robot_2[bulletCount_right_robot_2] = arr[0] + 4;
    bulletY_right_robot_2[bulletCount_right_robot_2] = arr[1];
    gotoxy(arr[0] + 4, arr[1]);
    cout << "*";
    bulletCount_right_robot_2++;
}
void move_robot_fire_right()
{
    for (int x = 0; x < bulletCount_right_robot_2; x++)
    {
        char next = getCharAtxy(bulletX_right_robot_2[x] + 1, bulletY_right_robot_2[x]);
        char next1 = getCharAtxy(bulletX_right_robot_2[x] + 1, bulletY_right_robot_2[x] + 1);
        char next2 = getCharAtxy(bulletX_right_robot_2[x] + 1, bulletY_right_robot_2[x] + 2);
        char next3 = getCharAtxy(bulletX_right_robot_2[x] + 1, bulletY_right_robot_2[x] - 1);

        if (next != ' ')
        {
            eraseBullet(bulletX_right_robot_2[x], bulletY_right_robot_2[x]);
            remove_bullet_from_enemy_array_right_3(x);
        }
        else if (next1 == ' ')
        {
            eraseBullet(bulletX_right_robot_2[x], bulletY_right_robot_2[x]);
            bulletX_right_robot_2[x] = bulletX_right_robot_2[x] + 1;
            print_bullet_right_enemy(bulletX_right_robot_2[x], bulletY_right_robot_2[x]);
        }
    }
}
void remove_bullet_from_enemy_array_right_3(int index)
{
    for (int x = index; x < bulletCount_right_robot_2 - 1; x++)
    {
        bulletX_right_robot_2[x] = bulletX_right_robot_2[x + 1];
        bulletY_right_robot_2[x] = bulletY_right_robot_2[x + 1];
    }
    bulletCount_right_robot_2--;
}
void printMaze_level_2()
{
    system("cls");
    cout << endl
         << endl
         << endl;
    cout << "\33[35m"
         << "     |#################################################################################################################################################################||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##############        ###############################################################          ##################       #########################################||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                  ######                                                                     ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                               #########                                                                                                                     ##||  " << endl;
    cout << "     |##                                                                                                                                 ####-                       ##||  " << endl;
    cout << "     |##                                                                                                                                 ####-                       ##||  " << endl;
    cout << "     |#################################################################################################################################################################||  " << endl
         << endl;
    cout << "\33[35m"
         << "     |#################################################################################################################################################################||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##############        ###############################################################          ##################       #########################################||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                  ######                                                                     ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                               #########                                                                                                                     ##||  " << endl;
    cout << "     |##                                                                                                                                 ####-                       ##||  " << endl;
    cout << "     |##                                                                                                                                 ####-                       ##||  " << endl;
    cout << "     |#################################################################################################################################################################||  " << endl;
}
// view_list_level_1
void view_list_level_1()
{
    gotoxy(14, 2);
    cout << "                             ";
    gotoxy(26, 2);
    cout << "                             ";
    gotoxy(38, 2);
    cout << "                             ";
    gotoxy(54, 2);
    cout << "                             ";
    gotoxy(72, 2);
    cout << "                             ";
    gotoxy(14, 2);
    cout << "Power: " << immoral_power;
    gotoxy(26, 2);
    cout << "Health: " << health_of_devil;
    gotoxy(38, 2);
    cout << "Enemy One: " << enemy_one_health;
    gotoxy(54, 2);
    cout << "Enemy Two: " << enemy_two_health;
    gotoxy(72, 2);
    cout << "Enemy Three: " << enemy_three_health;
}
// ANGEL CHARACTER
void print_angel_character(int arr[3])
{
    int x = arr[0];
    int y = arr[1];
    char angel[3][5] = {{' ', ' ', '_', ' ', ' '},
                        {'{', '\\', 'A', '/', '}'},
                        {' ', '/', '_', '\\', ' '}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            gotoxy(x + j, y + i);
            cout << "\33[34m" << angel[i][j];
        }
    }
}
// FIVE CHARACTER AND ANGEL ERASER
void erase_five_character(int arr[3])
{
    int x = arr[0];
    int y = arr[1];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            gotoxy(x + j, y + i);
            cout << " ";
        }
    }
}
// SMARTLY MOVE ANGEL
int smartly_move(int arr[2], int angel[3])
{
    int x = arr[0];
    int y = arr[1];

    erase_five_character(angel);

    if (arr[0] > angel[0])
    {
        if (!(right_left_sides(angel, 5)))
        {
            angel[0] = angel[0] + 1;
        }
    }
    else if (arr[0] < angel[0])
    {
        if (!(right_left_sides(angel, -1)))
        {
            angel[0] = angel[0] - 1;
        }
    }
    if (arr[1] > angel[1])
    {
        if (!(up_down_sides(angel, 3)))
        {
            angel[1] = angel[1] + 1;
        }
    }
    else if (arr[1] < angel[1])
    {
        if (!(up_down_sides(angel, -1)))
        {
            angel[1] = angel[1] - 1;
        }
    }
    print_angel_character(angel);
    return angel[1];
}
// left side checker
int right_left_sides(int arr[3], int x)
{
    char next[3];
    for (int i = 0; i < 3; i++)
    {

        if ((next[i] = getCharAtxy(arr[0] + x, arr[1] + i)) != ' ')
        {
            if ((next[i] = getCharAtxy(arr[0] + x, arr[1] + i)) == '+' || next[i] == 'X')
            {
                arr[2] = arr[2] - 1;
                if (only_use_in_level_3 == '3')
                {
                    arr[2] = arr[2] - 5;
                }
            }
            if (((next[i] = getCharAtxy(arr[0] + x, arr[1] + i)) == '/' || next[i] == '>' || next[i] == '<' || next[i] == '\\') && only_use_in_level_3 != '4')
            {
                if (arr[1] < 18)
                {
                    health_of_devil--;
                }
                else if (arr[1] > 18)
                {
                    health_of_morodo--;
                }
            }
            return arr[2];
        }
    }
    return 0;
}
// UP side checker
int up_down_sides(int arr[3], int x)
{
    char next[5];
    for (int i = 0; i < 5; i++)
    {

        if ((next[i] = getCharAtxy(arr[0] + i, arr[1] + x)) != ' ')
        {
            if ((next[i] = getCharAtxy(arr[0] + x, arr[1] + i)) == '+' || next[i] == 'X')
            {
                arr[2] = arr[2] - 1;
                if (only_use_in_level_3 == '3')
                {
                    arr[2] = arr[2] - 5;
                }
            }
            if ((next[i] = getCharAtxy(arr[0] + x, arr[1] + i)) == '/' || next[i] == '>' || next[i] == '<' || next[i] == '\\')
            {
                if (arr[1] < 18)
                {
                    health_of_devil--;
                }
                else if (arr[1] > 18)
                {
                    health_of_morodo--;
                }
            }
            return arr[2];
        }
    }
    return 0;
}
// MULTIPLAYER HEALTH AND ENEMY HEALTH PRINTER
void score_level_2(int a1d[3], int a2d[3], int a3d[3], int a1m[3], int a2m[3], int a3m[3])
{
    gotoxy(18, 1);
    cout << "DEVIL HEALTH:                        ";
    gotoxy(18, 1);
    cout << "DEVIL HEALTH: " << health_of_devil;
    gotoxy(18, 2);
    cout << "MORDOR HEALTH:                        ";
    gotoxy(18, 2);
    cout << "MORDOR HEALTH: " << health_of_morodo;
    gotoxy(48, 1);
    cout << "ANGEL 1D HEALTH:                        ";
    gotoxy(48, 1);
    cout << "ANGEL 1D HEALTH:  " << a1d[2];
    gotoxy(78, 1);
    cout << "ANGEL 2D HEALTH:                        ";
    gotoxy(78, 1);
    cout << "ANGEL 2D HEALTH:  " << a2d[2];
    gotoxy(108, 1);
    cout << "ANGEL 3D HEALTH:                        ";
    gotoxy(108, 1);
    cout << "ANGEL 3D HEALTH:  " << a3d[2];
    gotoxy(48, 2);
    cout << "ANGEL 1M HEALTH:                        ";
    gotoxy(48, 2);
    cout << "ANGEL 1M HEALTH:  " << a1m[2];
    gotoxy(78, 2);
    cout << "ANGEL 2M HEALTH:                        ";
    gotoxy(78, 2);
    cout << "ANGEL 2M HEALTH:  " << a2m[2];
    gotoxy(108, 2);
    cout << "ANGEL 3M HEALTH:                        ";
    gotoxy(108, 2);
    cout << "ANGEL 3M HEALTH:  " << a3m[2];
}
// QUESTION
char question_in_center(string line)
{
    char n;
    gotoxy(44, 17);
    cout << "\33[38m"
         << "####################################################################";
    gotoxy(56, 20);
    cout << "\33[32m" << line;
    gotoxy(44, 23);
    cout << "\33[38m"
         << "#####################################################################";
    gotoxy(90, 20);
    cin >> n;
    return n;
}
// QUESTION in upper
char question_in_up(string line)
{
    char n;
    gotoxy(44, 0);
    cout << "\33[38m"
         << "####################################################################";
    gotoxy(56, 1);
    cout << "\33[32m" << line;
    gotoxy(44, 2);
    cout << "\33[38m"
         << "#####################################################################";
    gotoxy(90, 1);
    cin >> n;
    return n;
}
// Erase up question
char erase_question()
{
    char n;
    gotoxy(44, 0);
    cout << "                                                                                       ";
    gotoxy(56, 1);
    cout << "                                                       ";
    gotoxy(44, 2);
    cout << "                                                                                       ";
}
// WON OR LOSE
void line_in_center(string line)
{
    char n;
    gotoxy(44, 17);
    cout << "\33[38m"
         << "####################################################################";
    gotoxy(70, 20);
    cout << "\33[32m" << line;
    gotoxy(44, 23);
    cout << "\33[38m"
         << "#####################################################################";
}
// all thing fuller
void things_in_lad_reused()
{
    enemy_one_health = 20;
    enemy_two_health = 20;
    enemy_three_health = 20;
    health_of_devil = 50;
    health_of_morodo = 50;
    immoral_power = 0;
    // MONORODO OBJECTS
    bulletCount_left_2 = 0;
    bulletCount_right_2 = 0;
    // DEVIL OBJECTS
    bulletCount_left = 0;
    bulletCount_right = 0;
    // VAN OBJECTS
    bulletCount_left_van = 0;
    bulletCount_right_van = 0;
    // VAN 2 OBJECTS
    bulletCount_left_van_2 = 0;
    bulletCount_right_van_2 = 0;
    // POLICE ROBOT
    bulletCount_right_robot_2 = 0;
}
// MORODO SOLDIERS CHARACTER
void mordor_soldiers(int arr[3])
{
    int x = arr[0];
    int y = arr[1];
    char mordor_sol[3][5] = {{' ', ' ', '^', ' ', ' '},
                             {'[', '\\', 'M', '/', ']'},
                             {' ', '(', ' ', ')', ' '}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            gotoxy(x + j, y + i);
            cout << "\33[34m" << mordor_sol[i][j];
        }
    }
}
// devils soldiers
void devils_soldiers(int arr[3])
{
    int x = arr[0];
    int y = arr[1];
    char devils_sol[3][5] = {{' ', ' ', '*', ' ', ' '},
                             {'{', '\\', 'D', '/', '}'},
                             {' ', '{', ' ', '}', ' '}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            gotoxy(x + j, y + i);
            cout << "\33[31m" << devils_sol[i][j];
        }
    }
}
// LAST lEVEL MAZE
void printMaze_last_level()
{
    system("cls");
    cout << endl
         << endl
         << endl;
    cout << "\33[35m"
         << "     |#################################################################################################################################################################||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |############                                                                                                                                                   ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                   ############||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |############                                                                                                                                                   ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                   ############||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |############                                                                                                                                                   ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                   ############||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |############                                                                                                                                                   ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "\33[35m"
         << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                   ############||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |############                                                                                                                                                   ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                   ############||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |############                                                                                                                                                   ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |##                                                                                                                                                   ############||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "\33[35m"
         << "     |############                                                                                                                                                   ##||  " << endl;
    cout << "     |##                                                                                                                                                             ##||  " << endl;
    cout << "     |#################################################################################################################################################################||  " << endl;
}
// SMARTLY MOVE SINGLE MODULE
int smartly_move_soldiers(int arr[2], int soldiers[3])
{
    int x = arr[0];
    int y = arr[1];
    if (arr[0] > soldiers[0])
    {
        if (!(right_left_sides(soldiers, 5)))
        {
            soldiers[0] = soldiers[0] + 1;
        }
    }
    else if (arr[0] < soldiers[0])
    {
        if (!(right_left_sides(soldiers, -1)))
        {
            soldiers[0] = soldiers[0] - 1;
        }
    }
    if (arr[1] > soldiers[1])
    {
        if (!(up_down_sides(soldiers, 3)))
        {
            soldiers[1] = soldiers[1] + 1;
        }
    }
    else if (arr[1] < soldiers[1])
    {
        if (!(up_down_sides(soldiers, -1)))
        {
            soldiers[1] = soldiers[1] - 1;
        }
    }
    return soldiers[1];
}
// DEVIL SOLDIERS MOVES
int devils_soldiers_smart(int arr[2], int soldiers[3])
{
    erase_five_character(soldiers);
    smartly_move_soldiers(arr, soldiers);
    devils_soldiers(soldiers);
    return soldiers[2];
}
// MORDOR SOLDIERS MOVES
int mordor_soldiers_smart(int arr[2], int soldiers[3])
{
    erase_five_character(soldiers);
    smartly_move_soldiers(arr, soldiers);
    mordor_soldiers(soldiers);
    return soldiers[2];
}
// DEVILS ALL SOLDIERS
int devil_all_soldiers(int mordor_axis_level_3[2], int devil_soldier_1[3], int devil_soldier_2[3], int devil_soldier_3[3], int devil_soldier_4[3], int devil_soldier_5[3], int devil_soldier_6[3], int devil_soldier_7[3])
{
    if (devils_sol_health[0] >= -4)
    {
        if (devils_sol_health[0] > 0)
        {
            devils_soldiers_smart(mordor_axis_level_3, devil_soldier_1);
        }
        else
        {
            erase_five_character(devil_soldier_1);
        }
    }
    if (devils_sol_health[1] >= -4)
    {
        if (devils_sol_health[1] > 0)
        {
            devils_soldiers_smart(mordor_axis_level_3, devil_soldier_2);
        }
        else
        {
            erase_five_character(devil_soldier_2);
        }
    }
    if (devils_sol_health[2] >= -4)
    {
        if (devils_sol_health[2] > 0)
        {
            devils_soldiers_smart(mordor_axis_level_3, devil_soldier_3);
        }
        else
        {
            erase_five_character(devil_soldier_3);
        }
    }
    if (devils_sol_health[3] >= -4)
    {
        if (devils_sol_health[3] > 0)
        {
            devils_soldiers_smart(mordor_axis_level_3, devil_soldier_4);
        }
        else
        {
            erase_five_character(devil_soldier_4);
        }
    }
    if (devils_sol_health[4] >= -4)
    {
        if (devils_sol_health[4] > 0)
        {
            devils_soldiers_smart(mordor_axis_level_3, devil_soldier_5);
        }
        else
        {
            erase_five_character(devil_soldier_5);
        }
    }
    if (devils_sol_health[5] >= -4)
    {
        if (devils_sol_health[5] > 0)
        {
            devils_soldiers_smart(mordor_axis_level_3, devil_soldier_6);
        }
        else
        {
            erase_five_character(devil_soldier_6);
        }
    }
    if (devils_sol_health[6] >= -4)
    {
        if (devils_sol_health[6] > 0)
        {
            devils_soldiers_smart(mordor_axis_level_3, devil_soldier_7);
        }
        else
        {
            erase_five_character(devil_soldier_7);
        }
    }
    devils_sol_health[0] = devil_soldier_1[2];
    devils_sol_health[1] = devil_soldier_2[2];
    devils_sol_health[2] = devil_soldier_3[2];
    devils_sol_health[3] = devil_soldier_4[2];
    devils_sol_health[4] = devil_soldier_5[2];
    devils_sol_health[5] = devil_soldier_6[2];
    devils_sol_health[6] = devil_soldier_7[2];
    return 0;
}
// MORRDOR ALL SOLDIERS
int mordor_all_soldiers(int devils_axis_level_3[2], int mordor_soldier_1[3], int mordor_soldier_2[3], int mordor_soldier_3[3], int mordor_soldier_4[3], int mordor_soldier_5[3], int mordor_soldier_6[3])
{
    if (mordor_sol_health[0] >= -4)
    {
        if (mordor_sol_health[0] > 0)
        {
            mordor_soldiers_smart(devils_axis_level_3, mordor_soldier_1);
        }
        else
        {
            erase_five_character(mordor_soldier_1);
        }
    }
    if (mordor_sol_health[1] >= -4)
    {
        if (mordor_sol_health[1] > 0)
        {
            mordor_soldiers_smart(devils_axis_level_3, mordor_soldier_2);
        }
        else
        {
            erase_five_character(mordor_soldier_2);
        }
    }
    if (mordor_sol_health[2] >= -4)
    {
        if (mordor_sol_health[2] > 0)
        {
            mordor_soldiers_smart(devils_axis_level_3, mordor_soldier_3);
        }
        else
        {
            erase_five_character(mordor_soldier_3);
        }
    }
    if (mordor_sol_health[3] >= -4)
    {
        if (mordor_sol_health[3] > 0)
        {
            mordor_soldiers_smart(devils_axis_level_3, mordor_soldier_4);
        }
        else
        {
            erase_five_character(mordor_soldier_4);
        }
    }
    if (mordor_sol_health[4] >= -4)
    {
        if (mordor_sol_health[4] > 0)
        {
            mordor_soldiers_smart(devils_axis_level_3, mordor_soldier_5);
        }
        else
        {
            erase_five_character(mordor_soldier_5);
        }
    }
    if (mordor_sol_health[5] >= -4)
    {
        if (mordor_sol_health[5] > 0)
        {
            mordor_soldiers_smart(devils_axis_level_3, mordor_soldier_6);
        }
        else
        {
            erase_five_character(mordor_soldier_6);
        }
    }

    mordor_sol_health[0] = mordor_soldier_1[2];
    mordor_sol_health[1] = mordor_soldier_2[2];
    mordor_sol_health[2] = mordor_soldier_3[2];
    mordor_sol_health[3] = mordor_soldier_4[2];
    mordor_sol_health[4] = mordor_soldier_5[2];
    mordor_sol_health[5] = mordor_soldier_6[2];

    return 0;
}
// health
void health_devil_mordor_soldiers()
{
    gotoxy(10, 1);
    cout << "                                                                                                                                                                   ";
    gotoxy(10, 2);
    cout << "                                                                                                                                                                   ";
    gotoxy(10, 1);
    cout << "DEVILS HEALTH: " << health_of_devil;
    gotoxy(10, 2);
    cout << "MORDOR HEALTH: " << health_of_morodo;
    gotoxy(60, 1);
    cout << "DEVILS SOLDIERS HEALTH: " << devils_sol_health[0] << "   " << devils_sol_health[1] << "   " << devils_sol_health[2] << "   " << devils_sol_health[3] << "   " << devils_sol_health[4] << "   " << devils_sol_health[5] << "   " << devils_sol_health[6];
    gotoxy(60, 2);
    cout << "MORDOR SOLDIERS HEALTH: " << mordor_sol_health[0] << "   " << mordor_sol_health[1] << "   " << mordor_sol_health[2] << "   " << mordor_sol_health[3] << "   " << mordor_sol_health[4] << "   " << mordor_sol_health[5];
    gotoxy(138, 1);
    cout << "TIME: " << time;
}
// VERTICAL LINES
void vertical_lines()
{
    for (int i = 4; i < 40; i++)
    {
        gotoxy(18, i);
        cout << "#";
        gotoxy(154, i);
        cout << "#";
    }
}
void remove_first_phase_line()
{
    for (int i = 4; i < 20; i++)
    {
        gotoxy(18, i);
        cout << " ";
        gotoxy(154, 16 + i);
        cout << " ";
    }
}
void remove_second_phase_line()
{
    for (int i = 4; i < 21; i++)
    {
        gotoxy(18, 16 + i);
        cout << " ";
        gotoxy(154, i);
        cout << " ";
    }
}
// jail rood remove
void rod_remover()
{
    if (time == 10)
    {
        remove_first_phase_line();
    }
    if (time == 35)
    {
        remove_second_phase_line();
    }
}
// three levels show
void levels_select_printer()
{
    // level one
    gotoxy(34, 18);
    cout << "\33[32m"
         << "        L|J(_)         " << endl;
    gotoxy(34, 19);
    cout << "    )    | (\")      (  " << endl;
    gotoxy(34, 20);
    cout << "    ,(.  |`/ \\- y  (,`)" << endl;
    gotoxy(34, 21);
    cout << "   )' (' | \\ /\\/  ) (. " << endl;
    gotoxy(34, 22);
    cout << "  (' ),) | _W_   (,)' )" << endl;
    gotoxy(34, 24);
    cout << "|      LEVEL ONE      |" << endl;
    // LEVEL 2
    gotoxy(65, 18);
    cout << "\33[36m"
         << "/( /\\ )\\  _\\ \\_/ /_   ";
    gotoxy(65, 19);
    cout << "|\\_||_/| < \\_   _/ >  ";
    gotoxy(65, 20);
    cout << "\\______/  \\|0   0|/   ";
    gotoxy(65, 21);
    cout << "  _\\/_   _(_  ^  _)_  ";
    gotoxy(65, 22);
    cout << " ( () ) /`\\|V\"\"\"V|/`\\ ";
    gotoxy(65, 23);
    cout << "   ()   \\  \\_____/  / ";
    gotoxy(65, 24);
    cout << "|       LEVEL TWO     |";
    // level #
    gotoxy(95, 18);
    cout << "\33[31m"
         << "/////////////////////";
    gotoxy(95, 19);
    cout << "                      ";
    gotoxy(95, 20);
    cout << "         DEVIL          ";
    gotoxy(95, 21);
    cout << "          V"
         << "\33[34m"
         << "S";
    gotoxy(95, 22);
    cout << "        MORDOR";
    gotoxy(95, 23);
    cout << "                     ";
    gotoxy(95, 24);
    cout << "|     LEVEL"
         << "\33[31m"
         << " THREE    |";
}
// LINE use in selecter;
void slecter_horizantel_line(int x, int y)
{
    for (int i = 0; i < 22; i++)
    {
        gotoxy(x + i, y);
        cout << "\33[32m"
             << "_";
        gotoxy(x + i, y + 1);
        cout << "\33[32m" << char(209);
    }
}
// ERase line
void erase_slecter_horizantel_line(int x, int y)
{
    for (int i = 0; i < 22; i++)
    {
        gotoxy(x + i, y);
        cout << "\33[32m"
             << " ";
        gotoxy(x + i, y + 1);
        cout << "\33[32m"
             << " ";
    }
}
int selecting_function(int x, int y)
{
    int x_axis = x;
    int y_axis = y;
    int option = 1;
    slecter_horizantel_line(x_axis, y_axis);
    while(true)
    {
        if (GetAsyncKeyState(VK_RIGHT) && option <= 3)
        {
            erase_slecter_horizantel_line(x_axis, y_axis);
            if(option < 3)
            {
            x_axis = x_axis + 30;
            option = option + 1;
            }
            slecter_horizantel_line(x_axis, y_axis);
            Sleep(300);
        }
        if (GetAsyncKeyState(VK_LEFT) && option > 1)
        {
            erase_slecter_horizantel_line(x_axis, y_axis);
            x_axis = x_axis - 30;
            option = option - 1;
            slecter_horizantel_line(x_axis, y_axis);
            Sleep(300);
        }
        if (GetAsyncKeyState(VK_TAB))
        {
            return option;
        }
    }
}
// instructions
void instructions_lad()
{   
    system("cls");
    cout<<"\t\t\t\t\t INSTRUCTIONS OF LAD"<<endl<<endl<<endl;
    cout<<"\t\t\tGAME BUTTONS FOR DEVIL"<<endl<<endl;
    cout<<char(175)<<"\t\t\tRIGHT ARROW KEY: TO MOVE DEVIL RIGHT \t LEFT ARROW KEY: TO MOVE DEVIL LEFT "<<endl;
    cout<<char(175)<<"\t\t\tUP ARROW KEY: TO MOVE DEVIL UP \t DOWN ARROW KEY: TO MOVE DEVIL DOWN "<<endl;
    cout<<char(175)<<"\t\t\tSPACE: TO FIRE "<<endl<<endl;
    cout<<"\t\t\tGAME BUTTONS FOR MORDOR"<<endl<<endl;
    cout<<char(175)<<"\t\t\tD KEY: TO MOVE MORDOR RIGHT \t A KEY: TO MOVE MORDOR LEFT "<<endl;
    cout<<char(175)<<"\t\t\tW KEY: TO MOVE MORDOR UP \t S KEY: TO MOVE MORDOR DOWN "<<endl;
    cout<<char(175)<<"\t\t\tF KEY: TO FIRE "<<endl<<endl;

    cout<<"\t\t\t\t\t\tLEVEL ONE"<<endl;
    cout<<char(175)<<"\t\t\tDEVIL HAS TO COLLECT THREE KEYS TO GET THE IMMORAL POWERS RELATED TO ANGEL."<<endl;
    cout<<char(175)<<"\t\t\tIN FIRST LEVEL YOU FIGHT WITH VAN AND ROBOT."<<endl;
    cout<<char(175)<<"\t\t\tDEVIL WON THE GAME WHEN IT REACH PRTICULAR TYPE OF Y."<<endl<<endl;

    cout<<"\t\t\t\t\t\tLEVEL TWO"<<endl;
    cout<<char(175)<<"\t\t\tDEVIL AND MORDOR HAS TO KILL ANGELS WHICH ARE SENDED BY GOD."<<endl;
    cout<<char(175)<<"\t\t\tTHIS IS MULTIPLAYER LEVEL. THE PERSON WHO DIE FIRST LOST THE GAME"<<endl<<endl;
    
    cout<<"\t\t\t\t\t\tLEVEL THREE"<<endl;
    cout<<char(175)<<"\t\t\tTHIS IS A WAR BETWEEN DEVIL AND MORDOR TO GET THRONE OF HIS FATHER SHATAN."<<endl;
    cout<<char(175)<<"\t\t\tDEVILS POWER DID NOT DECREASE IN LOWER REGION AGAINST ONLY SOLDIERS OF MORDOR."<<endl;
    cout<<char(175)<<"\t\t\tMORDOR POWER DID NOT DECREASE IN UPPER REGION AGAINST ONLY SOLDIERS OF DEVIL."<<endl;
    cout<<"\t\t\tPRESS ANY KEY TO SKIP IT"<<endl;   
    getch();
}
