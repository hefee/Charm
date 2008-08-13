#ifndef TIMETRACKINGVIEW_H
#define TIMETRACKINGVIEW_H

#include <QWidget>

#include "Core/ViewInterface.h"

class CharmCommand;
class TimeTrackingSummaryWidget;

namespace Ui {
    class TimeTrackingView;
}

class TimeTrackingView : public QWidget,
                         public ViewInterface
{
    Q_OBJECT
public:
    explicit TimeTrackingView( QWidget* parent = 0 );
    ~TimeTrackingView();
    // application:
    void stateChanged( State previous );
    void saveConfiguration();
    void emitCommand( CharmCommand* );
    void sendCommand( CharmCommand* );
    void commitCommand( CharmCommand* );
    void restore();
    void quit();

private:
    TimeTrackingSummaryWidget* summaryWidget();
    Ui::TimeTrackingView* m_ui;
};

#endif