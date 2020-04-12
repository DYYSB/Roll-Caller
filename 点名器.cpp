#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

struct person
{
    int stu_no;
    string stu_name;
    bool stu_status;
};
person stu_roster[99];

//----------------------------------------------------------------
void help();
void openscreen();
void choosescreen();
int random_number(int, int);
void choose_people();
int roster(int, int);
//----------------------------------------------------------------

int main()
{
    openscreen();
    int choice;
    choosescreen();
    cin >> choice;
    if (choice == 1)
    {

    }
}

void openscreen()
{
    cout << "|----------------------------------------------------------|" << endl;
    cout << "|                                                          |" << endl;
    cout << "|                         点 名 器                         |" << endl;
    cout << "|                                                          |" << endl;
    cout << "|                        By DYYSB                          |" << endl;
    cout << "|                                                          |" << endl;
    cout << "|----------------------------------------------------------|" << endl;
}

void choosescreen()
{

}

void help()
{
    cout << "点名器 by DYYSB" << endl;
    cout << "如果你喜欢这个软件或者喜♂欢♂我，请捐赠我。" << endl << "我的手机号：18020501015，请微信转账。" << endl;
    system("pause");
}

int random_number(int start, int num)
{
    unsigned seed;
    seed = time(0);
    srand(seed);
    int random;
    random = rand() % num + start;
    return random;
}

void choose_people()
{
    int start, num;
    cin >> start >> num;
    int choice = random_number(start, num);

}

int roster(int x, int y)
{
    fstream c_roster("roster.ros", ios::in|ios::out);
    if (x == 1)
    {
        if (c_roster.is_open())
        {
            for (int i = 1; !c_roster.eof(); i++)
            {
                c_roster >> stu_roster[i].stu_no;
                c_roster >> stu_roster[i].stu_name;
                c_roster >> stu_roster[i].stu_status;
            }
        }
        stu_roster[0].stu_status = true;
    }

    if (x == 2)
    {
        if (stu_roster[0].stu_status == false)
            return -1;
        stu_roster[y].stu_status == false;
    }
    
    if (x == 3)
    {
        if (stu_roster[0].stu_status == false)
            return -1;
        stu_roster[y].stu_status == true;
    }
}

int config()
{
    fstream cf;
    char c;
    string filename;
    cf.open("rollcall.config", ios::in | ios::out);
    if (!cf)
    {
        cout << "看起来你是第一次使用这个程序。请跟着程序向导完成你的配置。" << endl;
        cout << "你希望在打开程序后不经过任何选项，直接点名吗？[y/n]";
        cin >> c;
        if (c == 'y')
        {
            cf << "AutoCall* = 1" << endl;
            cout << "请输入班级名单或将班级名单拖入程序。" << endl << "在选择完班级名单后请不要移动或删除名单文件。" << endl;
            cout << "你仍然可以在设置中更改选择的名单。" << endl;
            cin >> filename;
            cf << "FileName* = " << filename << endl;
            cout << "你希望被点名学生在被点名后可以再次被点名吗？[y/n]";
            cin >> c;
            cf << "ChangeSt* = ";
            if (c == 'y')
                cf << '1';
            else if (c == 'n')
                cf << '0';
            else
                cout << "无效输入。";
        }
    }

    else
    {
        bool autocall;
        bool changestatus;
        string filename;
        char tempname[8];
        while (!cf.eof)
        {
            cf.get(tempname, 8);
            if (tempname == "AutoCall")
            {

            }
        }
        

    }
}