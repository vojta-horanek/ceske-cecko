#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
	size_t pos = data.find(toSearch);

	while (pos != std::string::npos)
	{
		data.replace(pos, toSearch.size(), replaceStr);
		pos = data.find(toSearch, pos + toSearch.size());
	}
}

string convert_file_to_string(string file) {
	std::ifstream ifs(file);
	std::string content((std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));
	return content;
}

void replaceAll(string& text) {
	vector<string> C_syntax = { "true","false","int","bool","char","if","else","return","while","printf","main","==","!=","=","0","'\0'","++","*","{","}",";","(",")","[","]",",","void","string" };
	vector<string> CC_syntax = { "ano","ne","cisilko","pravdicka","pismenko","pokud","jinak","vrat","dokud","vytiskni","hlavni_funkce","rovna_se","nerovna_se","je","nula","nulovy_znak","plus_jedna","ukazatel","slozena_zavorka_doleva","slozena_zavorka_doprava","strednik","zavorka_doleva","zavorka_doprava","hranata_zavorka_doleva","hranata_zavorka_doprava","carka","jovan","text"};
	string definetext = "";
	for (int i = 0; i < C_syntax.size(); i++) {
		definetext.append("#define ");
		definetext.append(CC_syntax[i]);
		definetext.append(" ");
		definetext.append(C_syntax[i]);
		definetext.append("\n");
	}
	definetext.append("\n//Added by CeZeCe\n\n");
	string textWD = definetext;
	textWD.append(text);
	for (int i = 0; i < C_syntax.size(); i++) {
		string rep = " ";
		rep.append(CC_syntax[i]);
		rep.append(" ");
		findAndReplaceAll(textWD, C_syntax[i], rep);
	}
	text = textWD;
}

void write_to_file(string text, string filename) {
	std::ofstream out(filename);
	out << text;
	out.close();
}

int main(int argc, char* argv[]) {
	if (argc < 3) {
		return 1;
	}

	string file_content = convert_file_to_string(argv[1]);
	replaceAll(file_content);
	write_to_file(file_content, argv[2]);
	cout << "Success" << endl;


}
