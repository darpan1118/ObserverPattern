#include "ISubject.h"
#include <iostream>

class News : public IObserver
{
public:
	News(ISubject& subject, std::string name) : AttachedSubject{ subject }, ChannelName{name} 
	{
		this->AttachedSubject.Attach(this);
	};
	~News() { std::cout << "No more news channel!" << std::endl; };

	void Update(const std::string& messageToPrint) override;

	void RemoveFromSubjectList();
private:
	ISubject& AttachedSubject;
	std::string ChannelName;
};

