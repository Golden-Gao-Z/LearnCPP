#include <windows.h>
#include "DebugTool.h"

void CenterConsole() {
    // 获取控制台窗口句柄
    HWND consoleWindow = GetConsoleWindow();
    if (consoleWindow == nullptr) {
        return;
    }

    // 获取屏幕尺寸
    RECT screenRect;
    if (GetWindowRect(GetDesktopWindow(), &screenRect) == 0) {
        return;
    }

    // 获取控制台窗口尺寸
    RECT consoleRect;
    if (GetWindowRect(consoleWindow, &consoleRect) == 0) {
        return;
    }

    // 计算控制台窗口新的位置
    int screenWidth = screenRect.right - screenRect.left;
    int screenHeight = screenRect.bottom - screenRect.top;
    int consoleWidth = consoleRect.right - consoleRect.left;
    int consoleHeight = consoleRect.bottom - consoleRect.top;

    int xPos = (screenWidth - consoleWidth) / 2;
    int yPos = (screenHeight - consoleHeight) / 2;

    // 设置控制台窗口新的位置
    if (SetWindowPos(consoleWindow, HWND_TOP, xPos, yPos, 0, 0, SWP_NOSIZE | SWP_NOZORDER) == 0) {
    }
}