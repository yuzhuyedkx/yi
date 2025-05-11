#include"common.h"
class Timer {
protected:
public:
	static bool tTimer(int  duration,int id) {
		static int startTime[10];
		int endTime = clock();
		if (endTime - startTime[id] > duration) {
			startTime[id] = endTime;
			return true;
		}
		return false;
	}
};