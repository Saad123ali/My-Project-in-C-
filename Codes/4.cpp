// #include <iostream>

// using namespace std;

// const double PI = 3.1417;
// int main() 
// {
//     double radius, volume;
//     cout << "Enter the radius of the sphere: ";
//     cin >> radius;

//     volume = (4.0 / 3.0) * PI * radius * radius * radius;  
//     cout << "The volume of the sphere is: " << volume << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() 
// {
//     double side, volume;

//     cout << "Enter the side of the cube: ";
//     cin >> side;

//     volume = side * side * side; // formula V = side^3

//     cout << "The volume of the cube is: " << volume << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// const double PI = 3.1417;

// int main() 
// {
//     double radius, height, volume;

//     cout << "Enter the radius of the cylinder: ";
//     cin >> radius;

//     cout << "Enter the height of the cylinder: ";
//     cin >> height;

//     volume = PI * radius * radius * height;//formula V = πr^2h

//     cout << "The volume of the cylinder is: " << volume << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     double length, width, area, perimeter;

//     cout << "Enter the length of the rectangle: ";
//     cin >> length;

//     cout << "Enter the width of the rectangle: ";
//     cin >> width;
//     area = length * width;
//     perimeter = 2 * (length + width);

//     cout << "The area of the rectangle is: " << area << endl;
//     cout << "The perimeter of the rectangle is: " << perimeter << endl;

//     return 0;
// }
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     double a, b, c, s, area;

//     cout << "Enter the three side lengths of the triangle (a, b, c): ";
//     cin >> a >> b >> c;

//     // Calculate semi-perimeter
//     s = (a + b + c) / 2;

//     // Calculate area using Heron's formula
//     area = sqrt(s * (s - a) * (s - b) * (s - c));

//     cout << "The area of the triangle is: " << area << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// const double PI = 3.14159;

// int main() {
//    double radius, area, circumference;

//    cout << "Enter the radius of the circle: ";
//    cin >> radius;

//    //  formula A = πr^2
//    area = PI * radius * radius;

//    //  formula C = 2πr
//    circumference = 2 * PI * radius;

//    cout << "The area of the circle is: " << area << endl;
//    cout << "The circumference of the circle is: " << circumference << endl;

//    return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    double celsius, fahrenheit;

//    cout << "Enter temperature in Celsius: ";
//    cin >> celsius;

//    // formula F = (9/5)C + 32
//    fahrenheit = (9.0 / 5.0) * celsius + 32;

//    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;

//    return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    double fahrenheit, celsius;

//    cout << "Enter temperature in Fahrenheit: ";
//    cin >> fahrenheit;

//    // formula C = (5/9)(F - 32)
//    celsius = (5.0 / 9.0) * (fahrenheit - 32);

//    cout << fahrenheit << " Fahrenheit = " << celsius << " Celsius" << endl;

//    return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     double angle1, angle2;

//     cout << "Enter the first angle of the triangle: ";
//     cin >> angle1;

//     cout << "Enter the second angle of the triangle: ";
//     cin >> angle2;

//     // Calculate the third angle
//     double angle3 = 180 - (angle1 + angle2);

//     cout << "The third angle of the triangle is: " << angle3 << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     double kmph, mph;

//     cout << "Enter speed in kilometers per hour: ";
//     cin >> kmph;

//     // Conversion factor from kilometers per hour to miles per hour
//     const double mph_per_kmph = 0.621371;

//     // Perform the conversion
//     mph = kmph * mph_per_kmph;

//     cout << kmph << " kilometers per hour is equal to " << mph << " miles per hour." << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//   double mph, kmph;

//   cout << "Enter speed in miles per hour: ";
//   cin >> mph;

//   // Conversion factor from miles per hour to kilometers per hour
//   const double kmph_per_mph = 1.60934;

//   // Perform the conversion
//   kmph = mph * kmph_per_mph;

//   cout << mph << " miles per hour is equal to " << kmph << " kilometers per hour." << endl;

//   return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    double kelvin, fahrenheit;

//    cout << "Enter temperature in Kelvin: ";
//    cin >> kelvin;

//    // Conversion formula: Fahrenheit = (Kelvin - 273.15) * 9/5 + 32
//    fahrenheit = (kelvin - 273.15) * 9.0 / 5.0 + 32;

//    cout << kelvin << " Kelvin is equal to " << fahrenheit << " Fahrenheit." << endl;

//    return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    double kelvin, celsius;

//    cout << "Enter temperature in Kelvin: ";
//    cin >> kelvin;

//    // Conversion formula: Celsius = Kelvin - 273.15
//    celsius = kelvin - 273.15;

//    cout << kelvin << " Kelvin is equal to " << celsius << " Celsius." << endl;

//    return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     double fahrenheit, kelvin;

//     cout << "Enter temperature in Fahrenheit: ";
//     cin >> fahrenheit;

//     // Conversion formula: Kelvin = (Fahrenheit - 32) * 5/9 + 273.15
//     kelvin = (fahrenheit - 32) * 5.0 / 9.0 + 273.15;

//     cout << fahrenheit << " Fahrenheit is equal to " << kelvin << " Kelvin." << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    double celsius, kelvin;

//    cout << "Enter temperature in Celsius: ";
//    cin >> celsius;

//    // Conversion formula: Kelvin = Celsius + 273.15
//    kelvin = celsius + 273.15;

//    cout << celsius << " Celsius is equal to " << kelvin << " Kelvin." << endl;

//    return 0;
// }
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     double a, b, c, s, area;

//     cout << "Enter the three side lengths of the triangle (a, b, c): ";
//     cin >> a >> b >> c;

//     // Check if it's a valid triangle using triangle inequality
//     if (a + b > c && b + c > a && c + a > b) {
//         // Calculate semi-perimeter
//         s = (a + b + c) / 2;

//         // Calculate area using Heron's formula
//         area = sqrt(s * (s - a) * (s - b) * (s - c));

//         cout << "The area of the triangle is: " << area << endl;
//     } else {
//         cout << "Invalid triangle: Sum of two sides must be greater than the third side." << endl;
//     }

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    int dividend, divisor, quotient, remainder;

//    cout << "Enter the dividend: ";
//    cin >> dividend;

//    cout << "Enter the divisor: ";
//    cin >> divisor;

//    // Ensure divisor is not zero to avoid division by zero error
//    if (divisor == 0) {
//        cout << "Error: Divisor cannot be zero." << endl;
//    } else {
//        // Calculate the quotient and remainder using the division and modulo operators
//        quotient = dividend / divisor;
//        remainder = dividend % divisor;

//        cout << "The quotient is: " << quotient << endl;
//        cout << "The remainder is: " << remainder << endl;
//    }

//    return 0;
// }
//  Write a C++ program to compute the total and average of four numbers.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c,d,total = 0;
//     float average = 0;
//     cout<<"Enter the first number ";
//     cin>>a;
//     cout<<"Enter the second number ";
//     cin>>b;
//     cout<<"Enter the third number ";
//     cin>>c;
//     cout<<"Enter the fourth number ";
//     cin>>d;
//     total = a+b+c+d;
//     average = total/4.0;
//     cout<<"The total number of four : "<<total<<endl;
//     cout<<"The average number of four : "<<average<<endl;
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     int digit;

//     cout << "Enter a single-digit number: ";
//     cin >> digit;

//     // Ensure the input is a single-digit number
//     if (digit < 0 || digit > 9) {
//         cout << "Invalid input: Please enter a single-digit number (0-9)." << endl;
//         return 1;  // Indicate error
//     }

//     // Print the rectangular form with 4 columns and 6 rows
//     for (int row = 0; row < 6; ++row) {
//         for (int col = 0; col < 4; ++col) {
//             cout << digit << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter the number ; ";
//     cin>>num;
//     if (num>0)
//     {
//         cout<<"The "<<num<<"is positive number"<<endl;
//     }
//     else if (num<0)
//     {
//         cout<<"The "<<num<<"is negative number"<<endl;
//     }
//     else
//     {
//         cout<<"The "<<num<<"is zero"<<endl;
//     }
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//   double num1, num2, quotient;

//   cout << "Enter the first number: ";
//   cin >> num1;

//   cout << "Enter the second number: ";
//   cin >> num2;

//   // Check for division by zero
//   if (num2 == 0) {
//     cout << "Error: Cannot divide by zero." << endl;
//   } else {
//     quotient = num1 / num2;
//     cout << "The quotient of " << num1 << " and " << num2 << " is: " << quotient << endl;
//   }

//   return 0;
// }
// #include <iostream>
// #include <ctime>

// using namespace std;

// int main() {
//     time_t now = time(0);  // Get current time in seconds since the Epoch
//     tm* local_time = localtime(&now);  // Convert time to local time structure

//     cout << "Current date and time: " << asctime(local_time) << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    // Example of implicit type casting (int to float)
//    int i = 21;
//    float f = i;  // i is automatically converted to float
//    cout << "Implicit type casting (int to float): " << endl;
//    cout << "Value of i (int): " << i << endl;
//    cout << "Value of f (float): " << f << endl;

//    // Example of explicit type casting (float to int)
//    float num = 3.14159;
//    int num_int = (int)num;  // Explicitly casting float to int
//    cout << "\nExplicit type casting (float to int): " << endl;
//    cout << "Value of num (float): " << num << endl;
//    cout << "Value of num_int (int): " << num_int << endl;

//    // Example of static_cast for specific type casting
//    double d = 2.5 * 3.5 * 4.5;
//    int total = static_cast<int>(d);  // Using static_cast to convert double to int
//    cout << "\nUsing static_cast (double to int): " << endl;
//    cout << "Value of d (double): " << d << endl;
//    cout << "Value of total (int): " << total << endl;

//    return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     cout << "\n\n Print a mystery series:\n";
//     cout << "-------------------------\n";
//     cout << " The series are: \n";

//     int nm1 = 1;

//     while (true) {
//         ++nm1;

//         if ((nm1 % 3) == 0) {
//             continue;
//         }

//         if (nm1 == 50) {
//             break;
//         }

//         if ((nm1 % 2) == 0) 
//         {
//             nm1 += 3;
//         }
//         else 
//         {
//             nm1 -= 3;
//         }

//         cout << nm1 << " ";
//     }

//     cout << endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Print the multiplication of a number upto 10 : ";
//     cin >>num;
//     for ( int i= 1; i<=20;i++)
//     {
//         cout<<num<<" x "<<i<<" = "<< i*num<<endl;
//     }
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     int length, width;

//     cout << "Enter the length of the rectangle: ";
//     cin >> length;

//     cout << "Enter the width of the rectangle: ";
//     cin >> width;

//     // Calculate the area
//     int area = length * width;

//     // Calculate the perimeter
//     int perimeter = 2 * (length + width);

//     cout << "\nThe area of the rectangle is: " << area << endl;
//     cout << "The perimeter of the rectangle is: " << perimeter << endl;

//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string firstname, lastname;
//     cout<<"Enter the first name ";
//     cin>>firstname;
//     cout<<"Enter the last name ";
//     cin>>lastname;
//     cout<<"your name in reverse order is : "<<lastname<<" "<<firstname<<endl;
//     return 0;
// }
// #include <iostream>
// #define PI 3.14159  // Define PI as a constant

// using namespace std;

// int main() {
//    float radius, height, volume;

//    cout << "Enter the radius of the cone: ";
//    cin >> radius;

//    cout << "Enter the height of the cone: ";
//    cin >> height;

//    // Calculate the volume using the formula (1/3) * PI * radius^2 * height
//    volume = (1.0 / 3.0) * PI * radius * radius * height;

//    cout << "The volume of the cone is: " << volume << endl;

//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     const int size = 10;
//     int even =0, odd =0;
//     int counte =0, counto =0;
//     int array[size];
//     cout<<"Enter the number mixed even or odd."<<endl;
//     for(int i = 0; i < size; i++)
//     {
//         cout<<"Enter the number :"<<i+1<<endl;
//         cin>>array[i];
//     }
//     for ( int i = 0; i < size; i++)
//     {
//         if( array[i] % 2 == 0 )
//         {
//             even +=array[i];
//             counte++;
//         }
//         else
//         {
//             odd +=array[i];
//             counto++;
//         }
//     }
//     cout<<"The sum of even number is : "<<counte<<" "<<even << endl;
//     cout<<"The sum of odd number is : "<<counto<<" "<<odd << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x =10 , y = 20;
//    cout<<"The nmuber before swapping "<<x<<" "<<y<<endl;
//    x= x+y;
//    y= x-y;
//    x= x-y;
//    cout<<"The nmuber after swapping "<<x<<" "<<y<<endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     char ch;

//     cout << "Enter a character: ";
//     cin >> ch;

//     // Print the ASCII code using explicit casting
//     cout << "The ASCII code of character " << ch << " is: " << (int)ch << endl;
 
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     float cm, meter, kilometer;

//     cout << "Enter length in centimeters: ";
//     cin >> cm;

//     // Convert centimeters to meters
//     meter = cm / 100;

//     // Convert centimeters to kilometers
//     kilometer = cm / 100000;

//     cout << "\nThe length in meters is: " << meter << " m" << endl;
//     cout << "The length in kilometers is: " << kilometer << " km" << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//    float p, r, t, si;

//    cout << "\nCalculate the Simple Interest :\n";
//    cout << " -----------------------------------\n";

//    cout << " Enter the Principal : ";
//    cin >> p;

//    cout << " Enter the Rate of Interest : ";
//    cin >> r;

//    cout << " Enter the Time Period : ";
//    cin >> t;

//    si = (p * r * t) / 100;  // Calculate simple interest using the formula SI = P * R * T / 100

//    cout << "\nThe Simple Interest is : " << si << endl;

//    return 0;
// }
// #include <iostream>
// #include <string>

// using namespace std;

// int main() 
// {
//     string str = "Hello, world!";

//     // Accessing characters using for loop
//     for (int i = 0; i < str.length(); i++) 
//     {
//         cout << "Character at index " << i << ": " << str[i] << endl;
//     }

//     // Substring extraction using for loop
//     string sub1 = "";
//     for (int i = 7; i < 12; i++) 
//     {
//         sub1 += str[i];
//     }
//     cout << "Substring (world): " << sub1 << endl;

//     // // Finding a substring using for loop
//     int pos = -1;
//     for (int i = 0; i < str.length() - 5; i++) 
//     {
//         if (str.substr(i, 5) == "world") 
//         {
//             pos = i;
//             break;
//         }
//     }
//     cout << "Position of 'world': " << pos << endl;

//     // // Conversion to uppercase using for loop
//     string upper = str;
//     for (int i = 0; i < upper.length(); i++) 
//     {
//         upper[i] = toupper(upper[i]);
//     }
//     cout << "Uppercase string: " << upper << endl;

//     // Conversion to lowercase using for loop
//     string lower = str;
//     for (int i = 0; i < lower.length(); i++) 
//     {
//         lower[i] = tolower(lower[i]);
//     }
//     cout << "Lowercase string: " << lower << endl;

//     return 0;
// }
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     double lat1, lon1, lat2, lon2, lat1_rad, lon1_rad, lat2_rad, lon2_rad, dLat, dLon, a, c;
//     const double R = 6371.01;  // Earth's radius in kilometers

//     cout << "Enter latitude of point 1 (in degrees): ";
//     cin >> lat1;
//     cout << "Enter longitude of point 1 (in degrees): ";
//     cin >> lon1;
//     cout << "Enter latitude of point 2 (in degrees): ";
//     cin >> lat2;
//     cout << "Enter longitude of point 2 (in degrees): ";
//     cin >> lon2;

//     // Convert degrees to radians
//     lat1_rad = lat1 * M_PI / 180.0;
//     lon1_rad = lon1 * M_PI / 180.0;
//     lat2_rad = lat2 * M_PI / 180.0;
//     lon2_rad = lon2 * M_PI / 180.0;

//     // Calculate differences in latitude and longitude
//     dLat = lat2_rad - lat1_rad;
//     dLon = lon2_rad - lon1_rad;

//     // Apply the Haversine formula
//     a = sin(dLat / 2) * sin(dLat / 2) + cos(lat1_rad) * cos(lat2_rad) * sin(dLon / 2) * sin(dLon / 2);
//     c = 2 * atan2(sqrt(a), sqrt(1 - a));

//     // Calculate distance in kilometers
//     double distance = R * c;

//     cout << "\nThe distance between the two points is: " << distance << " kilometers" << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     int number, reversedNumber = 0;

//     cout << "Enter a number: ";
//     cin >> number;

//     // Reverse the number
//     while (number > 0) {
//         int digit = number % 10;
//         reversedNumber = reversedNumber * 10 + digit;
//         number /= 10;
//     }

//     cout << "Reversed number: " << reversedNumber << endl;

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     int num1, num2, sum;

//     cout << "Enter the first integer: ";
//     cin >> num1;

//     cout << "Enter the second integer: ";
//     cin >> num2;

//     sum = num1 + num2;

//     // Count the digits in the sum
//     int count = 0;
//     while (sum != 0) {
//         sum /= 10;
//         count++;
//     }

//     cout << "\nThe sum of the two integers is: " << num1 + num2 << endl;
//     cout << "The number of digits in the sum is: " << count << endl;

//     return 0;
// }
//  #include <iostream>

// using namespace std;

// bool isArithmeticSequence(int arr[], int size) {
//     int commonDifference = arr[1] - arr[0];

//     for (int i = 1; i < size - 1; ++i) {
//         if (arr[i + 1] - arr[i] != commonDifference) {
//             return false;
//         }
//     }

//     return true;
// }

// bool isGeometricSequence(int arr[], int size) {
//     int commonRatio = arr[1] / arr[0];

//     for (int i = 1; i < size - 1; ++i) {
//         if (arr[i + 1] / arr[i] != commonRatio) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     const int maxSize = 100;

//     int arr[maxSize];
//     int size;

//     cout << "Enter the size of the array: ";
//     cin >> size;

//     if (size <= 0 || size > maxSize) {
//         cout << "Invalid array size." << endl;
//         return -1;
//     }

//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < size; ++i) {
//         cin >> arr[i];
//     }

//     if (isArithmeticSequence(arr, size)) {
//         cout << "Arithmetic sequence" << endl;
//     } else if (isGeometricSequence(arr, size)) {
//         cout << "Geometric sequence" << endl;
//     } else {
//         cout << "Neither arithmetic nor geometric sequence." << endl;
//     }

//     return 0;
// }

