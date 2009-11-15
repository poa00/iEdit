#include "stdafx.h"
#include "Utilities.h"
#include <shlwapi.h>

Utilities::Utilities(void)
{
}

Utilities::~Utilities(void)
{
}

CString Utilities::getSafeFileName(const CString& str)
{
	CString rs;
	for (int i = 0; i < str.GetLength(); i++) {
		TCHAR a = str.GetAt(i);
		if ((a == '|' || a == '\\') && i > 0) {
			if (_ismbblead(str.GetAt(i-1))) {
				rs += a;
				continue;
			}
		}
		if (a == '\n' || a == '\r') continue;
		UINT type = ::PathGetCharType(a);
		if (type == GCT_INVALID || type & GCT_WILD || type & GCT_SEPARATOR) continue;
		rs += a;
	}
	return rs;
}

CString Utilities::removeCR(const CString &str)
{
	CString toStr;
	for (int i = 0; i < str.GetLength(); i++) {
		if (str[i] == '\n') {
			;
		} else if (str[i] == '\r') {
			toStr += " ";
		} else {
			toStr += str[i];
		}
	}
	return toStr;
}

vector<CString> Utilities::getLines(const CString &text)
{
	vector<CString> lines;
	CString line;
	for (int i = 0; i < text.GetLength(); i++) {
		if (text[i] != '\r' && text[i] != '\n') {
			line += text[i];
		} else if (text[i] == '\n') {
			lines.push_back(line);
			line = "";
		}
	}
	if (line != "") {
		lines.push_back(line);
	}
	return lines;
}