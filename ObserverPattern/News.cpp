#include "News.h"

void News::Update(const std::string& messageToPrint)
{
	std::cout << "According to " << ChannelName << " weather will be " << messageToPrint << std::endl;
}

void News::RemoveFromSubjectList()
{
	AttachedSubject.Detach(this);
}
