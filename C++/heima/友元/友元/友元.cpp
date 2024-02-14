//#include<iostream>
//using namespace std;
///*
//友元 friend
//	全局函数做友元
//	类做友元
//	成员函数做友元
//*/
//class Building;
//class GoodGay {
//public:
//	GoodGay();
//	void visit();
//	void visit2();//不能访问私有成员
//	Building* building;
//};
//class Building {
//	//friend void goodGay(Building* building);
//	//friend class GoodGay;
//	friend void GoodGay::visit2();
//	friend void GoodGay::visit();
//public:
//	Building();
//public:
//	string SittingRoom;
//private:
//	string BadRoom;
//
//};
//Building::Building() {
//	SittingRoom = "客厅";
//	BadRoom = "卧室";
//}
//GoodGay::GoodGay() {
//	building = new Building;
//}
//void GoodGay::visit() {
//	cout<<building->SittingRoom<<endl;
//	cout << building->BadRoom << endl;//私有成员
//}
//void GoodGay::visit2() {
//	cout << building->SittingRoom << endl;
//	cout << building->BadRoom << endl;//私有成员
//}
////void goodGay(Building* building) {
////	cout << building->SittingRoom << endl;
////	cout << building->BadRoom<< endl;
////}
//void test01() {
//	//Building building;
//	//goodGay(&building);
//	GoodGay g;
//	g.visit();
//	g.visit2();
//}
//int main1() {
//	test01();
//	return 0;
//}