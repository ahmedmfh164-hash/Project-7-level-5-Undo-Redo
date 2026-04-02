
#include <iostream>
#include"clsMyString.h"

using namespace std;

int main()
{
    cout << "\n\n\t\t\t\t\tUndo/Redo Project\n\n";

    clsMyString S1;

    cout << "\nS1 : " << S1.Value << "\n";

    S1.Value = "Ahmed";

    cout << "\nS1 : " << S1.Value << "\n";

    S1.Value = "Ahmed2";

    cout << "\nS1 : " << S1.Value << "\n";

    S1.Value = "Ahmed3";

    cout << "\nS1 : " << S1.Value << "\n";

    cout << "\n\nUndo : ";
    cout << "\n_______________\n";

    S1.Undo();
    cout << "\nS1 after undo : " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1 after undo : " << S1.Value << "\n";

    S1.Undo();
    cout << "\nS1 after undo : " << S1.Value << "\n";

    cout << "\n\nRedo : ";
    cout << "\n_______________\n";

    S1.Redo();
    cout << "\nS1 after redo : " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 after redo : " << S1.Value << "\n";

    S1.Redo();
    cout << "\nS1 after redo : " << S1.Value << "\n";



}

