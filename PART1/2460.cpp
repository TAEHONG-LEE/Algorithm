#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int passengerNum = 0;
    int in, out;

    for(int stationNum = 0; stationNum < 10; stationNum++){
        cin >> out >> in;
        passengerNum -= out;
        passengerNum += in;

        if(max < passengerNum){
            max = passengerNum;
        }
        
    }
    cout << max << endl;
    return 0;
}