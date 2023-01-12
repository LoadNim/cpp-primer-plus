// tv.cpp -- Tv 클래스를 위한 메서드들(Remote 메서드들은 인라인으로 사용)
#include <iostream>
#include "tv.h"

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}
bool Tv::voldown()
{
    if (volume > MinVal)
    {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup()
{
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown()
{
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::change_remote_mode(Remote& re){
    if(state == On) re.remote_mode = (re.remote_mode == 0) ? 1 : 0;
    else std::cout<<"전원이 꺼져있어 리모컨 모드 변경이 불가능합니다.\n";
}

void Tv::settings() const
{
    using std::cout;
    using std::endl;
    cout << "TV is " << (state == Off? "OFF" : "ON") << endl;
    if (state == On)
    {
        cout << "볼륨 = " << volume << endl;
        cout << "채널 = " << channel << endl;
        cout << "모드 = "
             << (mode == Antenna? "지상파 방송" : "케이블 방송") << endl;
        cout << "입력 = " << (input == TV ? "TV" : "DVD") << endl;
    }
}

void Remote::show_mode() const{
    if(remote_mode) std::cout<<"리모컨이 대화 모드입니다.\n";
    else std::cout<<"리모컨이 일반 모드입니다.\n";
}