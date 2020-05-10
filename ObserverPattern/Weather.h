#pragma once
#include "ISubject.h"
#include <iostream>
#include <list>

class Weather : public ISubject
{
public:
	Weather() : messageToObservers{ "" }
	{};

	~Weather() 
	{
		std::cout << "Goodbye, No more weather for you!!" << std::endl;
	};

	void Attach(IObserver* observer) override;

	void Detach(IObserver* observer) override;

	void PrintObserverCount() const
	{
		std::cout << "Notifying weather to " << observersToNotify.size() << " observers" << std::endl;
	};

	void NotifyWeatherChange(std::string&& NewWeather);

private:
	std::list<IObserver*> observersToNotify;
	std::string messageToObservers;

	void Notify() override;
};

