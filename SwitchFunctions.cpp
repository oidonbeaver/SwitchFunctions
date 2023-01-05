#include "SwitchFunctions.h"

int _d=3;
void homepush(){
    SwitchControlLibrary().pressButton(Button::HOME);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(50);
    SwitchControlLibrary().releaseButton(Button::HOME);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(300);
}

void changeday(){
    //ホームボタン
    SwitchControlLibrary().pressButton(Button::HOME);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    SwitchControlLibrary().releaseButton(Button::HOME);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(350);

    SwitchControlLibrary().pressHatButton(HatButton::DOWN);//下
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    // SwitchControlLibrary().MoveHat(8);
    SwitchControlLibrary().releaseHatButton(HatButton::DOWN);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(250);
    for (int i = 0; i< 5; i++){
        SwitchControlLibrary().pressHatButton(HatButton::RIGHT);//右
        delay(_d);
        SwitchControlLibrary().sendReport();
        delay(70);
        SwitchControlLibrary().releaseHatButton(HatButton::RIGHT);
        delay(_d);
        SwitchControlLibrary().sendReport();
        delay(100);

    }

    SwitchControlLibrary().pressButton(Button::A);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    SwitchControlLibrary().releaseButton(Button::A);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(500);

    SwitchControlLibrary().pressHatButton(HatButton::DOWN);//下
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(2200);
    SwitchControlLibrary().releaseHatButton(HatButton::DOWN);// 止める
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    SwitchControlLibrary().pressButton(Button::A);//本体
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    SwitchControlLibrary().releaseButton(Button::A);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(500);

    for (int i = 0; i< 7; i++){
    SwitchControlLibrary().pressHatButton(HatButton::DOWN);//下
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(150);
    SwitchControlLibrary().releaseHatButton(HatButton::DOWN);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(500);

    }
    SwitchControlLibrary().pressButton(Button::A);//日付と時刻
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    SwitchControlLibrary().releaseButton(Button::A);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(200);
    for (int i = 0; i< 2; i++){
    SwitchControlLibrary().pressHatButton(HatButton::DOWN);//下
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(70);
    SwitchControlLibrary().releaseHatButton(HatButton::DOWN);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);

    }
    SwitchControlLibrary().pressButton(Button::A);//現在の日付と時刻
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    SwitchControlLibrary().releaseButton(Button::A);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(120);

    SwitchControlLibrary().pressHatButton(HatButton::RIGHT);//右
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(70);
    SwitchControlLibrary().releaseHatButton(HatButton::RIGHT);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(120);
    SwitchControlLibrary().pressHatButton(HatButton::RIGHT);//右
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(70);
    SwitchControlLibrary().releaseHatButton(HatButton::RIGHT);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(120);
    SwitchControlLibrary().pressHatButton(HatButton::UP);//上
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(70);
    SwitchControlLibrary().releaseHatButton(HatButton::UP);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(120);
    for (int i = 0; i<4; i++){
    SwitchControlLibrary().pressButton(Button::A);//
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(70);
    SwitchControlLibrary().releaseButton(Button::A);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(120);
    }

    //ホームボタン
    SwitchControlLibrary().pressButton(Button::HOME);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    SwitchControlLibrary().releaseButton(Button::HOME);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(600);
    SwitchControlLibrary().pressButton(Button::HOME);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(100);
    SwitchControlLibrary().releaseButton(Button::HOME);
    delay(_d);
    SwitchControlLibrary().sendReport();
    delay(200);

}

// void report(){
//     SwitchControlLibrary().PressButtonX();
//     delay(70);
//     SwitchControlLibrary().ReleaseButtonX();
//     delay(1000);
//     SwitchControlLibrary().PressButtonR();
//     delay(70);
//     SwitchControlLibrary().ReleaseButtonR();
//     delay(1000);
//     SwitchControlLibrary().pressButton(Button::A);
//     delay(70);
//     SwitchControlLibrary().releaseButton(Button::A);
//     delay(5500);
    
// }