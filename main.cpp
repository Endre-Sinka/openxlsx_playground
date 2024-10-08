#include <OpenXLSX.hpp>
#include <iostream>

#include "XLCellValue.hpp"
#include "XLDocument.hpp"

using namespace std;
using namespace OpenXLSX;

int main() {
  XLDocument doc;
  doc.create("./Spreadsheet.xlsx", XLForceOverwrite);
  auto wks = doc.workbook().worksheet("Sheet1");
  wks.cell("A1").value() = "  Hello OpenXLSX!  ss";

  doc.close();
  doc.save();
  return 0;
}