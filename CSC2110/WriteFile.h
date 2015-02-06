#if !defined WRITE_FILE_H
#define WRITE_FILE_H
#include <fstream>
#include "Text.h"

using CSC2110::String;

namespace CSC2110
{
class WriteFile
{
   private:
      std::ofstream* output_file;
      bool closed;

   public:
      WriteFile(const char* file_name);
      ~WriteFile();
      void writeLine(String* line);
      void close();
};
}
#endif
