#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 0 , 0 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 1920 , 1080, "best friends" }; // Простое окно

		Rectangle_BS box1{ Point{600 ,880 } , 300 , 100 }; // Левый верхний угол, ширина , высота
		box1.set_color(Color::black);
		win.attach(box1);

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

		Text box3_text_1{ Point{1185, 720} , "Code GUI" };
		box3_text_1.set_color(Color::black);
		win.attach(box3_text_1);


		Rectangle_BS box4{ Point{1120 ,560 } , 200 , 100 }; // Левый верхний угол, ширина , высота
		box4.set_color(Color::black);
		win.attach(box4);

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

		Text box5_text_1{ Point{905, 420} , "// Window interface:" };
		box5_text_1.set_color(Color::black);
		win.attach(box5_text_1);

		Text box5_text_2{ Point{905, 440} , "class	window {...}" };
		box5_text_2.set_color(Color::black);
		win.attach(box5_text_2);

		Text box5_text_3{ Point{905, 460} , "..." };
		box5_text_3.set_color(Color::black);
		win.attach(box5_text_3);



		Rectangle_BS box6{ Point{940 ,250} , 140 , 66 }; // Левый верхний угол, ширина , высота
		box6.set_color(Color::black);
		win.attach(box6);

		Text box6_text_1{ Point{945, 270} , "Header files:" };
		box6_text_1.set_color(Color::black);
		win.attach(box6_text_1);

		Text box6_text_2{ Point{945, 290} , "files FLTK" };
		box6_text_2.set_color(Color::black);
		win.attach(box6_text_2);


		Rectangle_BS box7{ Point{1180 ,350 } , 100 , 66 }; // Левый верхний угол, ширина , высота
		box7.set_color(Color::black);
		win.attach(box7);

		Text box7_text_1{ Point{1185, 370} , "Code FLTK" };
		box7_text_1.set_color(Color::black);
		win.attach(box7_text_1);


		Rectangle_BS box8{ Point{500 ,750 } , 100 , 33 }; // Левый верхний угол, ширина , высота
		box8.set_color(Color::black);
		win.attach(box8);

		Text box8_text_1{ Point{505, 770} , "graphic code" };
		box8_text_1.set_color(Color::black);
		win.attach(box8_text_1);

	
		Rectangle_BS box9{ Point{800, 660 } , 100 , 33 }; // Левый верхний угол, ширина , высота
		box9.set_color(Color::black);
		win.attach(box9);

		Text box9_text_1{ Point{805, 680} , "window code" };
		box9_text_1.set_color(Color::black);
		win.attach(box9_text_1);


		Rectangle_BS box10{ Point{550 ,500 } , 200 , 100 }; // Левый верхний угол, ширина , высота
		box10.set_color(Color::black);
		win.attach(box10);

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

		Text box11_text_1{ Point{555, 320} , "struct Point (...};" };
		box11_text_1.set_color(Color::black);
		win.attach(box11_text_1);


		//Polygon_BS poly;
		//poly.add(Point{ 149 ,880 });
		//win.attach(poly);
		//poly.add(Point{ 869, 760 });
		//poly.set_color(Color::black);
		//win.attach(poly);

	win.wait_for_button();

	cout << "buy";
};