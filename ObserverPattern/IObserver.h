#pragma once
#include <string>

class IObserver
{
public:
	~IObserver() {};
	virtual void Update(const std::string& messageToPrint) = 0;
};