#include "common.h"

class Convert
{
public:
    string ConvertDigit(int64_t num) {
        string res = "";
        auto numStr = to_string(num);
        // reverse(numStr.begin(), numStr.end());
        int len = numStr.length();
        int lastNum = -1;
        for (size_t i = 0; i < len; i++) {
            int curNum = toInt(numStr[i]);
            int countingUnit = (len - i) % 4;
            if (curNum == 0) {
                if (curNum != lastNum && countingUnit != 1) {
                    res += mMatchMap[curNum];
                }
                lastNum = curNum;
                continue;
            }
            lastNum = curNum;
            res += mMatchMap[curNum];
            res += mCountingUintMap[countingUnit];
            int bigCoutingUnit = (len - i - 1) / 4;
            if ((len - i - 1) % 4 == 0) {
                res += mBigCountingUintMap[bigCoutingUnit];
            }
        }
        cout << numStr << endl;
        return res;
    }

private:
    unordered_map<int, string> mMatchMap = { { 1, "一" }, { 2, "二" }, { 3, "三" }, { 4, "四" }, { 5, "五" },
                                             { 6, "六" }, { 7, "七" }, { 8, "八" }, { 9, "玖" }, { 0, "零" } };
    // unordered_map<int, string> mCountingUintMap = { { 0, "" }, { 1, "万" }, { 2, "亿" } };
    unordered_map<int, string> mCountingUintMap = { { 0, "千" }, { 1, "" }, { 2, "十" }, { 3, "百" } };
    unordered_map<int, string> mBigCountingUintMap = { { 1, "万" }, { 2, "亿" } };
};
