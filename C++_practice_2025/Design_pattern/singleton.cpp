#include<iostream>

using namespace std;
class GameSetting{

    static GameSetting *_instance;
    int brightness;
    public:
        static GameSetting* getInstance()
        {
            if(_instance==NULL)
                _instance=new GameSetting();

            return _instance;
        }
        void setBrightness(int b)
        {
            brightness=b;
        }
        int getBrightness()
        {
            return  brightness;
        }

        void displaySetting()
        {
            cout<<brightness<<endl;
        }
};

 GameSetting * GameSetting::_instance=NULL;

void fun()
{
    GameSetting *setting=GameSetting::getInstance();
    setting->setBrightness(100);
    setting->displaySetting();
}

int main()
{
    fun();
    return 0;
}