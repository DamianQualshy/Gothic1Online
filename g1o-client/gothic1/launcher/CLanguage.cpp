#include <QSettings>
#include <QFile>
#include <QTextStream>

#include "PCH.h"

//-------------------------------------------------------------------------------------------------------------------------------
//  Public method
//-------------------------------------------------------------------------------------------------------------------------------

void CLanguage::init()
{
    QSettings langConf("lang/lang.conf", QSettings::IniFormat);
    QStringList langList = langConf.value("lang").toString().split(QRegExp("\\s"));
    QStringList availableLanguages;

    for (QString lang : langList)
    {
        QFile fileLang("lang/translate/" + lang + ".lang");
        if (fileLang.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream stream(&fileLang);
            QString line;

            do
            {
                line = stream.readLine();

                if (!line.isEmpty() && line.at(0) != '#') // Comment
                {
                    char key[100], translate[500];
                    std::sscanf(line.toStdString().c_str(), "%s%[^\n]", key, translate);

                    QString strTranslate = translate;
                    strTranslate.replace(QRegExp("[\t]"), "");

                    // Remove spaces before text.
                    while (!strTranslate.isEmpty() && strTranslate.at(0) == ' ')
                        strTranslate.remove(0, 1);

                    m_Translate[lang][key] = strTranslate;
                }
            } while (!line.isNull());

            LAUNCHER.getUI()->cboxLanguage->addItem(QIcon("lang/icons/" + lang + ".png"), m_Translate[lang]["LANG_NAME"], lang);
            availableLanguages.append(lang);

            fileLang.close();
        }
    }

    connect(LAUNCHER.getUI()->cboxLanguage, SIGNAL(currentIndexChanged(int)),
            this, SLOT(onLanguageChanged(int)));

    // A missing or unavailable language must select a real entry. Otherwise
    // translations resolve to EMPTY while the combo box displays another row.
    int index = LAUNCHER.getUI()->cboxLanguage->findData(m_CurrLang);
    if (index == -1)
    {
        index = LAUNCHER.getUI()->cboxLanguage->findData("en");
        if (index == -1 && !availableLanguages.isEmpty())
            index = 0;
    }

    if (index != -1)
    {
        m_CurrLang = LAUNCHER.getUI()->cboxLanguage->itemData(index).toString();
        LAUNCHER.getUI()->cboxLanguage->setCurrentIndex(index);
    }
}

void CLanguage::setCurrentLang(QString lang)
{
    m_CurrLang = lang.toLower();
}

QString CLanguage::getTranslate(QString key)
{
    if (m_Translate.contains(m_CurrLang) && m_Translate[m_CurrLang].contains(key))
        return m_Translate[m_CurrLang][key];

    return "EMPTY";
}

//-------------------------------------------------------------------------------------------------------------------------------
//  Private slots
//-------------------------------------------------------------------------------------------------------------------------------

void CLanguage::onLanguageChanged(int index)
{
    Q_UNUSED(index)
    m_CurrLang = LAUNCHER.getUI()->cboxLanguage->currentData().toString();
    LAUNCHER.translate();
}
