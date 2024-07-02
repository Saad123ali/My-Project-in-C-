/*#include<iostream>
using namespace std;

int main()
{
//	int rows,col;
//	cout<<"Enter the number of rows:";	  
//	cin>>rows;
//	cout<<"Enter the number of col:";	  
//	cin>>col;
	
		/*	*****
			*****
			*****
			*****
			***** */
/*	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cout<<"*";
		}
	cout<<endl;	
	} */
	
	/*      11111
			22222
			33333
			44444
			55555  */
	
/*	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cout<<i;
		}
	cout<<endl;	
	}  */
	/*		12345
			12345
			12345
			12345
			12345   */
/*	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cout<<j;
		}
	cout<<endl;	
	}   */
	
	/*	*
		**
		***
		****
		*****   */
/*	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
	cout<<endl;	
	}	*/
	/*	*****
		****
		***
		**
		*    */
/*	for(int i=rows;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
	cout<<endl;	
	}     */
	
	/*	*   *
		 * *
		  *
		 * *
		*   *   */
/*	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i==j || j==rows+1-i)
			{
			cout<<"*";
			}
			 else
			 {
			 	cout<<" ";
			 }	 
		}
	cout<<endl;
	}      */
	
		
			
 /*         *
           ***
  	      *****
         *******
        *********      */
/*	for(int i=0;i<=rows;i++)
	{
		for(int j=1;j<=rows-i;j++)
		{
			cout<<" ";
		}
		for(int c=1;c<=2*i-1;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	} */
	
	
	/*	 *******
  		  *****
   		   ***
		    *      */
/*	for(int i=rows-1;i>=0;i--)
	{
		for(int j=1;j<=rows-i;j++)
		{
			cout<<" ";
		}
		for(int c=1;c<=2*i-1;c++)
		{
			cout<<"*";
		}
		cout<<endl;
    }      */
    
  /*  		   *
   			  ***
  			 *****
 			*******
		   *********
		    *******
  			 *****
  			  ***
    		   *       */
/*    for(int i=0;i<=rows;i++)
	{
		for(int j=1;j<=rows-i;j++)
		{
			cout<<" ";
		}
		for(int c=1;c<=2*i-1;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=rows-1;i>=0;i--)
	{
		for(int j=1;j<=rows-i;j++)
		{
			cout<<" ";
		}
		for(int c=1;c<=2*i-1;c++)
		{
			cout<<"*";
		}
		cout<<endl;
    }     */
    
/*    	ABCDE
		ABCDE
		ABCDE
		ABCDE
		ABCDE
    for(char i='A';i<='E';i++)
    {
    	for(char j='A';j<='E';j++)
    	{
    		cout<<j;
		}
		cout<<endl;
	}     */
		
	/*		AAAAA
			BBBBB
			CCCCC
			DDDDD
			EEEEE
	for(char i='A';i<='E';i++)
    {
    	for(char j='A';j<='E';j++)
    	{
    		cout<<i;
		}
		cout<<endl;
	}   */
	
/*		*
		**
		***
		****
		*****
		*****
		****
		***
		**
		*
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
	cout<<endl;	
	}
	for(int i=rows;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
	cout<<endl;	
	}     */
/*		1
		12
		123
		1234
		12345
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}  */
		
/*		55555
		4444
		333
		22
		1
	for(int i=rows;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}    */
	
/*		  	 5
    		444
   		   33333
  		  2222222
		 111111111
	int no=1;
	cin>>no;
	for(int i=rows;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(int c=1;c<=no;c++)
		{
			cout<<j;
		}
		no=no+2;
		cout<<endl;
		
	}    */
	
/*		*
       **
      ***
     ****
    *****
	int no=1;
	cin>>no;
	for(int i=rows;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(int c=1;c<=no;c++)
		{
			cout<<"*";
		}
		no++;
		cout<<endl;
		
	}  */ 
 //cout<<"\n\t----SAAD ALI----\n\t"<<endl;
 
/*   return 0;
}            
       */
       
       
       
        #include <iostream>

using namespace std;

int main() {
    int n;

    // Input the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers (excluding the last one)
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        // Move to the next line
        cout << endl;
    }

    // Lower part of the diamond (excluding the first row)
  /*  for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers (excluding the last one)
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
   */
   
   #include <iostream>
using namespace std;

int main() {
    int rows = 5; // Set the number of rows (you can change this value)
    int num = 1;

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int j = rows - i; j > 0; --j) {
            cout<<"  ";
        }
        // Print numbers
        for (int k = 1; k <= i; ++k) {
            cout<<num<<"  ";
            ++num;
        }
        std::cout << std::endl;
    }

    int row = 5; // Set the number of rows (you can change this value)
    int nums = 16;

    for (int i = 1; i <= row; ++i) {
        // Print leading spaces
        for (int j = 1; j < i; ++j) {
            cout<<"  ";
        }
        // Print numbers
        for (int k = i; k <= row; ++k) {
            cout<<nums<<"  ";
            ++nums;
        }
        cout<<endl;
    }

    return 0;
}

