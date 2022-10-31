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
    carobj1.abbr = "Gly,G";
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
    carobj4.protein= "Leucine";
    carobj4.abbr="Leu,L";
    carobj4.group = "Hydrophobic R Group";
    carobj4.formula="C6H13NO2";

    Car carobj5;
    carobj5.protein = "Isoleucine";
    carobj5.abbr = "Ile,I";
    carobj5.group = "Hydrophoic R group";
    carobj5.formula = "C6H13NO2";

    Car carobj6;
    carobj6.protein = "Phenylalanine";
    carobj6.abbr = "Phe,F";
    carobj6.group = "Hydrophobic R Group";
    carobj6.formula = "C9H11NO2";

    Car carobj7;
    carobj7.protein = "Proline";
    carobj7.abbr = "Pro,P";
    carobj7.group = "Hydrophobic R Group";
    carobj7.formula = "C5H9NO2";

    Car carobj8;
    carobj8.protein = "Tryptophan";
    carobj8.abbr = "Trp,W";
    carobj8.group = "Hydrophoic R Group";
    carobj8.formula = "C11H12N2O2";
    
    Car carobj9;
    carobj9.protein ="Methionine";
    carobj9.abbr = "Met,M";
    carobj9.group = "Hydrophoic R Group";
    carobj9.formula ="C5H11NO2S";

    Car carobj10;
    carobj10.protein = "Serine";
    carobj10.abbr = "Ser,S";
    carobj10.group = "Polar,neutral R group";
    carobj10.formula = "C3H7NO3";

    Car carobj11;
    carobj11.protein="Threonine";
    carobj11.abbr = "Thr,T";
    carobj11.group= "Polar,neutral R group";
    carobj11.formula="C4H9NO3";

    Car carobj12;
    carobj12.protein= "Tyrosine";
    carobj12.abbr = "Tyr,Y";
    carobj12.group = "Polar,neutral R group";
    carobj12.formula= "C9H11NO3";
    
    Car carobj13;
    carobj13.protein= "Cysteine";
    carobj13.abbr = "Cys.C";
    carobj13.group= "Polar,neutral R group";
    carobj13.formula="C3H7NO2S";

    Car carobj14;
    carobj14.protein= "Asparagine";
    carobj14.abbr= "Asn,N";
    carobj14.group= "Polar,neutral R group";
    carobj14.formula= "C4H8N2O3";

    Car carobj15;
    carobj15.protein= "Glutamine";
    carobj15.abbr= "Gln,Q";
    carobj15.group= "Polar,neutral R group";
    carobj15.formula= "C5H10N2O3";

    Car carobj16;
    carobj16.protein= "Aspartate";
    carobj16.abbr = "Asp,D";
    carobj16.group= "Negatively charged(acidic)R group";
    carobj16.formula= "C4H7NO4";

    Car carobj17;
    carobj17.protein= "Glutamate";
    carobj17.abbr= "Glu,E";
    carobj17.group= "Negatively charged(acidic)R group";
    carobj17.formula="C5H9NO4";

    Car carobj18;
    carobj18.protein= "Lysine";
    carobj18.abbr="Lys,K";
    carobj18.group="Positively changed (basic) R group";
    carobj18.formula="C6H14N2O2";

    Car carobj19;
    carobj19.protein="Arginine";
    carobj19.abbr="Arg,R";
    carobj19.group="Positively changed (basic) R group";
    carobj19.formula="C6H14N4O2";

    Car carobj20;
    carobj20.protein="Histidine";
    carobj20.abbr="His,H";
    carobj20.group="Positively changed (basic) R group";
    carobj20.formula="C6H9N3O2";

    cout << carobj1.protein << " " << carobj1.abbr << " " << carobj1.group << " " << carobj1.formula << " " << "\n";
    cout << carobj2.protein << " " << carobj2.abbr << " " << carobj2.group << " " << carobj2.formula << " " << "\n";
    cout << carobj3.protein << " " << carobj3.abbr << " " << carobj3.group << " " << carobj3.formula << " " << "\n";
    cout << carobj4.protein << " " << carobj4.abbr << " " << carobj4.group << " " << carobj4.formula << " " << "\n";
    cout << carobj5.protein << " " << carobj5.abbr << " " << carobj5.group << " " << carobj5.formula << " " << "\n";
    cout << carobj6.protein << " " << carobj6.abbr << " " << carobj6.group << " " << carobj6.formula << " " << "\n";
    cout << carobj7.protein << " " << carobj7.abbr << " " << carobj7.group << " " << carobj7.formula << " " << "\n";
    cout << carobj8.protein << " " << carobj8.abbr << " " << carobj8.group << " " << carobj8.formula << " " << "\n";
    cout << carobj9.protein << " " << carobj9.abbr << " " << carobj9.group << " " << carobj9.formula << " " << "\n";
    cout << carobj10.protein << " " << carobj10.abbr << " " << carobj10.group <<" " << carobj10.formula << " " << "\n";
    cout << carobj11.protein << " " << carobj11.abbr << " " << carobj11.group << " " << carobj11.formula << " " << "\n";
    cout << carobj12.protein << " " << carobj12.abbr << " " << carobj12.group << " " << carobj12.formula << " " << "\n";
    cout << carobj13.protein << " " << carobj13.abbr << " " << carobj13.group << " " << carobj13.formula << " " << "\n";
    cout << carobj14.protein << " " << carobj14.abbr << " " << carobj14.group << " " << carobj14.formula << " " << "\n";
    cout << carobj15.protein << " " << carobj15.abbr << " " << carobj15.group << " " << carobj15.formula << " " << "\n";
    cout << carobj16.protein << " " << carobj16.abbr << " " << carobj16.group << " " << carobj16.formula << " " << "\n";
    cout << carobj17.protein << " " << carobj17.abbr << " " << carobj17.group << " " << carobj17.formula << " " << "\n";
    cout << carobj18.protein << " " << carobj18.abbr << " " << carobj18.group << " " << carobj18.formula << " " << "\n";
    cout << carobj19.protein << " " << carobj19.abbr << " " << carobj19.group << " " << carobj19.formula << " " << "\n";
    cout << carobj20.protein << " " << carobj20.abbr << " " << carobj20.group << " " << carobj20.formula << " " << "\n";
  
    return 0;
}