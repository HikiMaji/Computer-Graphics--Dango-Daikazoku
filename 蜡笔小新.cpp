#include <graphics.h>
#include <stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.14/180
//

void D() {
    setlinecolor(RGB(211, 137, 124));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 6);
    arc(90, -103, 320, 300, PI * 158, PI * 195);
    arc(42, 7, 213, 160, PI * (-90), PI * 90);
    arc(95, 7, 152, 37, PI * 90, PI * 180);
    arc(95, 130, 152, 160, PI * 180, PI * 270);

    arc(91, 55, 161, 116, PI * 295, PI * 68);
    arc(90, 26, 140, 175, PI * 350, PI * 35);

    setfillcolor(RGB(241, 219, 222));
    floodfill(115, 78, RGB(211, 137, 124));
}
void A() {
    setlinecolor(RGB(145, 159, 188));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 6);
    arc(205, 8, 300, 225, PI * 50, PI * 130); // 上

    arc(190, 5, 338, 312, PI * 127, PI * 175);//左
    arc(166, 5, 314, 312, PI * 7, PI * 53);//左下

    arc(178, 24, 240, 160, PI * 232, PI * 340);//右
    arc(262, 24, 322, 160, PI * 200, PI * 315);//右下

    arc(210, 18, 295, 118, PI * 255, PI * 285);//下
    POINT pts[] = { {265,88} ,{258,58},{251,55},{237,88} };
    polybezier(pts, 4);

    POINT pts2[] = { {265,88} ,{256,86},{247,87},{237,88} };
    polybezier(pts2, 4);
    setfillcolor(RGB(192, 208, 241));
    floodfill(290, 90, RGB(145, 159, 188));
}




void old_m() {
    setlinecolor(RGB(188, 183, 164));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 4);
    POINT pts[] = { {121,301} ,{99,277},{113,242},{146,234},
        {171,233},{197,251},{200,265},
        {203,276},{200,291},{185,301},
        {170,307},{130,305},{121,301} };
    polybezier(pts, 13);  //团
    setfillcolor(RGB(226, 220, 208));
    floodfill(150, 260, RGB(188, 183, 164));

    // 眼
    POINT pts2[] = { {140,261},{145,260},{148,259},{154,259} };
    POINT pts3[] = { {173,258},{178,258},{182,260},{186,261} };
    setlinecolor(RGB(3, 2, 0));
    setlinestyle(PS_SOLID | PS_ENDCAP_SQUARE, 2);
    polybezier(pts2, 4);
    polybezier(pts3, 4);

    //皱纹
    setlinecolor(RGB(192, 186, 172));
    setlinestyle(PS_SOLID | PS_ENDCAP_SQUARE, 2);
    POINT pts4[] = { {151,250},{155,249},{165,248},{173,249} };
    POINT pts5[] = { {156,244},{162,243},{164,243},{168,244} };
    polybezier(pts4, 4);
    polybezier(pts5, 4);

    //胡子
    POINT pts6[] = { {166,271},{162,268},{156,268},{151,273},
                     {145,281},{140,286},{136,288},
                     {141,293},{155,293},{167,284},
                     {173,292},{185,294},{195,287},
                     {186,288},{182,281},{179,273},
                     {176,269},{171,268},{166,271} };
    setlinecolor(RGB(148, 143, 137));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 2);
    polybezier(pts6, 19);
    setfillcolor(RGB(203, 203, 203));
    floodfill(160, 280, RGB(148, 143, 137));
}
void old_f() {

    POINT pts[] = { {121 + 80,301} ,{99 + 80,277},{113 + 80,242},{146 + 80,234},
        {171 + 80,233},{197 + 80,251},{200 + 80,265},
        {203 + 80,276},{200 + 80,291},{185 + 80,301},
        {170 + 80,307},{130 + 80,305},{121 + 80,301} };
    setlinecolor(RGB(149, 121, 110));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 4);
    polybezier(pts, 13);  //团
    setfillcolor(RGB(225, 214, 210));
    floodfill(150 + 80, 260, RGB(149, 121, 110));

    // 眼
    POINT pts2[] = { {140 + 90,261 + 10},{145 + 90,260 + 10},{148 + 90,259 + 10},{154 + 90,259 + 10} };
    POINT pts3[] = { {173 + 90,258 + 10},{178 + 90,258 + 10},{182 + 90,260 + 10},{186 + 90,261 + 10} };
    setlinecolor(RGB(3, 2, 0));
    setlinestyle(PS_SOLID | PS_ENDCAP_SQUARE, 2);
    polybezier(pts2, 4);
    polybezier(pts3, 4);

    //皱纹
    setlinecolor(RGB(169, 151, 141));
    setlinestyle(PS_SOLID | PS_ENDCAP_SQUARE, 2);
    POINT pts4[] = { {151 + 80,250 + 5},{155 + 80,249 + 5},{165 + 80,248 + 5},{173 + 80,249 + 5} };
    POINT pts5[] = { {156 + 80,244 + 5},{162 + 80,243 + 5},{164 + 80,243 + 5},{168 + 80,244 + 5} };
    POINT pts6[] = { {231,279},{228,282},{227 ,286},{225,291} };
    polybezier(pts4, 4);
    polybezier(pts5, 4);
    polybezier(pts6, 4);
}

void bodyA(int x, int y, int R1, int G1, int B1, int R2, int G2, int B2) {
    POINT pts[] = { {x,y} ,{x - 22,y - 24},{x - 8 ,y - 59},{x + 25 ,y - 63},
        {x + 50,y - 65},{x + 76,y - 49},{x + 79,y - 32},
        {x + 82,y - 25},{x + 79,y - 10},{x + 64,y},
        {x + 49,y + 6},{x + 9,y + 4},{x,y} };
    setlinecolor(RGB(R1, G1, B1));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 4);
    polybezier(pts, 13);  //团
    setfillcolor(RGB(R2, G2, B2));
    floodfill(x + 10, y - 10, RGB(R1, G1, B1));
}
void bodyB(int x, int y, double size, int R1, int G1, int B1, int R2, int G2, int B2) {
    POINT pts[] = { {x,y} ,{x - 26 * size,y - 24 * size},{x - 12 * size ,y - 59 * size},{x + 24 * size ,y - 63 * size},
        {x + 50 * size,y - 65 * size},{x + 76 * size,y - 49 * size},{x + 73 * size,y - 32 * size},
        {x + 76 * size,y - 25 * size},{x + 72 * size,y - 10 * size},{x + 58 * size,y},
        {x + 49 * size,y + 6 * size},{x + 9 * size,y + 4 * size},{x,y} };
    setlinecolor(RGB(R1, G1, B1));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 4);
    polybezier(pts, 13);  //团
    setfillcolor(RGB(R2, G2, B2));
    floodfill(x + 10, y - 10, RGB(R1, G1, B1));
}

void eyeA(int x, int y) {
    POINT pts1[] = { {x,y},{x + 2,y + 5},{x + 2,y + 15},{x + 3,y + 20} };
    POINT pts2[] = { {x + 10,y - 2},{x + 2 + 10,y + 5 - 2},{x + 3 + 10,y + 15 - 2},{x + 4 + 10,y + 20 - 2} };
    setlinecolor(RGB(3, 2, 0));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 2);
    polybezier(pts1, 4);
    polybezier(pts2, 4);
}

void eyeB(int x, int y, double size) {
    POINT pts1[] = { {x,y},{x - 1 ,y + 5 * size},{x - 2 ,y + 15 * size},{x - 1 ,y + 20 * size} };
    POINT pts2[] = { {x + 10,y },{x - 1 + 10,y + 5 * size },{x - 2 + 10,y + 15 * size },{x - 1 + 10,y + 20 * size } };
    setlinecolor(RGB(3, 2, 0));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 2);
    polybezier(pts1, 4);
    polybezier(pts2, 4);
}
void son() {
    bodyA(275, 328, 125, 119, 93, 172, 154, 132);
    eyeA(325, 282);
}

void mum() {
    bodyA(125, 368, 185, 114, 92, 240, 193, 163);
    eyeA(170, 325);
}
void dad() {
    bodyB(220, 368, 1, 151, 168, 123, 207, 227, 192);
    eyeB(225, 325, 1);
}
void baby() {
    setlinecolor(RGB(216, 198, 150));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 3);
    setfillcolor(RGB(240, 234, 182));
    solidcircle(174, 371 - 5, 20);

    setlinecolor(RGB(0, 0, 0));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 2);
    line(167, 358 - 8, 170, 365 - 8);
    line(173, 356 - 8, 176, 363 - 8);

    setfillcolor(RGB(255, 174, 201));
    solidcircle(173 - 8, 371 - 5 - 3, 3);
    solidcircle(173 + 8, 371 - 14, 3);


    setlinecolor(RGB(170, 188, 200));
    setlinestyle(PS_SOLID | PS_ENDCAP_ROUND, 3);
    arc(153, 351 - 8, 197, 393 - 8, PI * 175, PI * 40);
    POINT pts1[] = { {152,372 - 8},{163,369 - 8},{174,371 - 8},{193,385 - 8} };
    POINT pts2[] = { {191,357 - 8},{186,359 - 8},{182,363 - 8},{178,373 - 8} };
    polybezier(pts1, 4);
    polybezier(pts2, 4);
    setfillcolor(RGB(213, 231, 235));
    floodfill(172, 378 - 5, RGB(170, 188, 200));
    floodfill(188, 369 - 5, RGB(170, 188, 200));

}

void girl() {
    bodyA(260, 421, 220, 196, 196, 241, 219, 222);
    eyeA(308, 378);

    setfillcolor(RGB(231, 166, 174));
    solidcircle(298, 400, 7);
    solidcircle(330, 400, 7);

}
void boy() {
    bodyB(357, 421, 1, 147, 153, 185, 192, 208, 241);
    eyeB(365, 375, 1);

    line(357 + 5, 374, 361 + 5, 378);
    line(366 + 5, 378, 377 + 5, 372);

    setlinecolor(RGB(205, 145, 144));
    line(375, 395, 395, 415);
    for (int i = 1; i < 3; i++) {
        line(375 + 5 * i, 395, 395, 415 - 5 * i);
        line(375, 395 + 5 * i, 395 - 5 * i, 415);
    }
    setlinecolor(RGB(205, 145, 144));
    //line(375, 415, 395, 395);
    for (int i = 1; i < 3; i++) {
        line(375, 415 - 4 * i, 395 - 4 * i, 395);
        line(375 + 4 * i, 415, 395, 395 + 4 * i);
    }

    line(350, 395, 365, 410);
    for (int i = 1; i < 2; i++) {
        line(350 + 5 * i, 395, 365, 410 - 5 * i);
        line(350, 395 + 5 * i, 365 - 5 * i, 410);
    }
    setlinecolor(RGB(205, 145, 144));
    //line(350, 410, 365, 395);
    for (int i = 1; i < 2; i++) {
        line(350, 410 - 4 * i, 365 - 4 * i, 395);
        line(350 + 4 * i, 410, 365, 395 + 4 * i);
    }
}

void green() {
    bodyB(452, 408, 0.75, 158, 194, 168, 189, 221, 197);
    eyeB(459, 370, 0.75);
}
void orange() {
    bodyB(420, 390, 1.1, 208, 135, 90, 248, 174, 125);
    eyeB(427, 338, 1.1);
}
void purple() {
    bodyB(500, 386, 0.85, 129, 113, 149, 213, 212, 244);
    eyeB(505, 347, 0.85);
}

void Aqua() {
    bodyB(433, 329, 1.1, 119, 160, 156, 145, 197, 193);
    eyeB(433, 280, 1.1);
}
void Alto() {
    bodyB(506, 329, 0.75, 183, 170, 162, 230, 213, 206);
    eyeB(506, 295, 0.75);
}
void bl() {
    bodyB(442, 264, 0.9, 138, 145, 103, 185, 193, 107);
    eyeB(442, 225, 0.9);
}

void DANGO() {

    A();
    D();
}

void Daikazoku() {

    old_f();
    Sleep(1000);
    old_m();
    Sleep(1000);
    son();
    Sleep(1000);
    mum();
    Sleep(1000);
    dad();
    Sleep(1000);
    baby();
    Sleep(1000);
    Aqua();
    Sleep(1000);
    bl();
    Sleep(1000);
    Alto(); Sleep(1000);
    orange(); Sleep(1000);
    purple(); Sleep(1000);
    green(); Sleep(1000);

    girl(); Sleep(1000);
    boy(); Sleep(1000);
}


void bg() {
    for (int i = 0; i < 800; i += 8) {
        setfillcolor(RGB(250 - i / 40, 240 - i / 10, 236 - i / 10));
        solidcircle(350,225,  800-i);
    }
    
}
int main()
{
   
    //创建画布
    initgraph(700, 450);
    //设置背景色-白色
    setbkcolor(WHITE);
    //清除initgraph的默认黑色背景
    cleardevice();
    
   
    bg();
    DANGO();
    Daikazoku();
  
   
    // 等待用户关闭窗口
    getchar();

    // 关闭图形界面
    closegraph();

    return 0;
}

