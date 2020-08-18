#include <string>
#include <vector>

using namespace std;

class CSV { // Интерфейс для чтения данных .csv

public:
    CSV(istream& fin = cin, string sep = ",") :
        fin(fin), seporator(sep) {}
    int getnfield() const { return nfield; }


  private:
      istream& fin;
      string seporator;
      int nfield;
      vector<string> v;


}
