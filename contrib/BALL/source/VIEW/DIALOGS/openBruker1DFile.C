// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: openBruker1DFile.C,v 1.6.16.1 2007-03-25 22:02:11 oliver Exp $

#include <BALL/VIEW/DIALOGS/openBruker1DFile.h>
#include <BALL/VIEW/KERNEL/mainControl.h>
#include <BALL/VIEW/KERNEL/message.h>

#include <BALL/FORMAT/bruker1DFile.h>

#include <QtGui/q3filedialog.h>

namespace BALL
{
  namespace VIEW
  {
    OpenBruker1DFile::OpenBruker1DFile(QWidget* parent, const char* name)
      : QWidget(parent),
				ModularWidget(name)
    {
			hide();
			registerWidget(this);
    }
  
    OpenBruker1DFile::~OpenBruker1DFile()
      throw()
    {
      #ifdef BALL_VIEW_DEBUG
				Log.info() << "Destructing object of class OpenBruker1DFile" << endl;
      #endif
    }

    void OpenBruker1DFile::initializeWidget(MainControl&)
  		throw()
    {
      insertMenuEntry(MainControl::FILE_IMPORT, "Bruker&1D File", this, SLOT(openFile()));
    }

	  void OpenBruker1DFile::openFile()
		  throw()
    {
      Q3FileDialog* fd = new Q3FileDialog(this,"Import Bruker1DFile", true);
			fd->setMode(Q3FileDialog::ExistingFile);
      fd->setFilter("Bruker1DFile-files (*.1r)");
			if (!fd->exec()) return;
      setStatusbarText("reading Bruker1DFile file...");

      // reading the file
      Bruker1DFile myfile;
      
      try
      {
			  myfile.read(fd->selectedFile().ascii());
      }
      catch(...)
      {
				Log.info() << "> read Bruker1DFile file failed." << std::endl;
			  return;
      }

      setStatusbarText(String("Read 1D NMR spectrum from ") + fd->selectedFile().ascii());

			RegularData1D* data = new RegularData1D(myfile.getData());

      RegularData1DMessage* msg = new RegularData1DMessage(RegularData1DMessage::NEW);
			msg->setData(*data);
      notify_(msg);
    }
  }
}
