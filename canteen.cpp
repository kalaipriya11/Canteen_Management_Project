#include<conio.h> 
#include<stdio.h>
 #include<process.h>
  #include<fstream>
  #include<iostream>
  #include<ctime>
  using namespace std;
  class product 
  { 
   int pno; 
   char name[20];
   float price,qty,tax;
    public:
	 void add_product()
	  { 
	   int n,i;
	   cout<<"\nPlease enter the no pf products to be brought:";cin>>n;
	   for(i=0;i<n;i++)
	   {
	   
	   cout<<"\nPlease Enter The Product No.of The Product : "; 
	   cin>>pno;
	   cout<<"\n\nPlease Enter The Name ofThe Product : "; 
	   cin>>name;
       cout<<"\nPlease Enter The Price ofThe Product : "; 
       cin>>price;
       }
	  }  
	  void show_product() 
	  {
	   cout<<"\nThe Product No. of The Product : "<<pno;
	   cout<<"\nThe Name ofThe Product : "<<name; 
	   cout<<"\nThe Price of The Product : "<<price; 
	  } 
	  int retpno() 
	  {
	   return pno;
	  } 
	  float retprice() 
	  {
	   return price; 
	  }
	   char* retname() 
	   {
       return name; 
       } 
 }; 
 void header()
 {
 	
 	         
 	         cout<<"\n\n\t\t\t\t                         ___          __    _____   \n";
             cout<<"\t\t\t\t   |  _  |  __ |    ___ |   |  _   _ |_       |   __    \n"; 
             cout<<"\t\t\t\t   | { } | |_  |__ |    |___| | }_{ ||__      |  |  |  \n";
             cout<<"\t\t\t\t    ~   ~  |__     |___       |     |            |__|\n";
             cout<<"\t\t                                                        \n";
             cout<<"\t\t                                                                        ____      o\n";
             cout<<"\t\t       oooo             ooooooooooooooooooooooo  /oooooo      o  |   ) {    }  o    ooo \n";
             cout<<"\t\t           )           (oo    o o    o o   o    (o o    o     o  |_ )  |____|  o   o   o\n"; 
             cout<<"\t\t           )           o  o  o   o  o   o  o    o   o   o     o  |  )  |    |  o   o   o\n";
             cout<<"\t\t       ooooooooooooooo  oo    o o    o o   o     o o   oooooooo  |   ) |    |  ooooooooo\n\n\n";  
 }
 void footer()
 {
 	         cout<<"\n\n\n";
	         cout<<"\n\t\t\t\t\t\t    ___  __     ___             __  __ ___  __      ___ __  __  ___\n";
  	         cout<<"\t\t\t\t\t\t    |  |(  )|} | |      |  _  ||__||__  |  |__     |__ (  )(  ) |  |\n";
             cout<<"\t\t\t\t\t\t    |__|(__)| }| |      |_} {_||  | __| |  |__     |   (__)(__) |__|\n\n\n";
             cout<<"                                                 ";
 	         cout<<" TTTTTTT H    H  AAAA  N    N K   K         Y     Y  OOOOOO U    U   \n";                                   
             cout<<"    T    H    H A    A N N  N K  K           Y   Y   O    O U    U    \n";                                 
             cout<<"    T    HHHHHH AAAAAA N  N N KKK              Y     O    O U    U     \n";                                  
             cout<<"    T    H    H A    A N   NN K  K             Y     O    O U    U       \n";                        
             cout<<"    T    H    H A    A N    N K   K            Y     OOOOOO  UUUU         \n";                              
             cout<<"                                                                           \n"; 
             cout<<"                                                                           \n";        
             cout<<"\t\t\t\t\t\t                       ..            ..                                    \n";                   
             cout<<"\t\t\t\t\t\t                      :  :          :  :                                   \n";             
             cout<<"\t\t\t\t\t\t                       ..            ..                                       \n";             
             cout<<"\t\t\t\t\t\t                                                                               \n";
             cout<<"\t\t\t\t\t\t                                                                                   \n"; 
             cout<<"\t\t\t\t\t\t                        .            .                                          \n";
             cout<<"\t\t\t\t\t\t                          .         .                                                 \n";  
             cout<<"\t\t\t\t\t\t                             .....                                                      \n";
             cout<<"                                                               \n";
             cout<<"\t\t\t   __          __   __      _____  __  ________        __________    ________     __________   __   _____     __          \n";  
             cout<<"\t\t\t  (  )        (  ) (  )    ( ____)(  )(__   ___)      (  ______  )  (  ______)   (  ______  ) (  ) (     )   (  )                        \n";
             cout<<"\t\t\t   (  )      (  )  (  )  (  )___  (  )   (  )         (  )____(  ) (  ) ________ (  )____(  ) (  ) (  )(  )  (  )                       \n";
             cout<<"\t\t\t    (  )    (  )   (  ) (_____  ) (  )   (  )         (   _____  ) ( ) |__  __  |(   _____  ) (  ) (  ) (  ) (  )                   \n";
             cout<<"\t\t\t     (  )__(  )    (  )  ____/  ) (  )   (  )         (  )    (  ) (  )___| | | |(  )    (  ) (  ) (  )  (  )(  )                         \n";
             cout<<"\t\t\t      (______)     (__) (______)  (__)   (__)         (__)    (__)  (_______| |_|(__)    (__) (__) (__)   (_____)                          \n";
             cout<<"\n"; 
             cout<< "\n";
             cout<<"\n";
             cout<<"\n";
 }
		 fstream fp; product pr; 
		  void write_product() 
		  {
		   fp.open("Canteen.dat",ios::out|ios::app); pr.add_product();
		   fp.write((char*)&pr,sizeof(product));
		   fp.close(); 
		   cout<<"\n\nThe Product Has Been Added "; getch(); 
		  }
  void display_all() 
    { 
      //clrscr();
	   cout<<"\n\n\n\t\tDISPLAY ALL RECORD\n\n";
	    fp.open("Canteen.dat",ios::in); 
		while(fp.read((char*)&pr,sizeof(product))) 
		 {
		  pr.show_product();
		   cout<<"\n\n======================================================================================================================================================================n"; 
		   getch();
		 } 
		 fp.close();
		 getch(); 
		 }
		 void display_sp(int n) 
		 {
        int flag=0;
           fp.open("Canteen.dat",ios::in); 
		   while(fp.read((char*)&pr,sizeof(product))) 
		   { 
		    if(pr.retpno()==n)
			 { 
			 //  clrscr(); 
			   pr.show_product(); 
			   flag=1; 
			 } 
			} 
			fp.close(); 
			if(flag==0) 
			cout<<"\n\n\n\n\n\t\t\t\t\t\t*******           Sorry !!! Recordnot exist                ************\n\n\n\n\n"; 
			getch();
		}
		  void modify_product() 
		  {
		   int no,found=0;
        //clrscr(); 
           cout<<"\n\n\t\t\t\t\tMODIFY PRODUCT";
		    cout<<"\n\n\tPlease Enter The Product Number : "; cin>>no;
			 fp.open("Canteen.dat",ios::in|ios::out); 
			 while(fp.read((char*)&pr,sizeof(product)) && found==0) 
			 {
			  if(pr.retpno()==no) 
			  { 
			   pr.show_product();
			   cout<<"\nPlease Enter The NewDetails of Product"<<endl;
			    pr.add_product();
				int pos=-1*sizeof(pr);
				 fp.seekp(pos,ios::cur);
				  fp.write((char*)&pr,sizeof(product)); 
				  cout<<"\n\n\t\t\t\t====  Record Updated Successfuly  =====\n\n\n\n"; 
				  found=1; 
				  getch(); 
				  } 
				  } 
				  fp.close(); 
				  if(found==0)
                cout<<"\n\n\t\t\t\tSorry !!! Record Not Found \n\n\n\n\n\n"; 
                   getch(); 
		 } 
		  void delete_product() 
		  {
		   int no; //clrscr();
		    cout<<"\n\n\n\n\t\t\t\t\tDELETE PRODUCT";
			 cout<<"\n\nPlease Enter The product no. of The Product You Want To Delete : "; cin>>no;
			  fp.open("Canteen.dat",ios::in|ios::out);
			   fstream fp2; fp2.open("Temp.dat",ios::out); 
			   fp.seekg(0,ios::beg);
			    while(fp.read((char*)&pr,sizeof(product))) 
				{ 
				 if(pr.retpno()!=no) 
				 {
				  fp2.write((char*)&pr,sizeof(product));
 
                  }
				 } 
				 fp2.close(); 
				 fp.close(); 
				 remove("Canteen.dat"); 
				 rename("Temp.dat","Canteen.dat"); 
				 cout<<"\n\n\t\t\t\t\t_______________(((((((((((((...Record Deleted Successfully ...)))))))))))))___________________\n\n\n\n";
				  getch(); 
			 } 
	 void menu() 
	 {
	//  clrscr();
	   fp.open("Canteen.dat",ios::in); 
	   if(!fp) 
	   { 
	   cout<<"\n\n\n\t\t\t\tERROR!!!\n\t\t\t\tFILE COULD NOTBE OPEN\n\n\n\t\t\t\tFirst Add A Product\n\n\n\n"; 
	   cout<<"\n\n\n\t\t\t\t\tProgram is closing ...."; 
	   getch();
	exit(0);
   } 
/*  cout<<"\n\n\t\tProduct MENUnn"; 
  cout<<"================================================== ==\n"; cout<<"P.NO.\t\tNAME\t\tPRICE\n"; 
  cout<<"================================================== ==\n";
   while(fp.read((char*)&pr,sizeof(product)))*/ 
   {
   	 cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t      ~  _   _  __   __ |    ~                     ";
            cout<<"\n\t\t\t\t\t\t\t    ~~~ | }_{ ||__ |/  ||  | ~~~                    ";
            cout<<"\n\t\t\t\t\t\t\t   ~~~~ |     ||__ |   ||__| ~~~~                     \n\n";
            cout<<"\n\n\n\n\t\t ____________________________________________________________________________________________________________________\n";
            cout<<"\t\t| __________________________________________________________________________________________________________________ |\n";
            cout<<"\t\t||                           ||                           ||                           ||                           ||\n";                                  
            cout<<"\t\t||         SNACKS            ||        ICE CREAM          ||       JUICES              ||        FOOD ITEMS         ||\n";                                  
            cout<<"\t\t||___________________________||___________________________||___________________________||___________________________||\n";
            cout<<"\t\t||    |               |      ||    |               |      ||    |               |      ||    |               |      ||\n";
            cout<<"\t\t||S.No|     ITEMS     | RATE ||S.No|     ITEM      | RATE ||S.No|    ITEMS      | RATE ||S.No|  ITEMS        | RATE ||\n";
            cout<<"\t\t||____|_______________|______||____|_______________|______||____|_______________|______||____|_______________|______||\n";
            cout<<"\t\t||    |               |      ||    |               |      ||    |               |      ||    |               |      ||\n";
            cout<<"\t\t||    |  CHAT ITEMS:  |      ||    |   CUP ITEMS:  |      ||    |  SOFT DRINKS: |      ||    |   TIFFEN:     |      ||\n";
            cout<<"\t\t||    |               |      ||    |               |      ||    |               |      ||    |               |      ||\n";
            cout<<"\t\t|| 1  |  Samosa       |  10  || 11 |  Chocolate    |  25  || 21 |  Cavins       |  25  || 31 |  Dosa         |  10  ||\n";
            cout<<"\t\t|| 2  |  Puffs        |  10  || 12 |  Vanilla      |  20  || 22 |  Maaza        |  12  || 32 |  Chapathi     |  12  ||\n";              
            cout<<"\t\t|| 3  |  Cutlet       |  10  || 13 |  ButterScotch |  25  || 23 |  Fanta        |  26  || 33 |  Parota       |  10  ||\n";
            cout<<"\t\t|| 4  |  Sandwich     |  30  || 14 |  BlackCurrent |  25  || 24 |  7-Up         |  35  || 34 |  Poori        |  15  ||\n";
            cout<<"\t\t|| 5  |  Vadai        |  05  || 15 |  Pistah       |  20  || 25 |  Mountain Dew |  25  || 35 |  Pongal       |  30  ||\n";
            cout<<"\t\t||____|_______________|______||____|_______________|______||____|_______________|______||____|_______________|______||\n";
            cout<<"\t\t||    |               |      ||    |               |      ||    |               |      ||    |               |      ||\n";
            cout<<"\t\t||    |  CHOCOLATES:  |      ||    |  OTHERS:      |      ||    |  FRESH JUICE: |      ||    |  LUNCH:       |      ||\n";
            cout<<"\t\t||    |               |      ||    |               |      ||    |               |      ||    |               |      ||\n";
            cout<<"\t\t|| 6  |  DairyMilk    |  10  || 16 |  Corneto      |  35  || 26 |  Orange       |  55  || 36 |  Fried Rice   |  50  ||\n" ;
            cout<<"\t\t|| 7  |  Munch        |  05  || 17 |  Sandwich     |  25  || 27 |  Sugarcane    |  30  || 37 |  Biriyani     |  70  ||\n";
            cout<<"\t\t|| 8  |  5-Star       |  05  || 18 |  Choco Bar    |  15  || 28 |  WaterMelon   |  35  || 38 |  Tomato Rice  |  20  ||\n";
            cout<<"\t\t|| 9  |  Perk         |  05  || 19 |  Bites        |  20  || 29 |  Rose Milk    |  45  || 39 |  Curd Rice    |  20  ||\n";
            cout<<"\t\t|| 10 |  KitKat       |  10  || 20 |  Sticks       |  20  || 30 |  Badam Milk   |  50  || 40 |  Pudhina Rice |  20  ||\n";
            cout<<"\t\t||____|_______________|______||____|_______________|______||____|_______________|______||____|_______________|______||\n";
            cout<<"\t\t|____________________________________________________________________________________________________________________|\n\n\n";
    //cout<<pr.retpno()<<"\t\t"<<pr.retname()<<"\t\t"<<pr.retprice()<<endl ; 
   }
    fp.close();
	} 
	 void place_order() 
	 {
	  int order_arr[50],quan[50],c=0;
      float amt,total=0; 
	  char ch='Y'; 
	  menu(); 
	  cout<<"\n=================================================================================================================================================================="; 
	  cout<<"\n\t\t\t\t\t\t PLACE YOUR ORDER";
	   cout<<"\n=================================================================================================================================================================\n"; 
	 int n,i;
	  // cout<<"\nPlease enter the no pf products to be brought:";cin>>n;
	   //for(i=0;i<n;i++)
	   
	    do
	    {
		 cout<<"\n\nEnter The Product No.Of The Product : "; cin>>order_arr[c]; 
		 cout<<"\nEnter The Quantity : "; cin>>quan[c];
		  c++; 
		  cout<<"\nDo You Want To Order More Products ? (y/n) : "; cin>>ch;
		} 
		 while(ch=='y' ||ch=='Y');	
		 
		  cout<<"\n\n\n\n\n\n\n\n\n******************************************************************           BILL         *****************************************************************************\n";
          cout<<"\n\n\n\n\t\t\t\t\t\t\tWELCOME TO OONAVAGAM\n\n\n";  
			 {
   time_t now = time(0);
   
   char* dt = ctime(&now);

   cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tThe local date and time is: " << dt << endl;

   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tThe UTC date and time is:"<< dt << endl;
}		  
		   for(int x=0;x<=c;x++) 
		   {
		    fp.open("Canteen.dat",ios::in); 
			fp.read((char*)&pr,sizeof(product));
             while(!fp.eof()) 
			 {
			  if(pr.retpno()==order_arr[x]) 
			  {
			   amt=pr.retprice()*quan[x];
			   /*cout<<"\n\t\t\t\t\t\t...YOUR BILL IS...  :)";
                   cout<<"\n\n\t\t\t _______________________________________________________________________________________________________  \n";
                    cout<<"\t\t\t|                                        |                                |                             |   \n";
                    cout<<"\t\t\t|        NAME OF THE PRODUCT             |             QUANTIY            |           RATE              |    \n"; 
                    cout<<"\t\t\t|________________________________________|________________________________|_____________________________|   \n";
                    cout<<"\t\t\t|                                        |                                |                             | \n";
                    cout<<"\t\t\t| \nProduct Number : "<<order_arr[x]     <<"\n quantity: "<<quan[x]        <<"\nprice: "<<pr.retprice()  <<"\n"                     ; 
                    cout<<"\t\t\t|  \n product Name : "<<pr.retname()                                                                                                   <<"\n";
                    cout<<"\t\t\t|                                        |                                |                             | \n";
                    cout<<"\t\t\t|                                        |                                |                             | \n";
                    cout<<"\t\t\t|                                        |                                |                             | \n";
                    cout<<"\t\t\t|                                        |                                |                             | \n";
                    cout<<"\t\t\t|                                        |                                |                             | \n";
                    cout<<"\t\t\t|                                        |                                |                             | \n";
                    cout<<"\t\t\t|________________________________________|________________________________|_____________________________| \n";
                    cout<<"\t\t\t|                                                        |                                              | \n";
                    cout<<"\t\t\t|                                       TOTAL    =       |"   <<amt                                <<"  | \n";
                    cout<<"\t\t\t|                                       BAG      =       |    5                                         | \n";
                    cout<<"\t\t\t|                                       GST      =       |    5%                                        | \n";
                    cout<<"\t\t\t|________________________________________________________|______________________________________________| \n";
                    cout<<"\t\t\t|                                                        |                                              | \n";
                    cout<<"\t\t\t|             TOTAL AMOUNT (Inclusive all taxes in Rs.)  |"   <<amt+10                             <<"  |  \n";
                    cout<<"\t\t\t|________________________________________________________|______________________________________________| \n";*/
                    
					
			   cout<<"\n\t\t\t\t\t\tProduct Number : "<<order_arr[x] <<"\n\t\t\t\t\t\tProduct Name : " <<pr.retname() <<"\n\t\t\t\t\t\tQuantity : "<<quan[x] <<"\n\t\t\t\t\t\tPrice : " <<pr.retprice(); 
			   total=total+amt;
			 /*  {
   time_t now = time(0);
   
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
} */
			   } 
			   fp.read((char*)&pr,sizeof(product)); 
			 } 
			 fp.close(); 
			}
			 cout<<"\n\n\t\t\t\t\tTOTAL="<<total;
			 cout<<"\n\n********************************************************************************************************************************************************************\n";
			 cout<<"\n\n\n\n\t\t\t\t\t\t\t~~~       THANK YOU FOR PLACING ORDER :)        ~~~\n\n"; 
			 cout<<"               \n";
			 cout<<"\t\t\t\t\t\t                       ..            ..                                    \n";                   
             cout<<"\t\t\t\t\t\t                      :  :          :  :                                   \n";             
             cout<<"\t\t\t\t\t\t                       ..            ..                                       \n";             
             cout<<"\t\t\t\t\t\t                                                                               \n";
             cout<<"\t\t\t\t\t\t                                                                                   \n"; 
             cout<<"\t\t\t\t\t\t                        .            .                                          \n";
             cout<<"\t\t\t\t\t\t                          .         .                                                 \n";  
             cout<<"\t\t\t\t\t\t                             .....                                                      \n";
             cout<<"                                                               \n\n\n\n\n\n";
			 getch(); } 
			 
			  void admin_menu()
              {
			   //clrscr();
			   char ch2;
			   cout<<"\n\n\n\t\t\t\t\tADMINISTRATOR  MENU"; 
			   cout<<"\n\n\t\t\t1.ADD PRODUCT"; 
			   cout<<"\n\n\t\t\t2.DISPLAY ALL PRODUCTS";
			   cout<<"\n\n\t\t\t3.PRODUCT DETAILS "; 
			   cout<<"\n\n\t\t\t4.MODIFY PRODUCT";
			    cout<<"\n\n\t\t\t5.DELETE PRODUCT"; 
				cout<<"\n\n\t\t\t6.VIEW PRODUCT MENU"; 
				cout<<"\n\n\t\t\t7.BACK TO MAIN MENU"; 
				cout<<"\n\n\t\tPlease Enter Your Choice (1-7) "; 
				ch2=getche(); 
				switch(ch2) 
				{
				 case '1': //clrscr();
				           write_product();
						    break; 
				case '2': display_all(); 
				           break; 
				 case '3': int num; //clrscr();
                          cout<<"\n\n\tEnter The Product No : ";
			              cin>>num; 
			              display_sp(num); 
			               break; 
			    case '4': modify_product();
				          break; 
				case '5': delete_product();
				           break;
				case '6': menu();
				           getch(); 
				case '7': break;
				         default: cout<<"a"; admin_menu(); 
				} 
			} 
int main() 
{
 char ch;
  do 
  {
      //clrscr(); 
	  header();
	  cout<<"\n\n\n\tMAIN MENU"; 
	  cout<<"\n\n\t\t1.CUSTOMER"; 
	  cout<<"\n\n\t\t2.ADMINISTRATOR MENU";
	   cout<<"\n\n\t\t3.EXIT";
	    cout<<"\n\n\tPlease Select Your Option(1-3) : ";
		 ch=getche(); 
		 switch(ch)
		  {
		   case '1':// clrscr();
		             place_order();
					 getch(); 
					 break;
		   case '2':
		   			int pass;
		   			cout<<"\n\n\n\t\t\t\t\tUsername : ADMIN ";
					   cout<<"\n\t\t\t\t\tEnter the password:";
		   			cin>>pass;
		   			if(pass==12345)
		   			{
		            admin_menu();
		            }
		            else
		            {
		            	cout<<" \n\n\n\t\t\t##  SORRY! WRONG PASSWORD TRY AGAIN   ##\n\n\n\n\n\n\n\n\n";
					}
					 break;
		   case '3':footer();
					 exit(0);
					  default :cout<<"a";
		  } 
  } 
  while(ch!='3');
}
