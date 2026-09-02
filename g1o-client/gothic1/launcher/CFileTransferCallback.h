#ifndef CFILETRANSFERCALLBACK_H
#define CFILETRANSFERCALLBACK_H

#include <QObject>
#include <QString>

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <string>

class CFileTransferCallback : public QObject
{
    Q_OBJECT

signals:
    void onFileShow();
    void onFileSaved(unsigned fileIndex, unsigned filesAmount, QString fileName);
    void onFileNew(unsigned partCount, unsigned partTotal, unsigned totalCount, unsigned totalSize,
                   unsigned fileIndex, unsigned filesAmount, QString fileName);
    void onFileProgress(unsigned partCount, unsigned partTotal, unsigned totalCount, unsigned totalSize);
    void onFileDownloadComplete();

public:
    CFileTransferCallback();
    ~CFileTransferCallback();

    void restart(bool show = false);
    void cancel();
    bool beginFile(const std::string& relativePath, std::uint64_t size, std::uint32_t fileIndex,
                   std::uint32_t fileCount, std::uint64_t totalSize);
    bool writeChunk(std::uint64_t offset, const void* data, std::size_t size);
    bool endFile(std::uint64_t expectedHash);
    bool complete();

private:
    static unsigned displaySize(std::uint64_t value);
    static std::uint64_t hashFile(const std::filesystem::path& path);
    bool resolvePath(const std::string& relativePath, std::filesystem::path& destination) const;

    std::filesystem::path m_Root;
    std::filesystem::path m_Destination;
    std::filesystem::path m_Temporary;
    std::ofstream m_Output;
    std::string m_RelativePath;
    std::uint64_t m_CurrentSize = 0;
    std::uint64_t m_CurrentReceived = 0;
    std::uint64_t m_CompletedReceived = 0;
    std::uint64_t m_TotalSize = 0;
    std::uint32_t m_FileIndex = 0;
    std::uint32_t m_FileCount = 0;
    bool m_WasShown = false;
};

#endif
