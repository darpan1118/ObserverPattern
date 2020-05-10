#include "News.h"
#include "Weather.h"

int main()
{
	Weather* weatherStation = new Weather();
	News* CNN = new News(*weatherStation, "CNN");
	News* BCC = new News(*weatherStation, "BCC");
	News* ABC = new News(*weatherStation, "ABC");
	News* CBA = new News(*weatherStation, "CBA");
	
	while (true)
	{
		std::cout << "1) rain, 2) Sun, 3) Snow, 4) Wind, press anything else to quit" << std::endl;
		int ans = 0;
		std::cin >> ans;
		if (ans == 1)
		{
			weatherStation->NotifyWeatherChange("Raining");
			BCC->RemoveFromSubjectList();
		}
		else if (ans == 2)
			weatherStation->NotifyWeatherChange("Hot");
		else if (ans == 3)
			weatherStation->NotifyWeatherChange("Snowfall");
		else if (ans == 4)
			weatherStation->NotifyWeatherChange("Windy");
		else
		{
			weatherStation->NotifyWeatherChange("Bye! Bye!");
			break;
		}
		
	}

	delete CNN;
	delete BCC;
	delete ABC;
	delete CBA;
	delete weatherStation;

	getchar();
	return EXIT_SUCCESS;
}