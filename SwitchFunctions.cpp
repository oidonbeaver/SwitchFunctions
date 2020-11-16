#include "SwitchFunctions.h"


void homepush(){
    SwitchControlLibrary().PressButtonHome();
    delay(50);
    SwitchControlLibrary().ReleaseButtonHome();
    delay(300);
}

void changeday(){
    //ホームボタン
    SwitchControlLibrary().PressButtonHome();
    delay(100);
    SwitchControlLibrary().ReleaseButtonHome();
    delay(350);

    SwitchControlLibrary().MoveHat(4);//下
    delay(100);
    SwitchControlLibrary().MoveHat(8);
    delay(250);
    for (int i = 0; i< 4; i++){
    SwitchControlLibrary().MoveHat(2);//右
    delay(70);
    SwitchControlLibrary().MoveHat(8);
    delay(100);

    }

    SwitchControlLibrary().PressButtonA();
    delay(100);
    SwitchControlLibrary().ReleaseButtonA();
    delay(500);

    SwitchControlLibrary().MoveHat(4);//下
    delay(2100);
    SwitchControlLibrary().MoveHat(8);// 止める
    delay(100);
    SwitchControlLibrary().PressButtonA();//本体
    delay(100);
    SwitchControlLibrary().ReleaseButtonA();
    delay(500);

    for (int i = 0; i< 4; i++){
    SwitchControlLibrary().MoveHat(4);//下
    delay(70);
    SwitchControlLibrary().MoveHat(8);
    delay(100);

    }
    SwitchControlLibrary().PressButtonA();//日付と時刻
    delay(100);
    SwitchControlLibrary().ReleaseButtonA();
    delay(200);
    for (int i = 0; i< 2; i++){
    SwitchControlLibrary().MoveHat(4);//下
    delay(70);
    SwitchControlLibrary().MoveHat(8);
    delay(100);

    }
    SwitchControlLibrary().PressButtonA();//現在の日付と時刻
    delay(100);
    SwitchControlLibrary().ReleaseButtonA();
    delay(120);

    SwitchControlLibrary().MoveHat(2);//右
    delay(70);
    SwitchControlLibrary().MoveHat(8);
    delay(120);
    SwitchControlLibrary().MoveHat(2);//右
    delay(70);
    SwitchControlLibrary().MoveHat(8);
    delay(120);
    SwitchControlLibrary().MoveHat(0);//上
    delay(70);
    SwitchControlLibrary().MoveHat(8);
    delay(120);
    for (int i = 0; i<4; i++){
    SwitchControlLibrary().PressButtonA();//
    delay(70);
    SwitchControlLibrary().ReleaseButtonA();
    delay(120);
    }

    //ホームボタン
    SwitchControlLibrary().PressButtonHome();
    delay(100);
    SwitchControlLibrary().ReleaseButtonHome();
    delay(500);
    SwitchControlLibrary().PressButtonHome();
    delay(100);
    SwitchControlLibrary().ReleaseButtonHome();
    delay(100);

}

void report(){
    SwitchControlLibrary().PressButtonX();
    delay(100);
    SwitchControlLibrary().ReleaseButtonX();
    delay(1000);
    SwitchControlLibrary().PressButtonR();
    delay(100);
    SwitchControlLibrary().ReleaseButtonR();
    delay(1000);
    SwitchControlLibrary().PressButtonA();
    delay(100);
    SwitchControlLibrary().ReleaseButtonA();
    delay(5500);
    
}