#include<iostream>
using namespace std;

int main(){
	int i = 1,count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
    //The loop must be terminated when grade = '0'
			cout << "Student [" << i << "]: ";
		    cin >> grade; 
			if(grade == '0'){
				break;
			}
			if(grade == 'A'){
				count[0]++;
			}
			else if(grade == 'B'){
				count[1]++;
			}
			else if(grade == 'C'){
				count[2]++;
			}
			else if(grade == 'D'){
				count[3]++;
			}
			else if(grade == 'F'){
				count[4]++;
			}
			else if(grade != '0'){
				cout << "Wrong input. Please input again." << endl;
				i = i-2;
			}
			i++;
		}while(grade!='0') ;
		cout << "In total " << i-1 << " students." << endl;
		cout << "A = " << count[0] << ", " << "B = " << count[1] << ", "
		<< "C = " << count[2] << ", " << "D = " << count[3] << ", "
		<< "F = " << count[4] ;	
	
	return 0;
}
