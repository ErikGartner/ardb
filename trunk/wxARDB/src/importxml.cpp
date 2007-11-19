
#include "importxml.h"
#include <wx/file.h>

#define BUFFER_SIZE 256

char MakeAscii(char c);

wxString ReadXmlFile(wxString filename)
{
	size_t bytesRead = 0;
	char buffer[BUFFER_SIZE];
	wxFile file(filename);
	wxString xmlString;

	if (file.IsOpened())
	{
		while(!file.Eof())
		{
			bytesRead = file.Read(buffer,BUFFER_SIZE);

			if (bytesRead != wxInvalidOffset)
			{
				for(size_t i=0;i<bytesRead;i++)
				{
					xmlString += MakeAscii(buffer[i]);
				}
			}
		}
	}

	file.Close();

	return xmlString;
}

char MakeAscii(char c)
{
	char result = c;

	switch (c)
	{
	case '�':
	case '�':
	case '�':
	case '�':
	case '�':
	case '�':
		result = 'a';
		break;

	case '�':
		result = 'c';
		break;

	case '�':
	case '�':
	case '�':
	case '�':
		result = 'e';
		break;

	case '�':
	case '�':
	case '�':
	case '�':
		result = 'i';
		break;

	case '�':
		result = 'n';
		break;

	case '�':
	case '�':
	case '�':
	case '�':
	case '�':
		result = 'o';
		break;

	case '�':
	case '�':
	case '�':
	case '�':
		result = 'u';
		break;

	case '�':
	case '�':
		result = 'y';
		break;

	default:
		break;
	}

	return result;
}