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
      int nfield;
      vector<string> field;
      string seporator;
      string line;

      int split();
      int endofline(char);
}


int CSV::endofline(char c)
{
    int eol;

    eol = (c == '\r' || c == '\n');
    if (c == '\r') {
        fin.get(c);
        if (!fin.eof() && (c != '\n'))
            fin.putback(c);
    }
    return eol;
}
