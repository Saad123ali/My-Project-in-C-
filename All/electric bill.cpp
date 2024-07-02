 #include<iostream>
 using namespace std;
 
 int main()
 {
  float units,surcharge,bill,total_bill;
  cout<<"\nEnter the consumed units:";
  cin>>units;
  //For first 50 units Rs. 0.50/unit
  if(units<=50)
  {
  	 bill=0.5*units;
  }
  //For next 100 units Rs. 0.75/unit	
  else if(units>50&&units<100)
  {
    bill=25+((units-50)*0.75);
  }
  // For next 100 units Rs. 1.20/unit
  else if(units>150&&units<250)
  {
  	bill=25+75+((units-150)*1.20);
  }
  // For unit above 250 Rs. 1.50/unit
  else if(units>250)
  { 
  	bill=25+75+120+((units-250)*1.50);
  }
  surcharge=0.2*bill;
  total_bill=bill+surcharge;
  cout<<"\tBill Amount = "<<bill<<endl;
  cout<<"\tSurcharges = "<<surcharge<<endl;
  cout<<"\tTotal Bill = "<<total_bill<<endl;
 return 0;
}
