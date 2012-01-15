/** \file AuthPlugin.h
\brief Define the authentication plugin
\author alpha_one_x86
\version 0.3
\date 2010 */

#ifndef AUTHPLUGIN_H
#define AUTHPLUGIN_H

#include <QThread>
#include <QObject>
#include <QSemaphore>
#include <QStringList>
#include <QString>
#include <QCryptographicHash>

#include "Environment.h"

class AuthPlugin : public QThread
{
	Q_OBJECT
public:
	AuthPlugin(QObject * parent);
	~AuthPlugin();
	void stop();
	void loadSearchPath(QStringList readPath,QStringList searchPathPlugin);
	static QStringList getFileList(QString path);
protected:
	void run();
private:
	bool stopIt;
	QSemaphore sem;
	QStringList readPath;
	QStringList searchPathPlugin;
signals:
	void authentifiedPath(QString);
};

#endif // AUTHPLUGIN_H