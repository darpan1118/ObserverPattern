#include "Weather.h"

void Weather::Attach(IObserver* observer)
{
	observersToNotify.emplace_back(observer);
}

void Weather::Detach(IObserver* observer)
{
	observersToNotify.remove(observer);
}

void Weather::Notify()
{
	for (auto i : observersToNotify)
	{
		i->Update(messageToObservers);
	}
}

void Weather::NotifyWeatherChange(std::string&& NewWeather)
{
	messageToObservers = NewWeather;
	Notify();
}
