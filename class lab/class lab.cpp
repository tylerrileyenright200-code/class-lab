#include <iostream>
#include <queue>

class Process 
{public :
	std::string id;
	int priority = 0;

	bool operator <( Process rightHandSideProcess ) const
	{
		if (this->priority < rightHandSideProcess.priority)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	std::vector <Process> processes;

	processes.push_back({ "A", 1 });
	processes.push_back({ "B", 3 });
	processes.push_back({ "C", 2 });
	std::sort(processes.begin(), processes.end());
	std::priority_queue<Process> processQueue;
	
	Process firstProcess = {"A", 2};

	processQueue.push(firstProcess);
	processQueue.push({ "B", 3 });

}

