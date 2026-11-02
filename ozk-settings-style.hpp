#pragma once

#include <QString>

// Match the settings controls used by OZK Notify while retaining the
// multistream dialog's existing pages and output configuration.
inline QString ozkSettingsStyle()
{
	return QString::fromUtf8(R"QSS(
QDialog{background:#080f18;color:#dfe8ff;font-family:'Segoe UI';font-size:12px;}
QLabel{color:#dfe8ff;background:transparent;}
QGroupBox{color:#edf3ff;font-size:13px;font-weight:700;background:qlineargradient(x1:0,y1:0,x2:1,y2:1,stop:0 #101925,stop:1 #0b131e);border:1px solid #263244;border-radius:8px;margin-top:7px;padding:6px;}
QGroupBox::title{subcontrol-origin:margin;left:9px;padding:0 4px;}
QListWidget,QStackedWidget,QScrollArea{background:#080f18;color:#dfe8ff;border:0;}
QListWidget{background:#0b131e;border:1px solid #263244;border-radius:8px;padding:3px;}
QListWidget::item{min-height:27px;padding:3px 6px;border-radius:6px;}
QListWidget::item:selected{background:#18203c;color:#f1f3ff;border-bottom:2px solid #6547ff;}
QPushButton,QToolButton{color:#e1ebff;background:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #202a3b,stop:1 #141d2b);border:1px solid #39465d;border-radius:8px;min-height:20px;padding:3px 7px;font-size:12px;}
QPushButton:hover,QToolButton:hover{background:#26344d;border-color:#6476a0;}
QPushButton:focus,QToolButton:focus{border-color:#8a79ff;}
QPushButton:pressed,QToolButton:pressed{background:#111b30;}
QPushButton:disabled,QToolButton:disabled{color:#6c7890;border-color:#273246;}
QLineEdit,QComboBox,QSpinBox,QPlainTextEdit,QTextEdit{color:#e7eeff;background:#0c1420;border:1px solid #344865;border-radius:6px;padding:4px;selection-background-color:#316ac4;font-size:12px;}
QLineEdit:focus,QComboBox:focus,QSpinBox:focus,QPlainTextEdit:focus,QTextEdit:focus{border-color:#776af5;background:#111c2e;}
QComboBox QAbstractItemView{background:#101a2b;color:#e7eeff;selection-background-color:#26344d;}
QCheckBox,QRadioButton{color:#dce7fb;spacing:6px;min-height:20px;font-size:12px;}
QCheckBox::indicator,QRadioButton::indicator{width:16px;height:16px;}
QCheckBox::indicator:unchecked{border-radius:4px;background:#344357;border:1px solid #65748d;}
QCheckBox::indicator:checked{border-radius:4px;background:#00d37d;border:1px solid #2ff9a0;}
QTabWidget::pane{border:1px solid #263244;border-radius:8px;background:#0b131e;}
QTabBar::tab{color:#dfe8ff;background:#172236;border:1px solid #39465d;border-radius:6px;min-height:20px;padding:3px 10px;}
QTabBar::tab:selected{background:#18203c;border-bottom:2px solid #6547ff;font-weight:700;}
QScrollBar:vertical{border:0;background:#101929;width:9px;}
QScrollBar::handle:vertical{background:#384d6c;border-radius:4px;min-height:24px;}
QScrollBar::handle:vertical:hover{background:#52698d;}
QScrollBar::add-line:vertical,QScrollBar::sub-line:vertical{height:0;background:transparent;border:0;}
)QSS");
}
