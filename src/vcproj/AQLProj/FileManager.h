#ifndef #FILEMANAGER_H
#define #FILEMANAGER_H

#include <string>
#include <memory>

namespace AQL {

class FileManager
{
private:
	FileManager(void);	
	~FileManager(void);
	AQL::FileManager::ReturnCodes RegisterMessage(unsigned int fileHandle, const std::string& message,
		const unsigned int line, const unsigned short column, const unsigned short messageType);
public:	
	static enum ReturnCodes {
		OK = 0,
		UNREGISTERED_FILE = 1
	};

	static FileManager& Create(void);
	unsigned int RegisterFile(const std::string& fileName);
	AQL::FileManager::ReturnCodes RegisterError(unsigned int fileHandle, const std::string& message, 
		const unsigned int line, const unsigned short column);
	AQL::FileManager::ReturnCodes RegisterWarning(unsigned int fileHandle, const std::string& message,
		const unsigned int line, const unsigned short column);
	
};

}


#endif