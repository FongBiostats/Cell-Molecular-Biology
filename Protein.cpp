#include <iostream>
using namespace std;

class Car{
    public:
    string protein;
    string abbr;
    string group;
    string formula;

};

int main()
{
    Car carobj1;
    carobj1.protein = "Glycine";
    carobj1.abbr = "gly,G";
    carobj1.group = "Hydrophobic R Group";
    carobj1.formula = "C2H5NO2";

    Car carobj2;
    carobj2.protein = "Alanine";
    carobj2.abbr = "Ala,A";
    carobj2.group = "Hydrophobic R Group";
    carobj2.formula = "C3H7NO2";

    Car carobj3;
    carobj3.protein = "Valine";
    carobj3.abbr = "Val,V";
    carobj3.group = "Hydrophobic R Group";
    carobj3.formula = "C5H11NO2";

    Car carobj4;
    carobj4.protein = "Isoleucine";
    carobj4.abbr = "Ile,I";
    carobj4.group = "Hydrophoic R group";
    carobj4.formula = "C6H13NO2";

    Car carobj5;
    carobj5.protein = "Phenylalanine";
    carobj5.abbr = "Phe,F";
    carobj5.group = "Hydrophobic R Group";
    carobj5.formula = "C9H11NO2";

    Car carobj6;
    carobj6.protein = "Proline";
    carobj6.abbr = "Pro,P";
    carobj6.group = "Hydrophobic R Group";
    carobj6.formula = "C5H9NO2";

    Car carobj7;
    carobj7.protein = "Tryptophan";
    carobj7.abbr = "Trp,W";
    carobj7.group = "Hydrophoic R Group";
    carobj7.formula = "C11H12N2O2";
    
    Car carobj8;
    carobj8.protein ="Methionine";
    carobj8.abbr = "Met,M";
    carobj8.group = "Hydrophoic R Group";
    carobj8.formula ="C5H11NO2S";

    cout << carobj1.protein << " " << carobj1.abbr << " " << carobj1.group << " " << carobj1.formula << " " << "\n";
    cout << carobj2.protein << " " << carobj2.abbr << " " << carobj2.group << " " << carobj2.formula << " " << "\n";
    cout << carobj3.protein << " " << carobj3.abbr << " " << carobj3.group << " " << carobj3.formula << " " << "\n";
    cout << carobj4.protein << " " << carobj4.abbr << " " << carobj4.group << " " << carobj4.formula << " " << "\n";
    cout << carobj5.protein << " " << carobj5.abbr << " " << carobj5.group << " " << carobj5.formula << " " << "\n";
    cout << carobj6.protein << " " << carobj6.abbr << " " << carobj6.group << " " << carobj6.formula << " " << "\n";
    cout << carobj7.protein << " " << carobj7.abbr << " " << carobj7.group << " " << carobj7.formula << " " << "\n";
    cout << carobj8.protein << " " << carobj8.abbr << " " << carobj8.group << " " << carobj8.formula << " " << "\n";

    return 0;
}