//use_tv.cpp -- Tv와 Remote 클래스를 사용한다
#include <iostream>
#include "tv.h"

int main()
{
    using std::cout;
    Tv s42;
    cout << "42\" TV의 초기 설정값:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\n42\" TV의 변경된 설정값:\n";
    s42.settings();

    Remote grey;

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n리모콘 사용 후 42\" TV의 설정값:\n";
    s42.settings();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58,28);
    cout << "\n58\" TV의 설정값:\n";
    s58.settings();

    cout<<std::endl;
    grey.show_mode();
    s58.change_remote_mode(grey);
    grey.show_mode();
    grey.onoff(s58);
    s58.change_remote_mode(grey);
}