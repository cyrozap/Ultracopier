/** \file factory.h
\brief Define the factory
\author alpha_one_x86
\version 0.3
\date 2010 */

#include <QObject>
#include <QList>
#include <QStringList>
#include <QFileInfo>
#include <QProcess>

#include "interface/PluginInterface_CopyEngine.h"
#include "ui_options.h"
#include "copyEngine.h"
#include "Environment.h"

#ifndef FACTORY_H
#define FACTORY_H

namespace Ui {
	class options;
}

class Factory : public PluginInterface_CopyEngineFactory
{
	Q_OBJECT
	Q_INTERFACES(PluginInterface_CopyEngineFactory)
public:
	Factory();
	~Factory();
	PluginInterface_CopyEngine * getInstance();
	void setResources(OptionInterface * options,QString writePath,QString pluginPath);
	//get mode allowed
	/// \brief define if can copy file, folder or both
	CopyType getCopyType();
	bool canDoOnlyCopy();
	QStringList supportedProtocolsForTheSource();
	QStringList supportedProtocolsForTheDestination();
	QWidget * options();
private:
	Ui::options *ui;
	QWidget* tempWidget;
	OptionInterface * optionsEngine;
	QStringList mountSysPoint;
	QProcess mount;
	QString StandardError;
	QString StandardOutput;
	bool errorFound;
private slots:
	void error(QProcess::ProcessError error);
	void finished(int exitCode, QProcess::ExitStatus exitStatus);
	void readyReadStandardError();
	void readyReadStandardOutput();
	void setDoRightTransfer(bool doRightTransfer);
	void setKeepDate(bool keepDate);
	void setPrealloc(bool prealloc);
	void setBlockSize(int blockSize);
	void setAutoStart(bool autoStart);
	void setCheckDestinationFolder(bool checkDestinationFolder);
	void on_comboBoxFolderColision_currentIndexChanged(int index);
	void on_comboBoxFolderError_currentIndexChanged(int index);
public slots:
	void resetOptions();
	void newLanguageLoaded();
signals:
	void reloadLanguage();
};

#endif // FACTORY_H