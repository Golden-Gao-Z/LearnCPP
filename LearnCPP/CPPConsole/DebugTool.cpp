#include <windows.h>
#include "DebugTool.h"

void CenterConsole() {
    // ��ȡ����̨���ھ��
    HWND consoleWindow = GetConsoleWindow();
    if (consoleWindow == nullptr) {
        return;
    }

    // ��ȡ��Ļ�ߴ�
    RECT screenRect;
    if (GetWindowRect(GetDesktopWindow(), &screenRect) == 0) {
        return;
    }

    // ��ȡ����̨���ڳߴ�
    RECT consoleRect;
    if (GetWindowRect(consoleWindow, &consoleRect) == 0) {
        return;
    }

    // �������̨�����µ�λ��
    int screenWidth = screenRect.right - screenRect.left;
    int screenHeight = screenRect.bottom - screenRect.top;
    int consoleWidth = consoleRect.right - consoleRect.left;
    int consoleHeight = consoleRect.bottom - consoleRect.top;

    int xPos = (screenWidth - consoleWidth) / 2;
    int yPos = (screenHeight - consoleHeight) / 2;

    // ���ÿ���̨�����µ�λ��
    if (SetWindowPos(consoleWindow, HWND_TOP, xPos, yPos, 0, 0, SWP_NOSIZE | SWP_NOZORDER) == 0) {
    }
}