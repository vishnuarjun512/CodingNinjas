#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line[50];
    int letters, digits, spaces;

    letters = digits = spaces = 0;


    cin.get(line, 50);
	int j=0;
	while(line[j] != '$'){
          cin.get(line, 50);
          for (int i = 0; i<line.length(); ++i) {
            if ((line[i] >= 'a' && line[i] <= 'z') ||
                (line[i] >= 'A' && line[i] <= 'Z')) {
              letters++;
            } else if (line[i] >= '0' && line[i] <= '9') {
              digits++;
            } else if (line[i] == ' ') {
              spaces++;
            }
             else{
                spaces++;
             }
        }
	j++;
	}

    cout<<letters<<" "<<digits<<" "<<spaces << endl;

    return 0;
}