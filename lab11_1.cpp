#include<iostream>
using namespace std;

int main(){
	int a = 0,b = 0,c = 0,d = 0,f = 0;
	int count[5] = {a,b,c,d,f};
	int x = 0;
	int t = 0;
	char grade; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << x + 1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			//Do something
			count[0] += 1;
			t += 1;
		}else if(grade == 'B'){// if grade is B
			//Do something
			count[1] += 1;
			t += 1;
		//and so on ... for grade = C, D, F	
		}else if(grade == 'C'){ // grade is wrong input
			//Do something
			count[2] += 1;
			t += 1;
		}else if(grade == 'D'){
			/* code */
			count[3] += 1;
			t += 1;
		}else if (grade == 'F')
		{
			/* code */
			count[4] += 1;
			t += 1;
		}
		else
		{
			if (grade != '0')
			{
				/* code */
				cout << "Wrong input. Please input agian.\n";
				continue;
			}
			else
				break;
		}
		x++;
	}while(grade != '0');
	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<" ";	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
