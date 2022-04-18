/*
 * Copyright (c) 2020-2021. Uniontech Software Ltd. All rights reserved.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string>
#include <QDBusArgument>
#include <QObject>
#include <QList>
#include <QFile>
#include <QDebug>
#include <QTemporaryDir>
#include <QFileInfo>

#include "module/util/fs.h"
#include "module/util/json.h"
#include "module/util/repo.h"
#include "service/impl/dbus_retcode.h"

using linglong::dbus::RetCode;

// 当前在线包对应的包名/版本/架构/uab存储URL信息
class AppMetaInfo : public JsonSerialize
{
    Q_OBJECT
    Q_JSON_CONSTRUCTOR(AppMetaInfo)

public:
    Q_JSON_PROPERTY(QString, appId);
    Q_JSON_PROPERTY(QString, name);
    Q_JSON_PROPERTY(QString, version);
    Q_JSON_PROPERTY(QString, arch);
    // app 类型
    Q_JSON_PROPERTY(QString, kind);
    Q_JSON_PROPERTY(QString, runtime);
    // 软件包对应的uab存储地址
    Q_JSON_PROPERTY(QString, uabUrl);
    // app 所属远端仓库名称
    Q_JSON_PROPERTY(QString, repoName);
    // app 描述
    Q_JSON_PROPERTY(QString, description);
    // 安装应用对应的用户
    Q_JSON_PROPERTY(QString, user);
};
Q_JSON_DECLARE_PTR_METATYPE(AppMetaInfo)

typedef QMap<QString, QString> ParamStringMap;
Q_DECLARE_METATYPE(ParamStringMap)

namespace linglong {
namespace package {
void registerAllMetaType();
} // namespace package
} // namespace linglong