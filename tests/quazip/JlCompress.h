#ifndef JLCOMPRESSFOLDER_H_
#define JLCOMPRESSFOLDER_H_

#include "quazip.h"
#include <QString>
#include <QDir>
#include <QFileInfo>
#include <QFile>


class JlCompress {
private:
    static QStringList extractDir(QuaZip &zip, const QString &dir);
    static QStringList getFileList(QuaZip *zip);
    static QString extractFile(QuaZip &zip, QString fileName, QString fileDest);
    static QStringList extractFiles(QuaZip &zip, const QStringList &files, const QString &dir);
    /// Compress a single file.
    /**
      \param zip Opened zip to compress the file to.
      \param fileName The full path to the source file.
      \param fileDest The full name of the file inside the archive.
      \return true if success, false otherwise.
      */
    static bool compressFile(QuaZip* zip, QString fileName, QString fileDest);
    /// Compress a subdirectory.
    /**
      \param parentZip Opened zip containing the parent directory.
      \param dir The full path to the directory to pack.
      \param parentDir The full path to the directory corresponding to
      the root of the ZIP.
      \param recursive Whether to pack sub-directories as well or only
      files.
      \return true if success, false otherwise.
      */
    static bool compressSubDir(QuaZip* parentZip, QString dir, QString parentDir, bool recursive,
                               QDir::Filters filters);
    /// Extract a single file.
    /**
      \param zip The opened zip archive to extract from.
      \param fileName The full name of the file to extract.
      \param fileDest The full path to the destination file.
      \return true if success, false otherwise.
      */
    static bool extractFile(QuaZip* zip, QString fileName, QString fileDest);
    /// Remove some files.
    /**
      \param listFile The list of files to remove.
      \return true if success, false otherwise.
      */
    static bool removeFile(QStringList listFile);

public:
    /// Compress a single file.
    /**
      \param fileCompressed The name of the archive.
      \param file The file to compress.
      \return true if success, false otherwise.
      */
    static bool compressFile(QString fileCompressed, QString file);
    /// Compress a list of files.
    /**
      \param fileCompressed The name of the archive.
      \param files The file list to compress.
      \return true if success, false otherwise.
      */
    static bool compressFiles(QString fileCompressed, QStringList files);
    /// Compress a whole directory.
    /**
      Does not compress hidden files. See compressDir(QString, QString, bool, QDir::Filters).

      \param fileCompressed The name of the archive.
      \param dir The directory to compress.
      \param recursive Whether to pack the subdirectories as well, or
      just regular files.
      \return true if success, false otherwise.
      */
    static bool compressDir(QString fileCompressed, QString dir = QString(), bool recursive = true);
    /**
     * @brief Compress a whole directory.
     *
     * Unless filters are specified explicitly, packs
     * only regular non-hidden files (and subdirs, if @c recursive is true).
     * If filters are specified, they are OR-combined with
     * <tt>%QDir::AllDirs|%QDir::NoDotAndDotDot</tt> when searching for dirs
     * and with <tt>QDir::Files</tt> when searching for files.
     *
     * @param fileCompressed path to the resulting archive
     * @param dir path to the directory being compressed
     * @param recursive if true, then the subdirectories are packed as well
     * @param filters what to pack, filters are applied both when searching
     * for subdirs (if packing recursively) and when looking for files to pack
     * @return true on success, false otherwise
     */
    static bool compressDir(QString fileCompressed, QString dir,
                            bool recursive, QDir::Filters filters);

public:
    static QString extractFile(QString fileCompressed, QString fileName, QString fileDest = QString());
    static QStringList extractFiles(QString fileCompressed, QStringList files, QString dir = QString());
    static QStringList extractDir(QString fileCompressed, QString dir = QString());
    static QStringList getFileList(QString fileCompressed);
    static QString extractFile(QIODevice *ioDevice, QString fileName, QString fileDest = QString());
    static QStringList extractFiles(QIODevice *ioDevice, QStringList files, QString dir = QString());
    static QStringList extractDir(QIODevice *ioDevice, QString dir = QString());
    static QStringList getFileList(QIODevice *ioDevice);
};

#endif /* JLCOMPRESSFOLDER_H_ */
