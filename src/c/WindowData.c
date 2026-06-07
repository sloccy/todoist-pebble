#include <pebble.h>
#include "WindowData.h"
#include "Items.h"
#include "Projects.h"
#include "Main.h"

WindowData* createWindowData(Config* config)
{
    WindowData* wd = (WindowData*)malloc(sizeof(WindowData));
    wd->projects = 0;
    wd->items = 0;
    wd->config = config;
    wd->currentPage = 1;
    wd->selectedProjectIndex = 0;
    wd->currentScrollable = 0;
    wd->scrolledNumber = 0;
    return wd;
}

void setProjects(WindowData* wd, ProjectStruct* projects)
{
    wd->projects = projects;
}

int getLengthOfCurrentPage()
{
    WindowData* wd = (WindowData*)window_get_user_data(window);
    if (wd->currentPage == 1)
    {
        #ifdef PBL_MICROPHONE
            return (wd->projects) ? wd->projects->length + 1 : 0;
        #else
            return (wd->projects) ? wd->projects->length : 0;
        #endif
    }
    else
        return (wd->items) ? wd->items->length : 0;
}

void* getCurrentList()
{
    WindowData* wd = (WindowData*)window_get_user_data(window);
    if (wd->currentPage == 1)
        return wd->projects;
    else
        return wd->items;
    
}

void destroyWindowData(WindowData* wd)
{
    destroyProjectList(wd->projects);
    destroyItemList(wd->items);
    free(wd->config);
    free(wd);
}
