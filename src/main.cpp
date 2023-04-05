#include "iostream"
#include "crow.h"

using namespace std;
using namespace crow;

int main() {
    SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]{
        json::wvalue x;
        x["message"] = "Selamat datang di Angringan AMIKOM";
        x["code"] = 200;
        return x;
    });

    app.loglevel(LogLevel::DEBUG);

    app.port(8080)
      .multithreaded()
      .run();

    return 0;
}