#include "WriteFile.h"
#include <sstream>

namespace CSC2110
{
WriteFile::WriteFile(const char* file_name)
{
   output_file = new std::ofstream();
   output_file->open(file_name);
   closed = false;
}

WriteFile::~WriteFile()
{
   close();
   delete output_file;
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file->close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      *output_file << line->getText() << std::endl;
   }
}
}