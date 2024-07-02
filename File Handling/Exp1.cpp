// #include<iostream>
// #include<fstream>

// using namespace std;

// int main()
// {
//     ofstream myfile;
//     myfile.open("Exp1.txt" ,ios::app);
//     myfile<<"This is a Program that tells you how to write to a file."<<endl;

//     myfile.close();
//     return 0;
// }
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ifstream myfile("Exp1.txt");
//     char ch[20];
//     int m;
//     myfile>>ch>>m;
//     cout<<ch<<"\t"<<m<<endl;
//     myfile.close();
//     return 0;
// }
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     char name[50];
//     char sal[10];
//     char dept[30];
//     ifstream infile;
//     char inputFileName[] = "Exp1.txt";
//     infile.open(inputFileName);
//     // check if file is open or not
//     if(!infile)
//     {
//         cout<<"Can't open file"<<inputFileName<<endl;
//         exit(1);
//     } 
//     while(!infile.eof())
//     {
//         infile>>name>>sal>>dept;
//         cout<<name<<"\t"<<sal<<"\t"<<dept<<endl;
//     }
//     infile.close();
//     return 0;
// }
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     char ch[50];
//     ifstream flag("Exp1.txt");
//     cout<<"Output is"<<endl;
//     while(!flag.eof())
//     {
//         flag>>ch;
//         cout<<ch<<endl;
//     }
//     flag.close();
// }
