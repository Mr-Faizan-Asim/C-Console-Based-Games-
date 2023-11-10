#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void print_box_tank(int rows, int columns);
int screen_size();
int print_details_of_health();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void print_bullet_pills(int n);
void things_redefined();
int border_1();
int border_2();
// lEVELS
bool level_one(char tank_level_option);
bool level_two(char tank_level_option);
bool level_three(char tank_level_option);
// TANK
void erase_level_2_tank(int arr[2]);
void character_tank(int arr[2]);
void erase_tank(int arr[2]);
int move_tank_left(int arr[2]);
int move_tank_right(int arr[2]);
int move_tank_up(int arr[2]);
void level_end_shower(string line);
int move_tank_down(int arr[2]);
bool to_check_tank_sides(int arr[2], string direction);
int generate_khalid_bullet_right(int arr[2], int bullet[2][200]);
int removeBulletFromArray(int index, int bullet[2][200]);
int move_bullet(int bullet[2][200]);
void small_line_printer(int x, int y);
void eraseBullet(int x, int y);
void printBullet(int x, int y);
void print_enemy_tank(int arr[2]);
void erase_enemy_tank(int arr[2]);
int enemy_condition(int arr[2], int arr_1[2]);
int enemy_sides_check(char next[2], int arr[2][200], int index);
int generate_indian_tank_bullet_left(int arr[2], int bullet[2][200], int number);
int khalid_tank_sides_check(char next[2], int arr[2][200], int index);
void erase_enemy_bullet(int x, int y);
void print_enemy_bullet(int x, int y);
int move_indian_tank_bullet_left(int bullet[2][200], int number);
int removeBulletFromArray_tank_enemy(int index, int bullet[2][200], int number);
void line_printer(int x, int y);
void print_tank_after_level_1(int arr[2]);
void level_end_shower(string line);
// Level 2 things
int enemy_sides_check_level_2(char next[2], int arr[2][200], int index);
int removeBulletFromArray_level_2_enemy_right_afg(int index, int bullet[2][200]);
int move_enemy_bullet_right_afg(int bullet[2][200], int arr[1][3]);
int generate_enemy_bullet_right_afg(int arr[1][3], int bullet[2][200]);
int afg_move_smartly(int arr[1][3], int tank[2]);
void erase_tank_afg(int arr[1][3]);
void character_tank_afg(int arr[1][3]);
int move_enemy_bullet_left(int bullet[2][200], int arr[1][3]);
int generate_enemy_bullet_left(int arr[1][3], int bullet[2][200]);
int removeBulletFromArray_level_2_enemy_left(int index, int bullet[2][200]);
int enemy_move_up_down(int arr[1][3]);
bool check_sider(char next[13], int n);
void print_enemy_2_tank_level_2(int arr[1][3]);
int move_bullet_up(int bullet[2][200]);
int removeBulletFromArray_level_2_up(int index, int bullet[2][200]);
void printBullet_up(int x, int y);
int removeBulletFromArray_level_2_right(int index, int bullet[2][200]);
int generate_khalid_bullet_up_level_2(int arr[2], int bullet[2][200]);
bool to_check_upper_side_tank(int tank_leveler, char next[5]);
void printBullet_down_enemy(int x, int y);
void print_tank_after_level_1_left(int arr[2]);
int generate_khalid_bullet_right_level_2(int arr[2], int bullet[2][200]);
int generate_khalid_bullet_left_level_2(int arr[2], int bullet[2][200]);
int removeBulletFromArray_level_2_right(int index, int bullet[2][200]);
int removeBulletFromArray_level_2_left(int index, int bullet[2][200]);
int move_bullet_left(int bullet[2][200]);
int move_bullet_right(int bullet[2][200]);
void printBullet_right(int x, int y);
void printBullet_left(int x, int y);
void print_right_left_moving_enemy(int arr[1][3]);
int enemy_move_left_right(int arr[1][3]);
void erase_enemy_level_two(int arr[1][3]);
int generate_enemy_bullet_down(int arr[1][3], int bullet[2][200]);
int removeBulletFromArray_level_2_down(int index, int bullet[2][200]);
int move_bullet_down(int bullet[2][200], int arr[1][3]);
// LEVEL THREE THINGS
void last_level_enemy_tank(int arr[1][3]);
void erase_last_level_enemy_tank(int arr[1][3]);
int move_raw_up_down(int arr[1][3]);
int generate_raw_bullet_left_level_3(int arr[1][3], int bullet[2][200]);
int removeBulletFromArray_raw_level_3(int index, int bullet[2][200]);
int move_bullet_left_raw(int bullet[2][200]);
void printBullet_raw(int x, int y);
void last_level_score();
// MULTIPLAYER
bool multiplayer_game();
int horizantel_line();
int generate_al_zarar_bullet_right(int arr[2], int bullet[2][200]);
int generate_al_zarar_bullet_left(int arr[2], int bullet[2][200]);
int removeBulletFromArray_al_zarar_right(int index, int bullet[2][200]);
int removeBulletFromArray_al_zarar_left(int index, int bullet[2][200]);
void printBullet_al_zarar(int x, int y);
int move_al_zarar_bullet_right(int bullet[2][200]);
int move_al_zarar_bullet_left(int bullet[2][200]);
void multi_level_score();


string direction_m1 = "right";
int khalid_tank_fire_m1 = 100;
int khalid_tank_health_m1 = 100;
string direction_m2 = "left";
int al_zarar_tank_fire_m2 = 100;
int al_zarar_tank_health_m2 = 100;
int bulletCount_al_zarar_right = 0;
int bulletCount_al_zarar_left = 0;
// Level 3
int bulletCount_raw = 0;
int raw_tank_health = 100;
int raw_tank_fire = 10000;
int tank_game_time = 30; 
//level 2
bool blastage = false;
int enemy_1_level_2 = 200; // Enemy One Health
int enemy_2_level_2 = 200; // Enemy Two Health
int enemy_3_level_2 = 200;
int khalid_tank_fire_level_2 = 1000;
int enemy_fire_one_level_2 = 400;
int enemy_fire_two_level_2 = 400;
int enemy_fire_three_level_2 = 400;
int bulletCount_level_2_right = 0;
int bulletCount_level_2_left = 0;
int bulletCount_level_2_up = 0;
int bullet_count_tank_1_enemy_level_2 = 0;
int bullet_count_tank_2_enemy_level_2 = 0;
int bullet_count_tank_3_enemy_level_2 = 0;
// Enemy Tank One Health Level One
int enemy_1 = 25; // Enemy One Health
int enemy_2 = 25; // Enemy Two Health
int khalid_tank_fire_level_1 = 50;
int enemy_fire_one = 20;
int enemy_fire_two = 20;
int enemy_one_health;
int columns_of_screen;
int rows_of_screen;
int bulletCount = 0;
int bullet_count_tank_1_enemy = 0;
int bullet_count_tank_2_enemy = 0;
// KHALID TANK and LEVELS
int level_of_tank_game = 1;
int khalid_tank_health = 100;
bool al_zarar = false;
string direction_level_2 = "right";
string tank_1 = "PAKISTAN";
string tank_2 = "AFGANISTAN";
main()
{
    char tank_level_option = '1';
    bool check_stage_pass;
    screen_size();
tank_game_starter:
    system("cls");
    cin >> tank_level_option;
    if (tank_level_option == '1')
    {
        check_stage_pass = level_one(tank_level_option);
        if (check_stage_pass == false)
        {
            goto tank_game_starter;
        }
        else if (check_stage_pass == true)
        {
            goto tank_game_starter;
        }
    }
    if (tank_level_option == '2')
    {
        check_stage_pass = level_two(tank_level_option);
        if (check_stage_pass == false)
        {
            goto tank_game_starter;
        }
        else if (check_stage_pass == true)
        {
            goto tank_game_starter;
        }
    }
    if (tank_level_option == '3')
    {
        check_stage_pass = level_three(tank_level_option);
        if (check_stage_pass == false)
        {
            goto tank_game_starter;
        }
        else if (check_stage_pass == true)
        {
            goto tank_game_starter;
        }
    }
    if (tank_level_option == '4')
    {
        check_stage_pass = multiplayer_game();
        if (check_stage_pass == false)
        {
            goto tank_game_starter;
        }
        else if (check_stage_pass == true)
        {
            goto tank_game_starter;
        }
    }
}
// LEVEL 3
bool level_three(char tank_level_option)
{   // Valueo Rewinder
    things_redefined();
    bulletCount_level_2_right = 0;
    bulletCount_level_2_left = 0;
    bulletCount_level_2_up = 0;
    khalid_tank_fire_level_2 = 20;
    khalid_tank_health = 100;
    level_of_tank_game = 3;
    int khalid_tank[2] = {7, rows_of_screen - 12};
    int bullet_left[2][200];
    int bullet_right[2][200];
    int bullet_up[2][200];
    int bullet_raw[2][200];
    // RAW LAST TANK
    int raw_tank_level_3[1][3] = {columns_of_screen - 60 , rows_of_screen/2 , 1};
    int count_forward,count_raw_fire,time_waste;
    count_forward = count_raw_fire = time_waste = 0;

    string direction = "right";
    string mover = "forward";
    if (tank_level_option == '3')
    {
        print_box_tank(rows_of_screen - 1, columns_of_screen);
        line_printer(0, 3);
        while(true)
        {  last_level_score();
            if (raw_tank_health <= 0)
            {
                level_of_tank_game++;
                Sleep(1000);
                level_end_shower("NEW JOURNEY IS WATING KASHMIR IS CONQURED");
                Sleep(1000);
                return true;
            }
            else if (khalid_tank_health <= 0 || tank_game_time <= 0)
            {
                level_end_shower("YOU LOST THE PLACE WHICH IS YOURS");
                Sleep(1000);
                return false;
            }
            if (GetAsyncKeyState(VK_LEFT))
            {
                move_tank_left(khalid_tank);
                direction_level_2 = "left";
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                move_tank_right(khalid_tank);
                direction_level_2 = "right";
            }
            if (GetAsyncKeyState(VK_UP) && khalid_tank[1] >= rows_of_screen / 2 - 5)
            {
                move_tank_up(khalid_tank);
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                move_tank_down(khalid_tank);
            }
            if (GetAsyncKeyState(VK_TAB) && khalid_tank_fire_level_2 > 0)
            {
                generate_khalid_bullet_up_level_2(khalid_tank, bullet_up);
                khalid_tank_fire_level_2--;
            }
            if (GetAsyncKeyState(VK_SPACE) && khalid_tank_fire_level_2 > 0)
            {
                if (direction_level_2 == "right")
                {
                    generate_khalid_bullet_right_level_2(khalid_tank, bullet_right);
                }
                else if (direction_level_2 == "left")
                {
                    generate_khalid_bullet_left_level_2(khalid_tank, bullet_left);
                }
                khalid_tank_fire_level_2--;
            }
            if(count_forward == 5 && mover == "forward")
            {
                raw_tank_level_3[0][0] = raw_tank_level_3[0][0] - 1;
                count_forward = 0;
            }
            else if(count_forward == 5 && mover == "backward")
            {
                raw_tank_level_3[0][0] = raw_tank_level_3[0][0] + 1;
                count_forward = 0;               
            }
            if(raw_tank_level_3[0][0] < columns_of_screen/4 + 1)
            {
                mover = "backward";
            }
            if(raw_tank_level_3[0][0] > columns_of_screen - 34)
            {
                mover = "forward";
            }
            if(count_raw_fire == 5)
            {
                generate_raw_bullet_left_level_3(raw_tank_level_3,bullet_raw);
                raw_tank_fire--;
                count_raw_fire = 0;
            }
            if(time_waste == 20)
            {
                tank_game_time--;
                time_waste = 0; 
            }
            move_bullet_left_raw(bullet_raw);
            move_raw_up_down(raw_tank_level_3);
            move_bullet_right(bullet_right);
            move_bullet_left(bullet_left);
            move_bullet_up(bullet_up);
            count_forward++;
            count_raw_fire++;
            time_waste++;
            Sleep(50);
            
        }
    }
}

// LEVEL 2
bool level_two(char tank_level_option)
{   // Valueo Rewinder
    things_redefined();
    //
    bool check_khalid_fire;
    level_of_tank_game = 2;
    int khalid_tank[2] = {2, rows_of_screen - 12};
    int indian_tank_one[1][3] = {columns_of_screen / 2 - 5, 10, 2};
    int indian_tank_two[1][3] = {columns_of_screen - 20, 30, 1};
    int afg_tank_one[1][3] = {10, 30, 1};
    int bullet_left[2][200];
    int bullet_right[2][200];
    int bullet_up[2][200];
    int indian_tank_one_bullets[2][200];
    int indian_tank_two_bullets[2][200];
    int afg_tank_bullets[2][200];
    int powers_timer = 0;
    int powers_number = 2;
    int time_count = 0;
    int count_fire_2 = 0;
    int afg_mover = 0;
    int count_afg = 0;
    bool activator = false;
    string direction = "right";
    if (tank_level_option == '2')
    {
        print_box_tank(rows_of_screen - 1, columns_of_screen);
        line_printer(0, 3);
        while (true)
        {
            print_details_of_health();
            if (enemy_1_level_2 <= 0 && enemy_2_level_2 <= 0 && enemy_3_level_2 <= 0)
            {
                level_of_tank_game++;
                Sleep(1000);
                level_end_shower("NEW JOURNEY IS WATING KARTA IS CONQURED");
                Sleep(1000);
                return true;
            }
            else if (khalid_tank_health <= 0)
            {
                level_end_shower("YOU LOST THE PLACE WHICH IS YOURS");
                Sleep(1000);
                return false;
            }
            if (khalid_tank[0] >= 35)
            {
                activator = true;
            }
            if (GetAsyncKeyState(VK_LEFT))
            {
                move_tank_left(khalid_tank);
                direction_level_2 = "left";
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                move_tank_right(khalid_tank);
                direction_level_2 = "right";
            }
            if (GetAsyncKeyState(VK_UP) && khalid_tank[1] >= rows_of_screen / 2 - 5)
            {
                move_tank_up(khalid_tank);
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                move_tank_down(khalid_tank);
            }
            if (GetAsyncKeyState(VK_TAB))
            {
                generate_khalid_bullet_up_level_2(khalid_tank, bullet_up);
                khalid_tank_fire_level_2--;
            }
            if (GetAsyncKeyState(VK_SPACE) && khalid_tank_fire_level_2 > 0)
            {
                if (direction_level_2 == "right")
                {
                    generate_khalid_bullet_right_level_2(khalid_tank, bullet_right);
                }
                else if (direction_level_2 == "left")
                {
                    generate_khalid_bullet_left_level_2(khalid_tank, bullet_left);
                }
                khalid_tank_fire_level_2--;
            }
            if (powers_timer == 100)
            {
                print_bullet_pills(powers_number);
                if (powers_number == 4)
                {
                    powers_number = 1;
                }
                powers_number++;
                powers_timer = 0;
            }
            if (time_count == 1 && (enemy_1_level_2 >= 0 || enemy_2_level_2 >= 0))
            {
                if (enemy_1_level_2 > 0)
                {
                    enemy_move_left_right(indian_tank_one);
                    if (khalid_tank[0] - indian_tank_one[0][0] >= -6 && khalid_tank[0] - indian_tank_one[0][0] <= 6)
                    {
                        generate_enemy_bullet_down(indian_tank_one, indian_tank_one_bullets);
                        enemy_fire_one_level_2 = enemy_fire_one_level_2 - 5;
                    }
                }
                else if (enemy_1_level_2 == 0)
                {
                    erase_enemy_level_two(indian_tank_one);
                }
                if (enemy_2_level_2 > 0)
                {
                    enemy_move_up_down(indian_tank_two);
                    if ((khalid_tank[1] - indian_tank_two[0][1] >= -1 && khalid_tank[1] - indian_tank_two[0][1] <= 1) && enemy_fire_two_level_2 > 0 && khalid_tank[0] > columns_of_screen / 2)
                    {
                        generate_enemy_bullet_left(indian_tank_two, indian_tank_two_bullets);
                        enemy_fire_two_level_2--;
                        count_fire_2 = 0;
                    }
                }
                count_fire_2++;
                time_count = 0;
            }
            if (afg_mover == 8 && enemy_1_level_2 <= 0 && activator == true && enemy_3_level_2 >= 0)
            {
                afg_move_smartly(afg_tank_one, khalid_tank);
                if(enemy_3_level_2 == 0)
                {
                    erase_tank_afg(afg_tank_one);
                }
            }
            if (count_afg == 4 && (khalid_tank[1] - afg_tank_one[0][1] >= -3 && khalid_tank[1] - afg_tank_one[0][1] <= 3) && activator == true && enemy_1_level_2 <= 0 && enemy_3_level_2 > 0)
            {
                generate_enemy_bullet_right_afg(afg_tank_one, afg_tank_bullets);
                enemy_fire_three_level_2--;
                count_afg = 0;
            }
            if (afg_mover > 8)
            {
                afg_mover = 0;
                count_afg = 0;
            }
            if(enemy_1_level_2 <= 0 && activator == true )
            {
                character_tank_afg(afg_tank_one);
            }
            move_enemy_bullet_right_afg(afg_tank_bullets, afg_tank_one);
            move_enemy_bullet_left(indian_tank_two_bullets, indian_tank_two);
            move_bullet_down(indian_tank_one_bullets, indian_tank_one);
            move_bullet_right(bullet_right);
            move_bullet_left(bullet_left);
            move_bullet_up(bullet_up);
            afg_mover++;
            powers_timer++;
            time_count++;
            count_afg++;
            Sleep(50);
        }
    }
}
// LEVEL 1
bool level_one(char tank_level_option)
{
    // valueo revinder
     khalid_tank_health = 100;
     enemy_1 = 25; // Enemy One Health
     enemy_2 = 25; // Enemy Two Health
     khalid_tank_fire_level_1 = 50;
     enemy_fire_one = 20;
     enemy_fire_two = 20;
     enemy_one_health;
     columns_of_screen;
     rows_of_screen;
     bulletCount = 0;
     bullet_count_tank_1_enemy = 0;
     bullet_count_tank_2_enemy = 0;
    //
    bool check_khalid_fire;
    khalid_tank_health = 100;
    level_of_tank_game = 1;
    int khalid_tank[2] = {2, rows_of_screen - 12};
    int indian_tank_one[2] = {columns_of_screen - 20, 10};
    int indian_tank_two[2] = {columns_of_screen - 20, 30};
    int bullet[2][200];
    int indian_tank_one_bullets[2][200];
    int indian_tank_two_bullets[2][200];
    int time_count = 0;
    if (tank_level_option == '1')
    {
        print_box_tank(rows_of_screen - 1, columns_of_screen);
        character_tank(khalid_tank);
        line_printer(0, 3);
        while (true)
        {
            if (enemy_1 <= 0 && enemy_2 <= 0)
            {
                int newer[2] = {columns_of_screen / 2 - 20, 25};
                level_of_tank_game++;
                print_tank_after_level_1(newer);
                Sleep(1000);
                level_end_shower("NEW JOURNEY IS WATING JAMMU IS CONQURED");
                Sleep(500);
                return true;
            }
            else if (khalid_tank_health <= 0)
            {
                level_end_shower("YOU LOST THE PLACE WHICH IS YOURS");
                Sleep(500);
                return false;
            }
            enemy_condition(indian_tank_one, indian_tank_two); // to print and erase enemy in case of firing
            print_details_of_health();
            if (GetAsyncKeyState(VK_LEFT))
            {
                move_tank_left(khalid_tank);
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                move_tank_right(khalid_tank);
            }
            if (GetAsyncKeyState(VK_UP))
            {
                move_tank_up(khalid_tank);
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                move_tank_down(khalid_tank);
            }
            if (GetAsyncKeyState(VK_SPACE) && khalid_tank_fire_level_1 > 0)
            {
                generate_khalid_bullet_right(khalid_tank, bullet);
                khalid_tank_fire_level_1--;
            }
            if (time_count == 3)
            {
                if (enemy_1 > 0 && (indian_tank_one[1] - khalid_tank[1] <= 0 && indian_tank_one[1] - khalid_tank[1] >= -5) && enemy_fire_one != 0)
                {
                    generate_indian_tank_bullet_left(indian_tank_one, indian_tank_one_bullets, 1);
                    enemy_fire_one--;
                }
                if (enemy_2 > 0 && (indian_tank_two[1] - khalid_tank[1] <= 0 && indian_tank_two[1] - khalid_tank[1] >= -5) && enemy_fire_two != 0)
                {
                    generate_indian_tank_bullet_left(indian_tank_two, indian_tank_two_bullets, 2);
                    enemy_fire_two--;
                }
                time_count = 0;
            }
            move_indian_tank_bullet_left(indian_tank_one_bullets, 1);
            move_indian_tank_bullet_left(indian_tank_two_bullets, 2);
            move_bullet(bullet);
            time_count++;
            Sleep(50);
        }
    }
}
// Enemy Tank
void print_enemy_tank(int arr[2])
{
    int enemy_x = arr[0];
    int enemy_y = arr[1];
    char enemies_tank[5][10] = {{' ', ' ', ' ', ' ', char(201), '=', '=', '=', '=', char(187)},
                                {' ', ' ', ' ', ' ', char(204), ' ', 'I', 'N', ' ', char(204)},
                                {'[', '=', '=', '=', char(204), ' ', 'D', 'I', ' ', char(204)},
                                {' ', ' ', ' ', ' ', char(204), ' ', 'A', 'N', ' ', char(204)},
                                {' ', ' ', ' ', ' ', char(200), '=', '=', '=', '=', char(188)}};

    for (int i = 0; i < 5; i++)
    {
        gotoxy(enemy_x, enemy_y);
        for (int j = 0; j < 10; j++)
        {
            cout << "\33[33m" << enemies_tank[i][j];
        }
        enemy_y++;
    }
}
// Erase Enemy Tank
void erase_enemy_tank(int arr[2])
{
    int enemy_x = arr[0];
    int enemy_y = arr[1];
    for (int i = 0; i < 5; i++)
    {
        gotoxy(enemy_x, enemy_y);
        for (int j = 0; j < 10; j++)
        {
            cout << " ";
        }
        enemy_y++;
    }
}
// generate Bullet
int generate_khalid_bullet_right(int arr[2], int bullet[2][200])
{
    bullet[0][bulletCount] = arr[0] + 22;
    bullet[1][bulletCount] = arr[1] + 2;
    gotoxy(arr[0] + 22, arr[1] + 2);
    cout << "o";
    // gotoxy(arr[0] + 22 , arr[1] + 3);
    // cout<<"o";
    bulletCount++;
    return bullet[1][1];
}
// Remove Bullet From Array
int removeBulletFromArray(int index, int bullet[2][200])
{
    for (int x = index; x < bulletCount - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bulletCount--;
    return bullet[0][1];
}
// Move Bullets in Array
int move_bullet(int bullet[2][200])
{
    for (int x = 0; x < bulletCount; x++)
    {
        char next[2];
        next[0] = getCharAtxy(bullet[0][x] + 2, bullet[1][x] + 1);
        next[1] = getCharAtxy(bullet[0][x] + 2, bullet[1][x] + 2);
        if (next[0] != ' ' && next[1] != ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray(x, bullet);
        }
        else
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] + 1;
            printBullet(bullet[0][x], bullet[1][x]);
        }
        if (next[0] == '<' && next[1] == '<')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] + 1;
            printBullet(bullet[0][x], bullet[1][x]);
        }
        enemy_sides_check(next, bullet, x);
    }
    return bullet[0][1];
}
// Erase and Print Bullet
void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << "o";
    // gotoxy(x, y + 1);
    // cout << "o";
}
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
// Move Tank Left
int move_tank_left(int arr[2])
{
    bool check = to_check_tank_sides(arr, "left");
    if (level_of_tank_game == 1)
    {
        if (check)
        {
            erase_tank(arr);
            arr[0] = arr[0] - 1;
            character_tank(arr);
        }

        return arr[1];
    }
    if (level_of_tank_game == 2 || level_of_tank_game == 3 )
    {
        if (check)
        {
            erase_level_2_tank(arr);
            arr[0] = arr[0] - 1;
            print_tank_after_level_1_left(arr);
        }
        return arr[1];
    }
}
// Move Tank Right
int move_tank_right(int arr[2])
{
    bool check = to_check_tank_sides(arr, "right");
    if (level_of_tank_game == 1)
    {
        if (check)
        {
            erase_tank(arr);
            arr[0] = arr[0] + 1;
            character_tank(arr);
        }
        return arr[1];
    }
    if (level_of_tank_game == 2 || level_of_tank_game == 3)
    {
        if (check)
        {
            erase_level_2_tank(arr);
            arr[0] = arr[0] + 1;
            print_tank_after_level_1(arr);
        }
        return arr[1];
    }
}
// Move Tank Up
int move_tank_up(int arr[2])
{

    bool check = to_check_tank_sides(arr, "up");
    if (level_of_tank_game == 1)
    {
        if (check)
        {
            erase_tank(arr);
            arr[1] = arr[1] - 1;
            character_tank(arr);
        }
        return arr[1];
    }
    if (level_of_tank_game == 2 || level_of_tank_game == 3)
    {
        if (check)
        {
            erase_level_2_tank(arr);
            arr[1] = arr[1] - 1;
            if (direction_level_2 == "right")
            {
                print_tank_after_level_1(arr);
            }
            if (direction_level_2 == "left")
            {
                print_tank_after_level_1_left(arr);
            }
        }
        return arr[1];
    }
}
// Move Tank Down
int move_tank_down(int arr[2])
{

    bool check = to_check_tank_sides(arr, "down");
    if (level_of_tank_game == 1)
    {
        if (check)
        {
            erase_tank(arr);
            arr[1] = arr[1] + 1;
            character_tank(arr);
        }
        return arr[1];
    }
    if (level_of_tank_game == 2 || level_of_tank_game == 3)
    {
        if (check)
        {
            erase_level_2_tank(arr);
            arr[1] = arr[1] + 1;
            if (direction_level_2 == "right")
            {
                print_tank_after_level_1(arr);
            }
            if (direction_level_2 == "left")
            {
                print_tank_after_level_1_left(arr);
            }
        }
        return arr[1];
    }
}
// Print Box
void print_box_tank(int rows, int columns)
{
    system("cls");
    gotoxy(0, 8);
    for (int i = 10; i <= rows + 1; i++)
    {

        for (int j = 0; j <= columns - 1; j++)
        {
            if (i == 10 || i == rows + 1 || j == 0 || j == columns - 1)
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int screen_size()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns_of_screen = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows_of_screen = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    return 0;
}
void character_tank(int arr[2])
{
    int x_axis = arr[0];
    int y_axis = arr[1];
    char character[6][22] = {{char(201), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(187), ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                             {char(204), '|', ' ', '|', ' ', ' ', char(178), char(178), char(178), ' ', '|', ' ', '|', ' ', char(93), ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                             {char(204), '\\', '\\', ' ', ' ', ' ', ' ', char(178), ' ', ' ', ' ', '\\', '\\', ' ', char(204), '#', '#', '#', '#', '#', '#', ']'},
                             {char(204), '/', '/', ' ', ' ', ' ', tank_1[0], tank_1[1], tank_1[2], ' ', ' ', '/', '/', ' ', char(204), '#', '#', '#', '#', '#', '#', ']'},
                             {char(204), '|', ' ', '|', ' ', ' ', ' ', char(178), ' ', ' ', '|', ' ', '|', ' ', char(93), ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                             {char(200), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(205), char(188), ' ', ' ', ' ', ' ', ' ', ' ', ' '}};
    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 22; j++)
        {
            gotoxy(x_axis + j, y_axis + i);
            cout << character[i][j];
        }
    }
}
// Erase Tank
void erase_tank(int arr[2])
{
    int x_axis = arr[0];
    int y_axis = arr[1];
    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 22; j++)
        {
            gotoxy(x_axis + j, y_axis + i);
            cout << " ";
        }
    }
}
// GOTOXY
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
// GETCHAR
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufsize;
    coordBufsize.X = 1;
    coordBufsize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
// To check next positions of tanks
bool to_check_tank_sides(int arr[2], string direction)
{
    if (direction == "up")
    {
        char next;
        bool check = true;
        for (int i = 0; i < 22; i++)
        {
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == '#' || next == '=' || next == '"')
            {
                check = false;
                break;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(135) && level_of_tank_game >= 2)
            {
                khalid_tank_health = khalid_tank_health + 20;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(174) && level_of_tank_game >= 2)
            {
                khalid_tank_fire_level_2 = khalid_tank_fire_level_2 + 10;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(164) && level_of_tank_game >= 2)
            {
                blastage = true;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(216) && level_of_tank_game >= 2)
            {
                khalid_tank_health = khalid_tank_health - 30;
            }
        }
        return check;
    }
    if (direction == "down")
    {
        char next;
        bool check = true;
        for (int i = 0; i < 22; i++)
        {
            if ((next = getCharAtxy(arr[0] + i, arr[1] + 6)) == '#' || next == '=' || next == '"')
            {
                check = false;
                break;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(135) && level_of_tank_game >= 2)
            {
                khalid_tank_health = khalid_tank_health + 20;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(174) && level_of_tank_game >= 2)
            {
                khalid_tank_fire_level_2 = khalid_tank_fire_level_2 + 10;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(164) && level_of_tank_game >= 2)
            {
                blastage = true;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(216) && level_of_tank_game >= 2)
            {
                khalid_tank_health = khalid_tank_health - 30;
            }
        }
        return check;
    }
    if (direction == "right")
    {
        char next;
        bool check = true;
        for (int i = 0; i < 6; i++)
        {
            if ((next = getCharAtxy(arr[0] + 22, arr[1] + i)) == '#' || next == '=' || next == '"')
            {
                check = false;
                break;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(135) && level_of_tank_game >= 2)
            {
                khalid_tank_health = khalid_tank_health + 20;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(174) && level_of_tank_game >= 2)
            {
                khalid_tank_fire_level_2 = khalid_tank_fire_level_2 + 10;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(164) && level_of_tank_game >= 2)
            {
                blastage = true;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(216) && level_of_tank_game >= 2)
            {
                khalid_tank_health = khalid_tank_health - 30;
            }
        }
        return check;
    }
    if (direction == "left")
    {
        char next;
        bool check = true;
        for (int i = 0; i < 6; i++)
        {
            if ((next = getCharAtxy(arr[0] - 2, arr[1] - i)) == '#' || next == '=' || next == '"')
            {
                check = false;
                break;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(135) && level_of_tank_game >= 2)
            {
                khalid_tank_health = khalid_tank_health + 20;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(174) && level_of_tank_game >= 2)
            {
                khalid_tank_fire_level_2 = khalid_tank_fire_level_2 + 10;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(164) && level_of_tank_game >= 2)
            {
                blastage = true;
            }
            if ((next = getCharAtxy(arr[0] + i, arr[1] - 1)) == char(216) && level_of_tank_game >= 2)
            {
                khalid_tank_health = khalid_tank_health - 30;
            }
        }
        return check;
    }
}
// Enemy Sides Checker
int enemy_sides_check(char next[2], int arr[2][200], int index)
{
    if (next[0] == char(204) || next[0] == char(201) || next[0] == char(200) || next[0] == '[' || next[1] == char(204) || next[1] == char(201) || next[1] == char(200) || next[1] == '[' || next[1] == '\\' || next[1] == '-')
    {
        for (int i = 10; i < 15; i++)
        {
            if (arr[1][index] == i)
            {
                enemy_1 = enemy_1 - 5;
                break;
            }
        }
        for (int i = 30; i < 35; i++)
        {
            if (arr[1][index] == i || next[0] == 'I' || next[0] == 'D' || next[0] == 'A')
            {
                enemy_2 = enemy_2 - 5;
                break;
            }
        }
    }
    return 0;
}
// Enemy Sides Checker level two
int enemy_sides_check_level_2(char next[2], int arr[2][200], int index)
{
    if (next[0] == char(204) || next[0] == char(201) || next[0] == char(200) || next[0] == '[' || next[1] == char(204) || next[1] == char(201) || next[1] == char(200) || next[1] == '[' || next[1] == '\\' || next[1] == '-')
    {
        enemy_2_level_2 = enemy_2_level_2 - 5;
    }
    return 0;
}

// enemy Printer
int enemy_condition(int arr[2], int arr_1[2])
{
    if (enemy_1 > 1)
    {
        print_enemy_tank(arr);
    }
    else if (enemy_1 == 0)
    {
        erase_enemy_tank(arr);
        enemy_1--;
    }
    if (enemy_2 > 1)
    {
        print_enemy_tank(arr_1);
    }
    else if (enemy_2 == 0)
    {
        erase_enemy_tank(arr_1);
        enemy_2--;
    }
    return 0;
}
int generate_indian_tank_bullet_left(int arr[2], int bullet[2][200], int number)
{
    if (number == 1)
    {
        bullet[0][bullet_count_tank_1_enemy] = arr[0] - 1;
        bullet[1][bullet_count_tank_1_enemy] = arr[1] + 2;
        gotoxy(arr[0] - 1, arr[1] + 2);
        cout << "<";
        bullet_count_tank_1_enemy++;
        return bullet[2][2];
    }
    if (number == 2)
    {
        bullet[0][bullet_count_tank_2_enemy] = arr[0] - 1;
        bullet[1][bullet_count_tank_2_enemy] = arr[1] + 2;
        gotoxy(arr[0] - 1, arr[1] + 2);
        cout << "<";
        bullet_count_tank_2_enemy++;
        return bullet[2][2];
    }
    return 0;
}
int move_indian_tank_bullet_left(int bullet[2][200], int number)
{
    // First tank
    if (number == 1)
    {
        for (int x = 0; x < bullet_count_tank_1_enemy; x++)
        {
            char next[2];
            next[0] = getCharAtxy(bullet[0][x] - 1, bullet[1][x] + 1);
            next[1] = getCharAtxy(bullet[0][x] - 1, bullet[1][x] + 2);
            if (next[1] != ' ')
            {
                erase_enemy_bullet(bullet[0][x], bullet[1][x]);
                removeBulletFromArray_tank_enemy(x, bullet, number);
            }
            else
            {
                erase_enemy_bullet(bullet[0][x], bullet[1][x]);
                bullet[0][x] = bullet[0][x] - 1;
                print_enemy_bullet(bullet[0][x], bullet[1][x]);
            }
            khalid_tank_sides_check(next, bullet, x);
        }
        return bullet[0][1];
    }
    // Second tank
    if (number == 2)
    {
        for (int x = 0; x < bullet_count_tank_2_enemy; x++)
        {
            char next[2];
            next[0] = getCharAtxy(bullet[0][x] - 1, bullet[1][x] + 1);
            next[1] = getCharAtxy(bullet[0][x] - 1, bullet[1][x] + 2);
            if (next[1] != ' ')
            {
                erase_enemy_bullet(bullet[0][x], bullet[1][x]);
                removeBulletFromArray_tank_enemy(x, bullet, number);
            }
            else
            {
                erase_enemy_bullet(bullet[0][x], bullet[1][x]);
                bullet[0][x] = bullet[0][x] - 1;
                print_enemy_bullet(bullet[0][x], bullet[1][x]);
            }
            khalid_tank_sides_check(next, bullet, x);
        }
        return bullet[0][1];
    }
    return 0;
}
int removeBulletFromArray_tank_enemy(int index, int bullet[2][200], int number)
{
    if (number == 1)
    {
        for (int x = index; x < bulletCount - 1; x++)
        {
            bullet[0][x] = bullet[0][x + 1];
            bullet[1][x] = bullet[1][x + 1];
        }
        bullet_count_tank_1_enemy--;
        return bullet[0][1];
    }
    if (number == 2)
    {
        for (int x = index; x < bulletCount - 1; x++)
        {
            bullet[0][x] = bullet[0][x + 1];
            bullet[1][x] = bullet[1][x + 1];
        }
        bullet_count_tank_2_enemy--;
        return bullet[0][1];
    }
    return 0;
}
void print_enemy_bullet(int x, int y)
{
    gotoxy(x, y);
    cout << "<";
}
void erase_enemy_bullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
int khalid_tank_sides_check(char next[2], int arr[2][200], int index)
{
    if (next[1] == char(187) || next[1] == ']' || next[1] == char(188) || next[1] == char(93))
    {
        khalid_tank_health = khalid_tank_health - 5;
    }
    return 1;
}
// Line Printer
void line_printer(int x, int y)
{
    gotoxy(x, y);
    for (int i = 0; i < columns_of_screen; i++)
    {
        cout << char(178);
    }
}
// sMALL lINE pRINTER
void small_line_printer(int x, int y)
{
    gotoxy(x, y);
    for (int i = 0; i < columns_of_screen / 3; i++)
    {
        cout << char(178);
    }
}
// print Details of HEalth Level one
int print_details_of_health()
{
    if (level_of_tank_game == 1)
    {
        gotoxy(18, 5);
        cout << "KHALID TANK HEALTH:                        ";
        gotoxy(18, 5);
        cout << "KHALID TANK HEALTH: " << khalid_tank_health;
        gotoxy(18, 6);
        cout << "KHALID TANK :                       ";
        gotoxy(18, 6);
        cout << "KHALID TANK FIRE: " << khalid_tank_fire_level_1;
        gotoxy(48, 5);
        cout << "INDIAN TANK ONE HEALTH:                        ";
        gotoxy(48, 5);
        cout << "INDIAN TANK ONE HEALTH: " << enemy_1;
        gotoxy(48, 6);
        cout << "INDIAN TANK ONE HEALTH:                       ";
        gotoxy(48, 6);
        cout << "INDIAN TANK ONE FIRE: " << enemy_fire_one;
        gotoxy(78, 5);
        cout << "INDIAN TANK TWO HEALTH:                        ";
        gotoxy(78, 5);
        cout << "INDIAN TANK TWO HEALTH: " << enemy_2;
        gotoxy(78, 6);
        cout << "INDIAN TANK TWO HEALTH:                       ";
        gotoxy(78, 6);
        cout << "INDIAN TANK TWO FIRE: " << enemy_fire_two;
    }
    if (level_of_tank_game == 2)
    {
        gotoxy(18, 5);
        cout << "KHALID TANK HEALTH:                        ";
        gotoxy(18, 5);
        cout << "KHALID TANK HEALTH: " << khalid_tank_health;
        gotoxy(18, 6);
        cout << "KHALID TANK :                       ";
        gotoxy(18, 6);
        cout << "KHALID TANK FIRE: " << khalid_tank_fire_level_2;
        gotoxy(48, 5);
        cout << "INDIAN TANK ONE HEALTH:                        ";
        gotoxy(48, 5);
        cout << "INDIAN TANK ONE HEALTH: " << enemy_1_level_2;
        gotoxy(48, 6);
        cout << "INDIAN TANK ONE HEALTH:                       ";
        gotoxy(48, 6);
        cout << "INDIAN TANK ONE FIRE: " << enemy_fire_one_level_2;
        gotoxy(78, 5);
        cout << "INDIAN TANK TWO HEALTH:                        ";
        gotoxy(78, 5);
        cout << "INDIAN TANK TWO HEALTH: " << enemy_2_level_2;
        gotoxy(78, 6);
        cout << "INDIAN TANK TWO FIRE:                       ";
        gotoxy(78, 6);
        cout << "INDIAN TANK TWO FIRE: " << enemy_fire_two_level_2;
        gotoxy(108, 5);
        cout << "AFG TANK HEALTH:                       ";
        gotoxy(108, 5);
        cout << "AFG TANK HEALTH: " << enemy_3_level_2;
        gotoxy(108, 6);
        cout << "AFG TANK FIRE:                                 ";
        gotoxy(108, 6);
        cout << "AFG TANK FIRE: " << enemy_fire_three_level_2;
    }
}
/*                                        LEVEL TWO WORK START                                                                      */
// level one passing tank
void print_tank_after_level_1(int arr[2])
{
    int x_axis = arr[0];
    int y_axis = arr[1];
    char second_level_tank[4][15] =
        {{' ', ' ', ' ', ' ', ' ', '_', ':', '_', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
         {' ', ' ', ' ', '_', '(', ' ', ' ', ' ', ')', '=', '=', '=', '=', ':', ':'},
         {' ', ' ', '/', '~', '~', '~', '~', '~', '~', '~', '~', '~', '\\', ' ', ' '},
         {' ', ' ', '\\', 'O', '.', 'O', '.', 'O', '.', 'O', '.', 'O', '/', ' ', ' '}};
    for (int i = 0; i < 4; i++)
    {
        gotoxy(x_axis, y_axis + i);
        for (int j = 0; j < 15; j++)
        {
            cout << "\33[32m" << second_level_tank[i][j];
        }
    }
}
// Left
void print_tank_after_level_1_left(int arr[2])
{
    int x_axis = arr[0];
    int y_axis = arr[1];
    char second_level_tank[4][15] =
        {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '_', ':', '_', ' ', ' ', ' ', ' '},
         {':', ':', '=', '=', '=', '=', '=', '(', ' ', ' ', ' ', ')', ' ', ' ', ' '},
         {' ', ' ', '/', '~', '~', '~', '~', '~', '~', '~', '~', '~', '\\', ' ', ' '},
         {' ', ' ', '\\', 'O', '.', 'O', '.', 'O', '.', 'O', '.', 'O', '/', ' ', ' '}};
    for (int i = 0; i < 4; i++)
    {
        gotoxy(x_axis, y_axis + i);
        for (int j = 0; j < 15; j++)
        {
            cout << "\33[32m" << second_level_tank[i][j];
        }
    }
}
// Level TWO TANK Eraser
void erase_level_2_tank(int arr[2])
{
    int x_axis = arr[0];
    int y_axis = arr[1];
    for (int i = 0; i < 4; i++)
    {
        gotoxy(x_axis, y_axis + i);
        for (int j = 0; j < 15; j++)
        {
            cout << " ";
        }
    }
}
// Level Ender
void level_end_shower(string line)
{
    small_line_printer(columns_of_screen / 2 - 30, rows_of_screen / 2);
    gotoxy(columns_of_screen / 2 - 20, rows_of_screen / 2 + 2);
    cout << line;
    small_line_printer(columns_of_screen / 2 - 30, rows_of_screen / 2 + 4);
}
// Level 2 Generate Bullets
int generate_khalid_bullet_right_level_2(int arr[2], int bullet[2][200])
{
    bullet[0][bulletCount_level_2_right] = arr[0] + 16;
    bullet[1][bulletCount_level_2_right] = arr[1] + 1;
    gotoxy(arr[0] + 16, arr[1] + 1);
    cout << char(175);
    bulletCount_level_2_right++;
    return bullet[1][1];
}
// LEFT LEVEL KHALID
int generate_khalid_bullet_left_level_2(int arr[2], int bullet[2][200])
{
    bullet[0][bulletCount_level_2_left] = arr[0] - 1;
    bullet[1][bulletCount_level_2_left] = arr[1] + 1;
    gotoxy(arr[0] - 1, arr[1] + 1);
    cout << char(174);
    bulletCount_level_2_left++;
    return bullet[1][1];
}
// UP LEVEL KHALID
int generate_khalid_bullet_up_level_2(int arr[2], int bullet[2][200])
{
    bullet[0][bulletCount_level_2_up] = arr[0] + 6;
    bullet[1][bulletCount_level_2_up] = arr[1] - 1;
    gotoxy(arr[0] + 6, arr[1] - 1);
    cout << "^";
    bulletCount_level_2_up++;
    return bullet[1][1];
}
// Remove Bullet From Array Left
int removeBulletFromArray_level_2_right(int index, int bullet[2][200])
{
    for (int x = index; x < bulletCount_level_2_right - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bulletCount_level_2_right--;
    return bullet[0][1];
}
// Remove Bullet From Array Right
int removeBulletFromArray_level_2_left(int index, int bullet[2][200])
{
    for (int x = index; x < bulletCount_level_2_left - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bulletCount_level_2_left--;
    return bullet[0][1];
}
// Remove Bullet From Array UP
int removeBulletFromArray_level_2_up(int index, int bullet[2][200])
{
    for (int x = index; x < bulletCount_level_2_up - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bulletCount_level_2_up--;
    return bullet[0][1];
}
void printBullet_right(int x, int y)
{
    gotoxy(x, y);
    cout << char(175);
}
void printBullet_up(int x, int y)
{
    gotoxy(x, y);
    cout << "^";
}
void printBullet_left(int x, int y)
{
    gotoxy(x, y);
    cout << char(174);
}
int move_bullet_right(int bullet[2][200])
{
    for (int x = 0; x < bulletCount_level_2_right; x++)
    {
        char next[2];
        next[0] = getCharAtxy(bullet[0][x] + 1, bullet[1][x]);
        if (next[0] != ' ' )
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_level_2_right(x, bullet);
            if(level_of_tank_game == 3 && (next[0] == 'C' || next[0] == '_' || next[0] == '/' || next[0] == '\\' || next[0] == '=' || next[0] == '|'))
            {
                raw_tank_health = raw_tank_health - 10;
            }
            if (next[0] == '.' || next[0] == '{' || next[0] == '}')
            {
                enemy_3_level_2 = enemy_3_level_2 - 5;
            }
            if(al_zarar == true && (next[0] == ':' || next[0] == '_' || next[0] == '\\' || next[0] == '/' || next[0] == ')' ))
            {
                al_zarar_tank_health_m2 = al_zarar_tank_health_m2 - 5;
            }
        }
        else
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] + 1;
            printBullet_right(bullet[0][x], bullet[1][x]);
        }
        if (next[0] == '*' && next[1] == '*')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] + 1;
            printBullet_right(bullet[0][x], bullet[1][x]);
        }

        enemy_sides_check_level_2(next, bullet, x);
    }
    return bullet[0][1];
}
int move_bullet_up(int bullet[2][200])
{
    for (int x = 0; x < bulletCount_level_2_up; x++)
    {
        char next[13];
        next[0] = getCharAtxy(bullet[0][x], bullet[1][x] - 1);
        next[1] = getCharAtxy(bullet[0][x] + 1, bullet[1][x] - 1);
        next[2] = getCharAtxy(bullet[0][x] + 2, bullet[1][x] - 1);
        next[3] = getCharAtxy(bullet[0][x] + 3, bullet[1][x] - 1);
        next[4] = getCharAtxy(bullet[0][x] + 4, bullet[1][x] - 1);
        next[5] = getCharAtxy(bullet[0][x] + 5, bullet[1][x] - 1);
        next[6] = getCharAtxy(bullet[0][x] + 6, bullet[1][x] - 1);
        next[7] = getCharAtxy(bullet[0][x] + 7, bullet[1][x] - 1);
        next[8] = getCharAtxy(bullet[0][x] + 8, bullet[1][x] - 1);
        next[9] = getCharAtxy(bullet[0][x] + 9, bullet[1][x] - 1);
        next[10] = getCharAtxy(bullet[0][x] + 10, bullet[1][x] - 1);
        next[11] = getCharAtxy(bullet[0][x] + 11, bullet[1][x] - 1);
        next[12] = getCharAtxy(bullet[0][x] + 12, bullet[1][x] - 1);

        check_sider(next, 1);
        if (next[0] != ' ' && next[1] != ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_level_2_up(x, bullet);
        }
        else
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[1][x] = bullet[1][x] - 1;
            printBullet_up(bullet[0][x], bullet[1][x]);
        }
        if (next[0] == '*' && next[1] == '*')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[1][x] = bullet[1][x] - 1;
            printBullet_up(bullet[0][x], bullet[1][x]);
        }
    }
    return bullet[0][1];
}
int move_bullet_left(int bullet[2][200])
{
    for (int x = 0; x < bulletCount_level_2_left; x++)
    {
        char next[2];
        next[0] = getCharAtxy(bullet[0][x] - 1, bullet[1][x] + 1);
        next[1] = getCharAtxy(bullet[0][x] - 1, bullet[1][x]);
        if (next[0] != ' ' && next[1] != ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_level_2_left(x, bullet);
            if (next[0] == 'D' || next[0] == '{' || next[0] == '}' || next[1] == 'D' || next[1] == '{' || next[1] == '}')
            {
                enemy_3_level_2 = enemy_3_level_2 - 5;
            }
            if(al_zarar == true && (next[0] == ':' || next[0] == '_' || next[0] == '\\' || next[0] == '/' || next[0] == ')' ))
            {
                al_zarar_tank_health_m2 = al_zarar_tank_health_m2 - 5;
            }
        }
        else
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] - 1;
            printBullet_left(bullet[0][x], bullet[1][x]);
        }
        if (next[0] == '*' && next[1] == '*')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] - 1;
            printBullet_left(bullet[0][x], bullet[1][x]);
        }
        enemy_sides_check(next, bullet, x);
    }
    return bullet[0][1];
}
// bullet Pills Printer
void print_bullet_pills(int n)
{
    if (n == 1) // increase bullet
    {
        gotoxy(40, 24);
        cout << "[" << char(135) << "]";
    }
    if (n == 2) // increase health
    {
        gotoxy(rows_of_screen, rows_of_screen / 2 - 5);
        cout << "[" << char(174) << "]";
    }
    if (n == 3) // Distroy Others tank
    {
        gotoxy(67, 17);
        cout << char(164);
    }
    if (n == 4) // BOMB Distroy own Tank
    {
        gotoxy(75, 17);
        cout << char(216);
    }
}
// Enemy Level 2
void print_right_left_moving_enemy(int arr[1][3])
{
    int x_axis = arr[0][0];
    int y_axis = arr[0][1];
    char enemy[4][13] = {{' ', ' ', ' ', ' ', '_', '_', '_', '_', '_', ' ', ' ', ' ', ' '},
                         {' ', '_', '_', '|', '_', '>', 'o', '<', '_', '|', '_', '_', ' '},
                         {'/', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '\\'},
                         {'\\', '\\', '=', '\\', '>', '-', '-', '-', '-', '<', '/', '=', '/'}};
    for (int i = 0; i < 4; i++)
    {
        gotoxy(x_axis, y_axis + i);
        for (int j = 0; j < 13; j++)
        {
            cout << enemy[i][j];
        }
    }
}
// Erase ENEMY
void erase_enemy_level_two(int arr[1][3])
{
    int x_axis = arr[0][0];
    int y_axis = arr[0][1];
    for (int i = 0; i < 5; i++)
    {
        gotoxy(x_axis, y_axis + i);
        for (int j = 0; j < 13; j++)
        {
            cout << " ";
        }
    }
}
// enemy move right left
int enemy_move_left_right(int arr[1][3]) // x-axis , y-axis , right or left
{
    if (arr[0][2] == 1) // Right
    {
        char nextLocation = getCharAtxy(arr[0][0] + 13, arr[0][1]);
        char nextLocation1 = getCharAtxy(arr[0][0] + 13, arr[0][1] + 1);
        char nextLocation2 = getCharAtxy(arr[0][0] + 13, arr[0][1] + 2);
        char nextLocation3 = getCharAtxy(arr[0][0] + 13, arr[0][1] + 3);

        if (nextLocation == char(174) || nextLocation1 == char(174) || nextLocation2 == char(174) || nextLocation3 == char(174))
        {
            enemy_1_level_2 = enemy_1_level_2 - 5;
        }
        if (nextLocation != '#' && nextLocation1 != '#' && nextLocation2 != '#' && nextLocation != ':' && nextLocation1 != ':' && nextLocation2 != ':' && nextLocation != '/' && nextLocation1 != '/' && nextLocation2 != '/' && nextLocation != '>' && nextLocation1 != '>' && nextLocation2 != '>')
        {
            erase_enemy_level_two(arr);
            arr[0][0] = arr[0][0] + 1;
            print_right_left_moving_enemy(arr);
        }
        if ((nextLocation != ' ' && nextLocation1 != ' ' && nextLocation2 != ' ') || arr[0][0] == columns_of_screen / 2 + 20)
        {
            arr[0][2] = 2; // to move left
        }
    }

    if (arr[0][2] == 2) // LEFT
    {

        char nextLocation1 = getCharAtxy(arr[0][0] - 1, arr[0][1]);
        char nextLocation = getCharAtxy(arr[0][0] - 1, arr[0][1] + 1);
        char nextLocation2 = getCharAtxy(arr[0][0] - 1, arr[0][1] + 2);

        if (nextLocation == char(175) || nextLocation1 == char(175) || nextLocation2 == char(175))
        {
            enemy_1_level_2 = enemy_1_level_2 - 5;
        }
        if (nextLocation != '#' && nextLocation1 != '#' && nextLocation2 != '#' && nextLocation != ':' && nextLocation1 != ':' && nextLocation2 != ':' && nextLocation != '\\' && nextLocation1 != '\\' && nextLocation2 != '\\')
        {
            erase_enemy_level_two(arr);
            arr[0][0] = arr[0][0] - 1;
            print_right_left_moving_enemy(arr);
        }
        if (nextLocation != ' ' && nextLocation1 != ' ' && nextLocation2 != ' ')
        {
            arr[0][2] = 1;
        }
    }
    return arr[0][2];
}
// Generate Enemy Bullets
int generate_enemy_bullet_down(int arr[1][3], int bullet[2][200])
{
    bullet[0][bullet_count_tank_1_enemy_level_2] = arr[0][0] + 7;
    bullet[1][bullet_count_tank_1_enemy_level_2] = arr[0][1] + 5;
    gotoxy(arr[0][0] + 7, arr[0][1] + 5);
    cout << "*";
    bullet_count_tank_1_enemy_level_2++;
    return bullet[1][2];
}
// Generate Enemy Bullets
int generate_enemy_bullet_left(int arr[1][3], int bullet[2][200])
{
    bullet[0][bullet_count_tank_2_enemy_level_2] = arr[0][0] - 1;
    bullet[1][bullet_count_tank_2_enemy_level_2] = arr[0][1] + 2;
    gotoxy(arr[0][0] - 1, arr[0][1] + 2);
    cout << "*";
    bullet_count_tank_2_enemy_level_2++;
    return bullet[1][2];
}
// Generate Enemy Bullets Right
int generate_enemy_bullet_right_afg(int arr[1][3], int bullet[2][200])
{
    bullet[0][bullet_count_tank_3_enemy_level_2] = arr[0][0] + 16;
    bullet[1][bullet_count_tank_3_enemy_level_2] = arr[0][1];
    gotoxy(arr[0][0] + 16, arr[0][1]);
    cout << "*";
    bullet_count_tank_3_enemy_level_2++;
    return bullet[1][2];
}
// Move BULLET Right AFG
int move_enemy_bullet_right_afg(int bullet[2][200], int arr[1][3])
{
    for (int x = 0; x < bullet_count_tank_3_enemy_level_2; x++)
    {

        char next[5];
        next[0] = getCharAtxy(bullet[0][x] + 1, bullet[1][x]);
        next[1] = getCharAtxy(bullet[0][x] + 1, bullet[1][x]);
        next[2] = getCharAtxy(bullet[0][x] + 1, bullet[1][x]);
        next[3] = getCharAtxy(bullet[0][x] + 1, bullet[1][x]);
        next[4] = getCharAtxy(bullet[0][x] + 1, bullet[1][x]);
        to_check_upper_side_tank(3, next);
        if (next[0] != ' ' || next[1] != ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_level_2_enemy_right_afg(x, bullet);
        }
        else if (next[0] == ' ' || next[1] == ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] + 1;
            bullet[1][x] = bullet[1][x];
            printBullet_down_enemy(bullet[0][x], bullet[1][x]);
        }
    }
    return bullet[0][1];
}
// Move BULLET LEFT
int move_enemy_bullet_left(int bullet[2][200], int arr[1][3])
{
    for (int x = 0; x < bullet_count_tank_2_enemy_level_2; x++)
    {

        char next[5];
        next[0] = getCharAtxy(bullet[0][x] - 1, bullet[1][x]);
        next[1] = getCharAtxy(bullet[0][x] - 1, bullet[1][x]);
        next[2] = getCharAtxy(bullet[0][x] - 1, bullet[1][x]);
        next[3] = getCharAtxy(bullet[0][x] - 1, bullet[1][x]);
        next[4] = getCharAtxy(bullet[0][x] - 1, bullet[1][x]);
        to_check_upper_side_tank(3, next);
        if (next[0] != ' ' && next[1] != ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_level_2_enemy_left(x, bullet);
        }
        else if (next[0] == ' ' && next[1] == ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] - 1;
            bullet[1][x] = bullet[1][x];
            printBullet_down_enemy(bullet[0][x], bullet[1][x]);
        }
    }
    return bullet[0][1];
}
// ENEMY TWO THINGS
int removeBulletFromArray_level_2_enemy_right_afg(int index, int bullet[2][200])
{
    for (int x = index; x < bullet_count_tank_3_enemy_level_2 - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bullet_count_tank_3_enemy_level_2--;
    return bullet[0][1];
}
// ENEMY TWO THINGS
int removeBulletFromArray_level_2_enemy_left(int index, int bullet[2][200])
{
    for (int x = index; x < bullet_count_tank_2_enemy_level_2 - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bullet_count_tank_2_enemy_level_2--;
    return bullet[0][1];
}
// Move Bullet Down
int move_bullet_down(int bullet[2][200], int arr[1][3])
{
    for (int x = 0; x < bullet_count_tank_1_enemy_level_2; x++)
    {

        char next[5];
        next[0] = getCharAtxy(bullet[0][x], bullet[1][x] + 1);
        next[1] = getCharAtxy(bullet[0][x], bullet[1][x] + 1);
        next[2] = getCharAtxy(bullet[0][x], bullet[1][x] + 1);
        next[3] = getCharAtxy(bullet[0][x], bullet[1][x] + 1);
        next[4] = getCharAtxy(bullet[0][x], bullet[1][x] + 1);
        to_check_upper_side_tank(2, next);
        if (next[0] != ' ' && next[1] != ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_level_2_down(x, bullet);
        }
        else if (next[0] == ' ' && next[1] == ' ' && arr[0][2] == 1)
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] + 1;
            bullet[1][x] = bullet[1][x] + 1;
            printBullet_down_enemy(bullet[0][x], bullet[1][x]);
        }
        else if (next[0] == ' ' && next[1] == ' ' && arr[0][2] == 2)
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] - 1;
            bullet[1][x] = bullet[1][x] + 1;
            printBullet_down_enemy(bullet[0][x], bullet[1][x]);
        }
    }
    return bullet[0][1];
}
int removeBulletFromArray_level_2_down(int index, int bullet[2][200])
{
    for (int x = index; x < bullet_count_tank_1_enemy_level_2 - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bullet_count_tank_1_enemy_level_2--;
    return bullet[0][1];
}
// leveL Two indian bullets
void printBullet_down_enemy(int x, int y)
{
    gotoxy(x, y);
    cout << "*";
}
// to check tank level 2 sides
bool to_check_upper_side_tank(int tank_leveler, char next[5])
{
    char character_2[6] = {':', '=', '(', '_', '\\', ')'};
    char character_3[4] = {':', '\\', '/', '_'};
    char character_4[5] = {'}', '{', '@', 'D', '.'};
    if (tank_leveler == 2)
    {
        for (int i = 0; i < 6; i++)
        {
            if (next[1] == character_2[i] || next[0] == character_2[i] || next[2] == character_2[i] || next[3] == character_2[i] || next[4] == character_2[i])
            {
                khalid_tank_health = khalid_tank_health - 5;
                return false;
            }
        }
    }
    if (tank_leveler == 3)
    {
        for (int i = 0; i < 6; i++)
        {
            if (next[1] == character_2[i] || next[0] == character_2[i] || next[2] == character_2[i] || next[3] == character_2[i] || next[4] == character_2[i])
            {
                khalid_tank_health = khalid_tank_health - 10;
                return false;
            }
        }
    }
    if (tank_leveler == 4)
    {
        for (int i = 0; i < 5; i++)
        {
            if (next[1] == character_2[i] || next[0] == character_2[i])
            {
                enemy_3_level_2 = enemy_3_level_2 - 10;
                return false;
            }
        }
    }
    return true;
}
// // Check all sides_enemy
bool check_sider(char next[13], int n)
{
    char enemy[4][13] = {{' ', ' ', ' ', ' ', '_', '_', '_', '_', '_', ' ', ' ', ' ', ' '},
                         {' ', '_', '_', '|', '_', '>', 'o', '<', '_', '|', '_', '_', ' '},
                         {'/', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '\\'},
                         {'\\', '\\', '=', '\\', '>', '-', '-', '-', '-', '<', '/', '=', '/'}};
    if (n == 1)
    {
        for (int i = 0; i < 13; i++)
        {
            for (int j = 0; j < 13; j++)
            {
                if (next[i] == enemy[3][j])
                {
                    enemy_1_level_2 = enemy_1_level_2 - 5;
                    return true;
                }
            }
        }
    }
    return false;
}
// Enemy Tank
void print_enemy_2_tank_level_2(int arr[1][3])
{
    int enemy_x = arr[0][0];
    int enemy_y = arr[0][1];
    char enemies_tank[5][10] = {{' ', ' ', ' ', char(201), '=', '=', '=', '=', char(187)},
                                {' ', ' ', ' ', char(204), ' ', 'I', 'N', ' ', char(204)},
                                {'[', '=', '=', char(204), ' ', 'D', 'I', ' ', char(204)},
                                {' ', ' ', ' ', char(204), ' ', 'A', 'N', ' ', char(204)},
                                {' ', ' ', ' ', char(201), '=', '=', '=', '=', char(188)}};

    for (int i = 0; i < 5; i++)
    {
        gotoxy(enemy_x, enemy_y);
        for (int j = 0; j < 10; j++)
        {
            cout << "\33[33m" << enemies_tank[i][j];
        }
        enemy_y++;
    }
}
// Move Enemy Up and Down
int enemy_move_up_down(int arr[1][3]) // x-axis , y-axis , right or left
{
    if (arr[0][2] == 1) // up
    {
        char nextLocation = getCharAtxy(arr[0][0] + 1, arr[0][1] - 1);
        char nextLocation1 = getCharAtxy(arr[0][0] + 2, arr[0][1] - 1);
        char nextLocation2 = getCharAtxy(arr[0][0] + 3, arr[0][1] - 1);
        char nextLocation3 = getCharAtxy(arr[0][0] + 4, arr[0][1] - 1);

        if (nextLocation == char(175) || nextLocation1 == char(175) || nextLocation2 == char(175) || nextLocation3 == char(175))
        {
            enemy_2_level_2 = enemy_2_level_2 - 5;
        }
        if (nextLocation != '#' && nextLocation1 != '#' && nextLocation2 != '#' && nextLocation != ':' && nextLocation1 != ':' && nextLocation2 != ':' && nextLocation != '/' && nextLocation1 != '/' && nextLocation2 != '/' && nextLocation != '>' && nextLocation1 != '>' && nextLocation2 != '>')
        {
            erase_enemy_level_two(arr);
            arr[0][1] = arr[0][1] - 1;
            print_enemy_2_tank_level_2(arr);
        }
        if ((nextLocation != ' ' && nextLocation1 != ' ' && nextLocation2 != ' ') || arr[0][1] == rows_of_screen / 2 - 7)
        {
            arr[0][2] = 2; // to move left
        }
    }

    if (arr[0][2] == 2) // down
    {

        char nextLocation1 = getCharAtxy(arr[0][0], arr[0][1] + 6);
        char nextLocation = getCharAtxy(arr[0][0] + 1, arr[0][1] + 6);
        char nextLocation2 = getCharAtxy(arr[0][0] + 2, arr[0][1] + 6);

        if (nextLocation == char(175) || nextLocation1 == char(175) || nextLocation2 == char(175))
        {
            enemy_2_level_2 = enemy_2_level_2 - 5;
        }
        if (nextLocation != '#' && nextLocation1 != '#' && nextLocation2 != '#' && nextLocation != ':' && nextLocation1 != ':' && nextLocation2 != ':' && nextLocation != '\\' && nextLocation1 != '\\' && nextLocation2 != '\\')
        {
            erase_enemy_level_two(arr);
            arr[0][1] = arr[0][1] + 1;
            print_enemy_2_tank_level_2(arr);
        }
        if (nextLocation != ' ' && nextLocation1 != ' ' && nextLocation2 != ' ')
        {
            arr[0][2] = 1;
        }
    }
    return arr[0][2];
}
int afg_move_smartly(int arr[1][3], int tank[2]) // x-axis , y-axis , right or left
{
    bool check = true;
    char next[5];
    char nextlocation_enemy[6];
    nextlocation_enemy[0] = getCharAtxy(arr[0][0] + 16, arr[0][1]);
    nextlocation_enemy[1] = getCharAtxy(arr[0][0] + 16, arr[0][1] + 1);
    nextlocation_enemy[2] = getCharAtxy(arr[0][0] - 1, arr[0][1]);
    nextlocation_enemy[3] = getCharAtxy(arr[0][0] - 1, arr[0][1] + 4);
    nextlocation_enemy[4] = getCharAtxy(arr[0][0], arr[0][1] + 5);
    nextlocation_enemy[5] = getCharAtxy(arr[0][0], arr[0][1] - 1);
    for (int i = 0; i < 6; i++)
    {
        if (nextlocation_enemy[i] != ' ')
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        erase_tank_afg(arr);
        if (arr[0][0] < tank[0])
        {
            arr[0][0] = arr[0][0] + 1;
        }
        else if (arr[0][0] > tank[0])
        {
            arr[0][0] = arr[0][0] - 1;
        }
        if (arr[0][1] < tank[1])
        {
            arr[0][1] = arr[0][1] + 1;
        }
        else if (arr[0][1] > tank[1])
        {
            arr[0][1] = arr[0][1] - 1;
        }
    }
    character_tank_afg(arr);
    return arr[0][2];
}
void erase_tank_afg(int arr[1][3])
{
    int x_axis = arr[0][0];
    int y_axis = arr[0][1];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 16; j++)
        {
            gotoxy(x_axis + j, y_axis + i);
            cout << " ";
        }
    }
}
void character_tank_afg(int arr[1][3])
{
    int x_axis = arr[0][0];
    int y_axis = arr[0][1];
    char character[3][16] = {
        {'.', '.', '.', '/', '"', '"', '"', '"', '"', '"', '\\', '=', '=', '=', 'D'},
        {'{', '"', '"', '"', '"', '"', '"', '"', '"', '"', '"', '}', ' ', ' ', ' '},
        {'{', '@', '@', '@', '@', '@', '@', '@', '@', '@', '@', '}', ' ', ' ', ' '},
    };
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 16; j++)
        {
            gotoxy(x_axis + j, y_axis + i);
            cout << character[i][j];
        }
    }
}
// Last Level Tank
void last_level_enemy_tank(int arr[1][3])
{
    int x_axis = arr[0][0];
    int y_axis = arr[0][1];
gotoxy(x_axis, y_axis);
cout<<"         __________";
gotoxy(x_axis, y_axis + 1);
cout<<"C=======|__________\\_____";
gotoxy(x_axis, y_axis + 2);
cout<<"     _/    INDIAN RAW     \\";
gotoxy(x_axis, y_axis + 3);
cout<<"     /____________________|";
gotoxy(x_axis, y_axis + 4);
cout<<"     \\()__()__()__()__()/";
}
// ERASE Last Level Tank
void erase_last_level_enemy_tank(int arr[1][3])
{
int x_axis = arr[0][0] - 1;
int y_axis = arr[0][1];
gotoxy(x_axis, y_axis + 0);
cout<<"                               ";
gotoxy(x_axis, y_axis + 1);
cout<<"                               ";
gotoxy(x_axis, y_axis + 2);
cout<<"                               ";
gotoxy(x_axis, y_axis + 3);
cout<<"                               ";
gotoxy(x_axis, y_axis + 4);
cout<<"                               ";
}
// MOVE RAW UP AND DOWN
int move_raw_up_down(int arr[1][3])
{   
    erase_last_level_enemy_tank(arr);
    if(arr[0][2] == 1)// UP
    {
    char next = getCharAtxy(arr[0][0] , arr[0][1] - 1);
    if(next  == ' ' )
    {
    arr[0][1] = arr[0][1] - 1;  
    }
    else if(next == '#' )
    {
        arr[0][2] = 2;
    }
    }
    else if(arr[0][2] == 2)// DOWN
    {
    char next = getCharAtxy(arr[0][0] , arr[0][1] + 5);
    if(next == ' ' )
    {
    arr[0][1] = arr[0][1] + 1;  
    }
    else if(next == '#')
    {
        arr[0][2] = 1;
    }
    }
    last_level_enemy_tank(arr);
    return arr[0][1];
}
// generate bullets raw
// Level 2 Generate Bullets
int generate_raw_bullet_left_level_3(int arr[1][3], int bullet[2][200])
{
    bullet[0][bulletCount_raw] = arr[0][0] - 1;
    bullet[1][bulletCount_raw] = arr[0][1] + 1;
    gotoxy(arr[0][0] - 1, arr[0][1] + 1);
    cout<<"X";
    bulletCount_raw++;
    return bullet[1][1];
}
// Remove Bullet From Array Right
int removeBulletFromArray_raw_level_3(int index, int bullet[2][200])
{
    for (int x = index; x < bulletCount_raw - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bulletCount_raw--;
    return bullet[0][1];
}
int move_bullet_left_raw(int bullet[2][200])
{
    for (int x = 0; x < bulletCount_raw; x++)
    {
        char next[2];
        next[0] = getCharAtxy(bullet[0][x] - 1, bullet[1][x] );
        next[1] = getCharAtxy(bullet[0][x] - 1, bullet[1][x] );
        if (next[0] != ' ' && next[1] != ' ')
        {
            if(next[0] == ':' || next[0] == '\\' || next[0] == '/'|| next[0] == '_' || next[0] == '0')
            {
                khalid_tank_health = khalid_tank_health - 20;
            }
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_raw_level_3(x, bullet);
            
        }
        else
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] - 1;
            printBullet_raw(bullet[0][x], bullet[1][x]);
        }
        
    }
    return bullet[0][1];
}
// Print Bullet RAW
void printBullet_raw(int x, int y)
{
    gotoxy(x, y);
    cout << "X";
}
// Print Last Level Score
void last_level_score()
{
        gotoxy(38, 5);
        cout << "KHALID TANK HEALTH:                        ";
        gotoxy(38, 5);
        cout << "KHALID TANK HEALTH: " << khalid_tank_health;
        gotoxy(38, 6);
        cout << "KHALID TANK :                       ";
        gotoxy(38, 6);
        cout << "KHALID TANK FIRE: " << khalid_tank_fire_level_2;
        gotoxy(68, 5);
        cout << "RAW TANK ONE HEALTH:                        ";
        gotoxy(68, 5);
        cout << "RAW TANK ONE HEALTH: " << raw_tank_health;
        gotoxy(68, 6);
        cout << "RAW TANK ONE HEALTH:                       ";
        gotoxy(68, 6);
        cout << "RAW TANK ONE FIRE: " << raw_tank_fire;
        gotoxy(98, 6);
        cout << "TIME REMANING:                        ";
        gotoxy(98, 6);
        cout << "TIME REMANING: " << tank_game_time;
        
}
// horizantel Line
int horizantel_line()
{
    for(int i = 9 ; i < rows_of_screen - 1 ; i++)
    {   
        gotoxy(columns_of_screen/2 - 2 , i );
        cout<<"#";
    }
}
// horizantel BORDER
int border_2()
{
    int j = 0;
    string con = "PAKISTAN                ";
    for(int i = rows_of_screen / 2 ; i < rows_of_screen - 2 ; i++)
    {   
        gotoxy(2, i );
        cout<<con[j];
        j++;
    }
}
// horizantel Border
int border_1()
{   int j = 0;
    string con = "AFGANISTAN              ";
    for(int i = rows_of_screen / 2 ; i < rows_of_screen - 2 ; i++)
    {   
        gotoxy(columns_of_screen - 3, i );
        cout<<con[j];
        j++;
    }
}
// MULTIPlayer DUAL FIGHT
bool multiplayer_game()
{ 
    things_redefined();
    int khalid_tank[2] = {2, rows_of_screen - 12};
    int bullet_left[2][200];
    int bullet_right[2][200];
    int bullet_up[2][200];
    int al_zarar_tank[2] = {columns_of_screen/2 + 5, rows_of_screen - 12};
    int al_zarar_bullet_left[2][200];
    int al_zarar_bullet_right[2][200];
    int al_zarar_bullet_up[2][200];
    level_of_tank_game = 2;
    int time_waste = 0;
    al_zarar = true;
    print_box_tank(rows_of_screen - 1, columns_of_screen);
    border_1();
    border_2();
    while(true)
    {
            multi_level_score();
            if ((khalid_tank_health <= 0 && al_zarar_tank_health_m2 > 0) || al_zarar_tank[0] < 4)
            {
                Sleep(1000);
                level_end_shower("      AL ZARAR WON        ");
                Sleep(1000);
                return true;
            }
            else if ( (khalid_tank_health > 0 && al_zarar_tank_health_m2 <= 0) || khalid_tank[0] > columns_of_screen - 4)
            {
                Sleep(1000);
                level_end_shower("      KHALID WON THE WAR      ");
                Sleep(1000);
                return true;
            }
            else if (tank_game_time <= 0)
            {
                Sleep(1000);
                level_end_shower("      TIME IS OVER        ");
                Sleep(1000);
                return true;
            }
            // First PLayer
            if (GetAsyncKeyState(VK_LEFT))
            {
                move_tank_left(khalid_tank);
                direction_m1 = "left";
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                move_tank_right(khalid_tank);
                direction_m1 = "right";
            }
            if (GetAsyncKeyState(VK_UP) && khalid_tank[1] >= rows_of_screen / 2 - 5)
            {
                move_tank_up(khalid_tank);
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                move_tank_down(khalid_tank);
            }
            if (GetAsyncKeyState(VK_SPACE) )
            {
                if (direction_m1 == "right")
                {
                    generate_khalid_bullet_right_level_2(khalid_tank, bullet_right);
                }
                else if (direction_m1 == "left")
                {
                    generate_khalid_bullet_left_level_2(khalid_tank, bullet_left);
                }
                khalid_tank_fire_m1--;
            }
            // SECOND PLAYER
            if (GetAsyncKeyState(VK_LSHIFT))
            {
                move_tank_left(al_zarar_tank);
                direction_m2 = "left";
            }
            if (GetAsyncKeyState(VK_RSHIFT))
            {
                move_tank_right(al_zarar_tank);
                direction_m2 = "right";
            }
            if (GetAsyncKeyState(VK_LCONTROL))
            {
                move_tank_up(al_zarar_tank);
            }
            if (GetAsyncKeyState(VK_RCONTROL))
            {
                move_tank_down(al_zarar_tank);
            }
            if (GetAsyncKeyState(VK_ESCAPE) )
            {
                if (direction_m2 == "right")
                {
                    generate_al_zarar_bullet_right(al_zarar_tank, al_zarar_bullet_right);
                }
                else if (direction_m2 == "left")
                {
                    generate_al_zarar_bullet_left(al_zarar_tank, al_zarar_bullet_left);
                }
                al_zarar_tank_fire_m2--;
            }
            if(time_waste == 20)
            {
                tank_game_time--;
                time_waste = 0; 
            }
            move_al_zarar_bullet_left(al_zarar_bullet_left);
            move_al_zarar_bullet_right(al_zarar_bullet_right);
            move_bullet_left(bullet_left);
            move_bullet_right(bullet_right);
            time_waste++;
            Sleep(50);
    }
}

void things_redefined()
{
    al_zarar = false;
     khalid_tank_health = 100;
     enemy_1_level_2 = 200; // Enemy One Health
     enemy_2_level_2 = 200; // Enemy Two Health
     enemy_3_level_2 = 200;
     khalid_tank_fire_level_2 = 1000;
     enemy_fire_one_level_2 = 400;
     enemy_fire_two_level_2 = 400;
     enemy_fire_three_level_2 = 400;
     bulletCount_level_2_right = 0;
     bulletCount_level_2_left = 0;
     bulletCount_level_2_up = 0;
     bullet_count_tank_1_enemy_level_2 = 0;
     bullet_count_tank_2_enemy_level_2 = 0;
     bullet_count_tank_3_enemy_level_2 = 0;
    al_zarar_tank_fire_m2 = 100;
    al_zarar_tank_health_m2 = 100;
    bulletCount_al_zarar_right = 0;
    bulletCount_al_zarar_left = 0;
    khalid_tank_fire_m1 = 100;
    khalid_tank_health_m1 = 100;
    tank_game_time = 30;

}
// MULTIPLAYER
// Print Last Level Score
void multi_level_score()
{
        gotoxy(38, 5);
        cout << "KHALID TANK HEALTH:                        ";
        gotoxy(38, 5);
        cout << "KHALID TANK HEALTH: " << khalid_tank_health;
        gotoxy(38, 6);
        cout << "KHALID TANK :                       ";
        gotoxy(38, 6);
        cout << "KHALID TANK FIRE: " << khalid_tank_fire_m1;
        gotoxy(68, 5);
        cout << "AL ZARAR TANK HEALTH:                        ";
        gotoxy(68, 5);
        cout << "AL ZARAR TANK HEALTH: " << al_zarar_tank_health_m2;
        gotoxy(68, 6);
        cout << "AL ZARAR TANK HEALTH:                       ";
        gotoxy(68, 6);
        cout << "AL ZARAR TANK FIRE: " << al_zarar_tank_fire_m2;
        gotoxy(98, 6);
        cout << "TIME REMANING:                        ";
        gotoxy(98, 6);
        cout << "TIME REMANING: " << tank_game_time;
        
}
int generate_al_zarar_bullet_right(int arr[2], int bullet[2][200])
{
    bullet[0][bulletCount_al_zarar_right] = arr[0] + 16;
    bullet[1][bulletCount_al_zarar_right] = arr[1] + 1;
    gotoxy(arr[0] + 16, arr[1] + 1);
    cout << "*";
    bulletCount_al_zarar_right++;
    return bullet[1][1];
}
// LEFT LEVEL KHALID
int generate_al_zarar_bullet_left(int arr[2], int bullet[2][200])
{
    bullet[0][bulletCount_al_zarar_left] = arr[0] - 1;
    bullet[1][bulletCount_al_zarar_left] = arr[1] + 1;
    gotoxy(arr[0] - 1, arr[1] + 1);
    cout << "*";
    bulletCount_al_zarar_left++;
    return bullet[1][1];
}
// Remove Bullet From Array Left
int removeBulletFromArray_al_zarar_right(int index, int bullet[2][200])
{
    for (int x = index; x < bulletCount_al_zarar_right - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bulletCount_al_zarar_right--;
    return bullet[0][1];
}
// Remove Bullet From Array Right
int removeBulletFromArray_al_zarar_left(int index, int bullet[2][200])
{
    for (int x = index; x < bulletCount_al_zarar_left - 1; x++)
    {
        bullet[0][x] = bullet[0][x + 1];
        bullet[1][x] = bullet[1][x + 1];
    }
    bulletCount_al_zarar_left--;
    return bullet[0][1];
}
void printBullet_al_zarar(int x, int y)
{
    gotoxy(x, y);
    cout << "*";
}
int move_al_zarar_bullet_right(int bullet[2][200])
{
    for (int x = 0; x < bulletCount_al_zarar_right; x++)
    {
        char next[2];
        next[0] = getCharAtxy(bullet[0][x] + 1, bullet[1][x]);
        if (next[0] != ' ' )
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_al_zarar_right(x, bullet);
            if(next[0] == ':' || next[0] == '_' || next[0] == '\\' || next[0] == '/' || next[0] == ')' )
            {
                khalid_tank_health = khalid_tank_health - 5;
            }
        }
        else
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] + 1;
            printBullet_al_zarar(bullet[0][x], bullet[1][x]);
        }
    }
    return bullet[0][1];
}
int move_al_zarar_bullet_left(int bullet[2][200])
{
    for (int x = 0; x < bulletCount_al_zarar_left; x++)
    {
        char next[2];
        next[0] = getCharAtxy(bullet[0][x] - 1, bullet[1][x]);
        next[1] = getCharAtxy(bullet[0][x] - 1, bullet[1][x]);
        if (next[0] != ' ' && next[1] != ' ')
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            removeBulletFromArray_al_zarar_left(x, bullet);
            if(next[0] == ':' || next[0] == '_' || next[0] == '\\' || next[0] == '/' || next[0] == ')' )
            {
                khalid_tank_health = khalid_tank_health - 5;
            }
        }
        else
        {
            eraseBullet(bullet[0][x], bullet[1][x]);
            bullet[0][x] = bullet[0][x] - 1;
            printBullet_al_zarar(bullet[0][x], bullet[1][x]);
        }
    }
    return bullet[0][1];
}