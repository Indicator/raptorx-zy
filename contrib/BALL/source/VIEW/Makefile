# -*- Mode: C++; tab-width: 2; -*-
# vi: set ts=2:
#
# $Id: Makefile,v 1.8.14.1 2007-03-25 21:56:23 oliver Exp $
#
# Author:
#   Oliver Kohlbacher
#

include ../config.mak

DIRECTORY=VIEW

THISLIB=libVIEW

DIRS=\
	SOAP\
	DIALOGS\
	DATATYPE\
	KERNEL\
	MODELS\
	PRIMITIVES\
	RENDERING\
	WIDGETS

default: dirs

dirs:		dummy
	@$(MAKE) subdirs SUBDIRS="$(DIRS)" TARGET=default

collectlib:	dummy
	@$(MAKE) subdirs SUBDIRS="$(DIRS)" TARGET=collectlib LIBNAME="$(THISLIB)"

depend:	dummy
	@echo "" > .Dependencies
	@for i in $(DIRS); do ( cd $$i; echo "" >.Dependencies; cd .. ) ; done
	@$(MAKE) subdirs SUBDIRS="$(DIRS)" TARGET=depend

subdirs:	dummy
	@set -e; for i in $(SUBDIRS); do cd $$i; if $(MAKE) $(TARGET); then cd .. ; else cd .. ; exit 1 ; fi ; done

default_clean:
	@$(MAKE) subdirs SUBDIRS="$(DIRS)" TARGET=default_clean


collect:	$(OBJECT_LISTS)
	
dummy:
