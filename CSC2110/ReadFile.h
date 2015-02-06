#if !defined READ_FILE_H
#define READ_FILE_H
#include <fstream>
#include "Text.h"

namespace CSC2110
{
class ReadFile
{
   private:
      std::ifstream* input_file;
      bool _eof;
      bool closed;

   public:
      ReadFile(const char* file_name);
      ~ReadFile();
	  
      String* readLine();
      bool eof();
      void close();
};
}
#endif
