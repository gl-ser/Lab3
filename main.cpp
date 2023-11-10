//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 3 ***                      //
//                                                                            //
// Файл main.cpp                                                              //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include <QCoreApplication>
#include <QTextStream>
#include <QTextCodec>

#include "TelemetricFile.h"


int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QTextStream cout(stdout);

  #ifndef __unix__
    cout.setCodec(QTextCodec::codecForName("CP866"));
  #else
    cout.setCodec(QTextCodec::codecForName("UTF8"));
  #endif

  cout << QString::fromUtf8("Лабораторная работа № 3\nГлущенко С.Ю.\n\n");

  TTelemetricFile TelemetricFile;
  QStringList Data;

  TelemetricFile.ReadFile("TestData.txt");
  Data = TelemetricFile.Print();

  cout << QString::fromUtf8("Содержимое телеметрического файла:\n");
  for(int i=0; i<Data.size(); i++)
    cout << QString::fromUtf8("Запись № ") << i+1 << "  " << Data[i] << "\n";

  cout << QString::fromUtf8("Всего записей: ") << Data.size() << "\n";
  return 0;
}
