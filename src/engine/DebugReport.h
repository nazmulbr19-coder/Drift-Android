#pragma once

#include <QString>
#include <QVariantMap>

// Snapshot of decoder/encoder capability and host facts for the Debug info
// dialog and GitHub bug reports. Hardware decode on Android is MediaCodec;
// the host Linux test build reports software only. Hardware encode is probed
// from the exporter catalog. `hints` lists a missing ONNX Runtime install.
class DebugReport
{
public:
    static QVariantMap collect();
    static QString formatPlainText(const QVariantMap &info);
};
