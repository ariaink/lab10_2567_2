#include<iostream>
using namespace std;

int main(){
	int count[5] = {};//Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int stu = 0;
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do{
		cout << "Student [" <<++stu << "]: ";
		cin >> grade; 
		if(grade == '0') {
			break; 
		} //The loop must be terminated when grade = '0'
		
		if(grade == 'A'){
			count[0]++; // if grade is A
			//Do something
		}else if(grade == 'B'){
			count[1]++;
		}else if(grade == 'C'){
			count[2]++;
		}else if(grade == 'D'){
			count[3]++;
		}else if(grade = 'F'){
			count[4]++;
			 // if grade is B
			//Do something
		//and so on ... for grade = C, D, F	
		}else{ 
			cout <<"Wrong input. Please input again."; // grade is wrong input
			//Do something
		} 
	}while(true);
	
	
	cout << "In total" <<stu << "students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[0] <<", ";
	cout << "D = " << count[1] <<", ";	
	cout << "F = " << count[0] <<", ";	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}