//#include<iostream>
//using namespace std;
///*
//��Ԫ friend
//	ȫ�ֺ�������Ԫ
//	������Ԫ
//	��Ա��������Ԫ
//*/
//class Building;
//class GoodGay {
//public:
//	GoodGay();
//	void visit();
//	void visit2();//���ܷ���˽�г�Ա
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
//	SittingRoom = "����";
//	BadRoom = "����";
//}
//GoodGay::GoodGay() {
//	building = new Building;
//}
//void GoodGay::visit() {
//	cout<<building->SittingRoom<<endl;
//	cout << building->BadRoom << endl;//˽�г�Ա
//}
//void GoodGay::visit2() {
//	cout << building->SittingRoom << endl;
//	cout << building->BadRoom << endl;//˽�г�Ա
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