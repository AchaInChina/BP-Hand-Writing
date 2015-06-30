#include <iostream>
#include <fstream>
using namespace std;

struct Vertex{
	int num;				//�����
	int x;					//������x
	int y;					//������y
	int demand;				//�ͻ�������
};

int vertex_num;				//�������
double best_solution;		//���Ž�
int capacity;				//�������װ����
Vertex vertex[1000];		//��������

//�����ļ�������ʼ��ȫ�ֱ���
void readFile(char dataFile[]){
	ifstream input;
	input.open(dataFile);
	if (input.is_open()){
		input >> vertex_num >> best_solution >> capacity;
		//�ֿ�ԭ��
		vertex[0].num = 0;
		input >> vertex[0].x >> vertex[0].y;
		//���붥������
		for (int i=1; i<=vertex_num; i++){
			try{
				input >> vertex[i].num;
				input >> vertex[i].x;
				input >> vertex[i].y;
				input >> vertex[i].demand;
			}
			catch(string &err){
				cout << err <<endl;
			}
		}
		/*
		cout << vertex_num <<" "<< best_solution<<" "<<capacity<<endl;

		for (int i=0; i<= vertex_num; i++){
			cout <<vertex[i].num <<" "<< vertex[i].x <<" "<<vertex[i].y <<" "<<vertex[i].demand<<endl;
		}
		*/


	}
	else{
		cout << "open file failed!" <<endl;
	}
}

int main(){
	//���������ļ�����
	char dataFile[100] = "tai75a.dat";
	cout <<"���������ļ����֣�";
	//cin >> dataFile;
	readFile(dataFile);

	system("pause");
}
