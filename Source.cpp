#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 0 , 0 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 1920 , 1080, "best friends" }; // Простое окно

		Rectangle_BS fullschreen{ Point{0 ,0 } , 1920 , 1080 }; // Левый верхний угол, ширина , высота
		fullschreen.set_fill_color(Color::white);
		win.attach(fullschreen);

		Rectangle_BS box1{ Point{600 ,880 } , 300 , 100 }; // Левый верхний угол, ширина , высота
		box1.set_color(Color::black);
		win.attach(box1);

		Text box1_Zagl{ Point{685, 875} , "chapter12.cpp:" };
		box1_Zagl.set_color(Color::black);
		win.attach(box1_Zagl);

		Text box1_text_1{ Point{605, 900} , "#include 'Graph.h'" };
		box1_text_1.set_color(Color::black);
		win.attach(box1_text_1);

		Text box1_text_2{ Point{605, 920} , "#include 'Simple_window.h'" };
		box1_text_2.set_color(Color::black);
		win.attach(box1_text_2);

		Text box1_text_3{ Point{605, 940} , "int main() {...}" };
		box1_text_3.set_color(Color::black);
		win.attach(box1_text_3);
	
		Rectangle_BS box2{ Point{850 ,760 } , 300 , 100 }; // Левый верхний угол, ширина , высота
		box2.set_color(Color::black);
		win.attach(box2);

		Text box2_Zagl{ Point{870 ,755} , "Simple_window.h:" };
		box2_Zagl.set_color(Color::black);
		win.attach(box2_Zagl);

		Text box2_text_1{ Point{855, 780} , "// Window interface:" };
		box2_text_1.set_color(Color::black);
		win.attach(box2_text_1);

		Text box2_text_2{ Point{855, 800} , "class Simple_window {...}" };
		box2_text_2.set_color(Color::black);
		win.attach(box2_text_2);

		Text box2_text_3{ Point{855, 820} , "..." };
		box2_text_3.set_color(Color::black);
		win.attach(box2_text_3);

		Rectangle_BS box3{ Point{1180 ,700 } , 100 , 33 }; // Левый верхний угол, ширина , высота
		box3.set_color(Color::black);
		win.attach(box3);

		Text box3_Zagl{ Point{1200 ,696} , "GUI.cpp:" };
		box3_Zagl.set_color(Color::black);
		win.attach(box3_Zagl);

		Text box3_text_1{ Point{1185, 720} , "Code GUI" };
		box3_text_1.set_color(Color::black);
		win.attach(box3_text_1);


		Rectangle_BS box4{ Point{1120 ,560 } , 200 , 100 }; // Левый верхний угол, ширина , высота
		box4.set_color(Color::black);
		win.attach(box4);

		Text box4_Zagl{ Point{1140 ,555} , "GUI.h:" };
		box4_Zagl.set_color(Color::black);
		win.attach(box4_Zagl);

		Text box4_text_1{ Point{1125, 580} , "// interface GUI:" };
		box4_text_1.set_color(Color::black);
		win.attach(box4_text_1);

		Text box4_text_2{ Point{1125, 600} , "struct In_box {}" };
		box4_text_2.set_color(Color::black);
		win.attach(box4_text_2);

		Text box4_text_3{ Point{1125, 620} , "..." };
		box4_text_3.set_color(Color::black);
		win.attach(box4_text_3);


		Rectangle_BS box5{ Point{900 ,400} , 200 , 100 }; // Левый верхний угол, ширина , высота
		box5.set_color(Color::black);
		win.attach(box5);

		Text box5_Zagl{ Point{920 ,395} , "Window.h:" };
		box5_Zagl.set_color(Color::black);
		win.attach(box5_Zagl);

		Text box5_text_1{ Point{905, 420} , "// Window interface:" };
		box5_text_1.set_color(Color::black);
		win.attach(box5_text_1);

		Text box5_text_2{ Point{905, 440} , "class	window {...}" };
		box5_text_2.set_color(Color::black);
		win.attach(box5_text_2);

		Text box5_text_3{ Point{905, 460} , "..." };
		box5_text_3.set_color(Color::black);
		win.attach(box5_text_3);


		Rectangle_BS box8{ Point{500 ,750 } , 100 , 33 }; // Левый верхний угол, ширина , высота
		box8.set_color(Color::black);
		win.attach(box8);

		Text box8_Zagl{ Point{505 ,745} , "Graph.cpp:" };
		box8_Zagl.set_color(Color::black);
		win.attach(box8_Zagl);

		Text box8_text_1{ Point{505, 770} , "graphic code" };
		box8_text_1.set_color(Color::black);
		win.attach(box8_text_1);

	
		Rectangle_BS box9{ Point{800, 660 } , 100 , 33 }; // Левый верхний угол, ширина , высота
		box9.set_color(Color::black);
		win.attach(box9);

		Text box9_Zagl{ Point{803, 655} , "window.cpp:" };
		box9_Zagl.set_color(Color::black);
		win.attach(box9_Zagl);

		Text box9_text_1{ Point{805, 680} , "window code" };
		box9_text_1.set_color(Color::black);
		win.attach(box9_text_1);

		Rectangle_BS box10{ Point{550 ,500 } , 200 , 100 }; // Левый верхний угол, ширина , высота
		box10.set_color(Color::black);
		win.attach(box10);

		Text box10_Zagl{ Point{555 ,495} , "Graph.h:" };
		box10_Zagl.set_color(Color::black);
		win.attach(box10_Zagl);

		Text box10_text_1{ Point{555, 520} , "// graphic interface:" };
		box10_text_1.set_color(Color::black);
		win.attach(box10_text_1);

		Text box10_text_2{ Point{555, 540} , "struct Shape {...}; " };
		box10_text_2.set_color(Color::black);
		win.attach(box10_text_2);

		Text box10_text_3{ Point{555, 560} , "..." };
		box10_text_3.set_color(Color::black);
		win.attach(box10_text_3);


		Rectangle_BS box11{ Point{550 ,300} , 120 , 33 }; // Левый верхний угол, ширина , высота
		box11.set_color(Color::black);
		win.attach(box11);

		Text box11_Zagl{ Point{555 ,295} , "Point.h:" };
		box11_Zagl.set_color(Color::black);
		win.attach(box11_Zagl);

		Text box11_text_1{ Point{555, 320} , "struct Point (...};" };
		box11_text_1.set_color(Color::black);
		win.attach(box11_text_1);

		Line ln1{ Point{650 ,880},Point{850 ,780} };
		ln1.set_color(Color::black);
		win.attach(ln1);

		Line ln2{ Point{1000 ,760 },Point{1120 ,600} };
		ln2.set_color(Color::black);
		win.attach(ln2);

		Line ln3{ Point{1200 ,700},Point{1160 ,660} };
		ln3.set_color(Color::black);
		win.attach(ln3);

		Line ln4{ Point{1120 ,560},Point{980 ,500} };
		ln4.set_color(Color::black);
		win.attach(ln4);

		Line ln5{ Point{1000 ,400},Point{1000 ,315} };
		ln5.set_color(Color::black);
		win.attach(ln5);

		Line ln6{ Point{1080 ,280},Point{1180 ,350 } };
		ln6.set_color(Color::black);
		win.attach(ln6);

		Line ln7{ Point{1000 ,760},Point{1000 ,500} };
		ln7.set_color(Color::black);
		win.attach(ln7);

		Line ln8{ Point{1220 ,560},Point{1079 ,267} };
		ln8.set_color(Color::black);
		win.attach(ln8);

		Line ln9{ Point{650 ,880},Point{630 ,600} };
		ln9.set_color(Color::black);
		win.attach(ln9);

		Line ln10{ Point{580 ,750},Point{610 ,600} };
		ln10.set_color(Color::black);
		win.attach(ln10);

		Line ln11{ Point{650 ,500 },Point{640 ,332} };
		ln11.set_color(Color::black);
		win.attach(ln11);

		Line ln12{ Point{650 ,500 },Point{950 ,315} };
		ln12.set_color(Color::black);
		win.attach(ln12);

		Line ln13{ Point{920 ,400},Point{658 ,332} };
		ln13.set_color(Color::black);
		win.attach(ln13);

		Line ln14{ Point{840, 660},Point{970 ,500} };
		ln14.set_color(Color::black);
		win.attach(ln14);

		Rectangle_BS box6_double2_tap{ Point{932 ,249} , 140 , 66 }; // Левый верхний угол, ширина , высота
		box6_double2_tap.set_color(Color::black);
		box6_double2_tap.set_fill_color(Color::white);
		win.attach(box6_double2_tap);

		Rectangle_BS box6_double_tap{ Point{936 ,251} , 140 , 66 }; // Левый верхний угол, ширина , высота
		box6_double_tap.set_color(Color::black);
		box6_double_tap.set_fill_color(Color::white);
		win.attach(box6_double_tap);

		Rectangle_BS box6{ Point{940 ,253} , 140 , 66 }; // Левый верхний угол, ширина , высота
		box6.set_color(Color::black);
		box6.set_fill_color(Color::white);
		win.attach(box6);

		Text box6_text_1{ Point{945, 270} , "Header files:" };                                         //////////////////////////////////////// YEAH
		box6_text_1.set_color(Color::black);
		win.attach(box6_text_1);

		Text box6_text_2{ Point{945, 290} , "files FLTK" };
		box6_text_2.set_color(Color::black);
		win.attach(box6_text_2);



		Rectangle_BS box7_double2_tap{ Point{1174 ,346} , 100 , 66 }; // Левый верхний угол, ширина , высота
		box7_double2_tap.set_color(Color::black);
		box7_double2_tap.set_fill_color(Color::white);
		win.attach(box7_double2_tap);

		Rectangle_BS box7_double_tap{ Point{1178 ,348} , 100 , 66 }; // Левый верхний угол, ширина , высота
		box7_double_tap.set_color(Color::black);
		box7_double_tap.set_fill_color(Color::white);
		win.attach(box7_double_tap);

		Rectangle_BS box7{ Point{1182 ,350 } , 100 , 66 }; // Левый верхний угол, ширина , высота
		box7.set_color(Color::black);
		box7.set_fill_color(Color::white);
		win.attach(box7);

		Text box7_text_1{ Point{1185, 370} , "Code FLTK" };
		box7_text_1.set_color(Color::black);
		win.attach(box7_text_1);


	win.wait_for_button();

	cout << "buy";
};