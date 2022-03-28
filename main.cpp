#include "common.h"
#include "convert.h"

using namespace std;

int main(int arg, char** argv) {
    Convert obj;
    int num = 0;
    if (arg == 2) {
        num = toInt(argv[1]);
    }
    auto res = obj.ConvertDigit(num);
    cout << "res:" << res << endl;
    return 0;
}