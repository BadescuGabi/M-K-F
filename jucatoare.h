
using namespace std;

class jucatoare {
    string numele;
    vector<string> baietii{"Robert", "Balmus", "Gabri", "Neacsu", "Bobo", "Pana", "Misu", "Lazar", "Victor", "Adelin",
                           "Octav", "Cata Ciucas", "Tony porcu", "Turcu", "Son", "Dinca", "Badita profu de sport",
                           "Victor Cata", "Tedy", "Dorian the Poop", "Ivascu Vlad", "Nitulescu", "Rosescu",
                           "Cosmin Chitescu", "Denis", "Adrian Dumitru Original", "Condu", "Stefan Dumitrescu",
                           "Chiri Tiganu", "Razvanel", "Stefan Nastase", "Tibi Din", "Tomy Costache", "Vlad Craciun",
                           "Bene", "Piscu", "Dani Sandu", "Andrei Mace", "Casi", "Domnu Mak",
                           "Dulica", "Tanasie", "Selly", "Tiby Matei", "Nicolas"};
public:
    static map<string, int> kill;
    static map<string, int> fuck;
    static map<string, int> marry;
private:
    static string copie;
    int indice = baietii.size();
    static int pt_decizie;
    vector<string> copii;
public:
    jucatoare();

    jucatoare(string s);

    virtual ~jucatoare();

    const vector<string> &getBaietii() const;


public:
    void kills(int z) {
        map<string, int>::iterator itr = kill.find(copii[z]);
        if (itr != kill.end()) {
            itr->second++;    // increment map's value for key 'c'
        }
    }

    void fucks(int z) {
        map<string, int>::iterator itr = fuck.find(copii[z]);
        if (itr != fuck.end()) {
            itr->second++;    // increment map's value for key 'c'
        }
    }

    void marrys(int z) {
        map<string, int>::iterator itr = marry.find(copii[z]);
        if (itr != marry.end()) {
            itr->second++;    // increment map's value for key 'c'
        }
    }

private:
    void Gabi() {
        int j = 0;
        int i = -1;
        int ok = 1;
        while (ok == 1) {
            for (i = 0; i < baietii.size(); ++i) {
                if (baietii[i] == "Gabi") {
                    baietii.erase(baietii.begin() + i);
                    ok = 1;
                    j++;
                    break;
                }
                ok = 0;
            }
        }
        while (j != 0) {
            setIndice();
            j--;
        }
    }

    void Robert() {
        int j = 0;
        int i = -1;
        int ok = 1;
        while (ok == 1) {
            for (i = 0; i < baietii.size(); ++i) {
                if (baietii[i] == "Robert") {
                    baietii.erase(baietii.begin() + i);
                    ok = 1;
                    j++;
                    break;
                }
                ok = 0;
            }
        }
        while (j != 0) {
            setIndice();
            j--;
        }
    }

public:
    void joaca() {
        vector<string>::iterator it;
        for (it = baietii.begin(); it != baietii.end(); ++it) {
            random_shuffle(baietii.begin(), baietii.end());
        }
        cout << baietii[indice - 1];
        copie = baietii[indice - 1];
        copii.push_back(baietii[indice - 1]);
        if (copii.size() == 3) {
            for (int i = 0; i < 3; ++i) {
                decizie(copii[i], i);
            }
            copii.clear();
        }
        if (baietii[indice - 1] == "Gabi")
            Gabi();
        else if (baietii[indice - 1] == "Gabi")
            Robert();
        else {
            baietii.pop_back();
            setIndice();
        }
    }

    void decizie(string copil, int z) {
        string s;
        cin >> s;
        if (s == "k")
            kills(z);
        if (s == "f")
            fucks(z);
        if (s == "m")
            marrys(z);
    }

    void afisare_kill() {
        map<string, int>::iterator iterator1;
        int max = -1;
        auto copie2 = iterator1;
        for (iterator1 = kill.begin(); iterator1 != kill.end(); ++iterator1) {
            if (iterator1->second > max) {
                max = iterator1->second;
                copie2 = iterator1;
            }
        }
        cout << "cel mai omorat este: " << endl;
        for (iterator1 = kill.begin(); iterator1 != kill.end(); ++iterator1) {
            if (iterator1->second == max) {
                cout << iterator1->first << " ";
                cout << iterator1->second<<endl;
            }
        }
    }

    void afisare_fuck() {
        map<string, int>::iterator iterator1;
        int max = -1;
        auto copie2 = iterator1;
        for (iterator1 = fuck.begin(); iterator1 != fuck.end(); ++iterator1) {
            if (iterator1->second > max) {
                max = iterator1->second;
                copie2 = iterator1;
            }
        }
        cout << "cel mai futut este: " << endl;
        for (iterator1 = fuck.begin(); iterator1 != fuck.end(); ++iterator1) {
            if (iterator1->second == max) {
                cout << iterator1->first << " ";
                cout << iterator1->second<<endl;
            }
        }
    }

    void afisare_marry() {
        map<string, int>::iterator iterator1;
        int max = -1;
        auto copie2 = iterator1;
        for (iterator1 = marry.begin(); iterator1 != marry.end(); ++iterator1) {
            if (iterator1->second > max) {
                max = iterator1->second;
                copie2 = iterator1;
            }
        }
        cout << "cel mai baiat de casa este: " << endl;
        for (iterator1 = marry.begin(); iterator1 != marry.end(); ++iterator1) {
            if (iterator1->second == max) {
                cout << iterator1->first << " ";
                cout << iterator1->second<<endl;
            }
        }
    }



    void setIndice();

};

#endif //UNTITLED2_JUCATOARE_H
