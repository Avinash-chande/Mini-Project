#include<iostream>
using namespace std;

        int main(){
            int returnAmt(void);
            int totalBill=returnAmt();
            cout<<"your total bill is : "<<totalBill<<endl;
            cout<<"Thank you for your order.."<<endl;
            cout<<"Have a Good Day...!"<<endl;
        }

            int returnAmt(){
                char c;
                char types;
                char drinks;
                int billAmt =0;
                char items;
                cout<<"....................WELCOME TO AVI'S CAFE..................... "<<endl;
                cout<<"............please follow the below instructions.............. "<<endl;
                cout<<"step 1) : please enter the 'A' to See menu.."<<endl;
                cout<<"step 2) : you will get bill after your final order "<<endl;
                start:
                cin>>c;
                    if (c=='a' || c=='A')
                    {   first:
                        cout<<"do you want to see  types of 'BURGERS' so enter the 'B' "<<endl;
                        cout<<"do you want to see  types of 'HOT DOGS' so enter the 'H' "<<endl;
                        cout<<"do you want to see  types of 'DRINKS' so enter the 'D' "<<endl;
                        typ:
                        cin>>types;
                            
                            if(types=='b'|| types=='B'){
                                char bur;
                                cout<<"[1];- Veg Burger                              Rs.120"<<endl;
                                cout<<"[2];- Crunchy Veg Burger                      Rs.100"<<endl;
                                cout<<"[3];- Chicken Burger                          Rs.150"<<endl;
                                cout<<"[4];- Crunchy Chicken Burger                  Rs.180"<<endl;
                                cout<<"[5];- Cafe Special Veg Burger                 Rs.100"<<endl;
                                cout<<"[6];- Cafe Special non-Veg Burger             Rs.130"<<endl;
                                cout<<"[7];- Bull special                            Rs.920"<<endl;
                                cout<<"[8];- Lamb special                            Rs.820"<<endl;
                                b_num:
                                cin>>bur;
                                if (bur=='1')
                                {
                                    billAmt=billAmt+120;
                                }
                                else if (bur=='2')
                                {
                                    billAmt=billAmt+100;
                                }
                                else if (bur=='3')
                                {
                                    billAmt=billAmt+150;
                                }
                                else if (bur=='4')
                                {
                                    billAmt=billAmt+180;
                                }
                                else if (bur=='5')
                                {
                                    billAmt=billAmt+100;
                                }
                                else if (bur=='6')
                                {
                                    billAmt=billAmt+130;
                                }
                                else if (bur=='7')
                                {
                                    billAmt=billAmt+920;
                                }
                                else if (bur=='8')
                                {
                                    billAmt=billAmt+820;
                                }
                                else{
                                    cout<<"you have  entered the wrong valur please try again...!"<<endl;
                                    goto b_num;
                                }
                                         cout<<"Do you Want to add more items please press YES for 'Y'  and NO for 'N' "<<endl;
                                         item:
                                         cin>>items;
                                         if(items=='y' || items=='Y'){
                                            goto first;

                                         }
                                         else if (items=='n' || items=='N')
                                         {
                                           return billAmt;
                                         }
                                         else{
                                           cout<<"please enter the correct key..!"<<endl;
                                           goto item;
                                         }

                            }
                            else if (types=='h'|| types=='H'){
                                char hot;
                                cout<<"[1]:- Cheese Veg Hot Dog                         Rs.90"<<endl;
                                cout<<"[2]:- Krishana's sp Hot Dog                      Rs.120"<<endl;
                                cout<<"[3]:- Schezwan Hot Dog                           Rs.100"<<endl;
                                cout<<"[4]:- Peri Peri Hot Dog                          Rs.130"<<endl;
                                cout<<"[5]:- Italian Hot Dog                            Rs.150"<<endl;
                                cout<<"[6]:- Mexican Hot Dog                            Rs.180"<<endl;
                                hott:
                                cin>>hot;
                                    if(hot=='1'){
                                        billAmt=billAmt+90;
                                    }
                                    else if (hot=='2')
                                    {
                                        billAmt=billAmt+120;
                                    }
                                    else if (hot=='3')
                                    {
                                        billAmt=billAmt+100;
                                    }
                                    else if (hot=='4')
                                    {
                                        billAmt=billAmt+130;
                                    }
                                    else if (hot=='5')
                                    {
                                        billAmt=billAmt+150;
                                    }
                                    else if (hot=='6')
                                    {
                                        billAmt=billAmt+180;
                                    }
                                    else{
                                     cout<<"you entered the wrong key please try again..!"<<endl;
                                     goto hott;
                                    }
                                        cout<<"Do you Want to add more items please press YES for 'Y'  and NO for 'N' "<<endl;
                                             item1:
                                                 cin>>items;
                                                 if(items=='y' || items=='Y'){
                                                    goto first;

                                                 }
                                                 else if (items=='n' || items=='N')
                                                 {
                                                   return billAmt;
                                                 }
                                                 else{
                                                   cout<<"please enter the correct key..!"<<endl;
                                                   goto item1;
                                                 }                                


                            }
                            else if(types=='d'|| types=='D'){
                                cout<<"which types of drinks do you want...!"<<endl;
                                cout<<"FOR || BEERS || ENTER THE 'B'"<<endl;
                                cout<<"FOR || LASSI || ENTER THE 'L'"<<endl;
                                cout<<"FOR || SODAS || ENTER THE 'S'"<<endl;
                                drink:
                                cin>>drinks;

                                if(drinks=='b' || drinks=='B'){
                                    char beer;
                                    cout<<"[1]:- King Fisher                     650 ML Bottle   Rs.200"<<endl;
                                    cout<<"[2]:- tsing Tao                       650 ML Bottle   Rs.180"<<endl;
                                    cout<<"[3]:- Brown ale                       650 ML Bottle   Rs.280"<<endl;
                                    bee:
                                    cin>>beer;
                                        if(beer=='1'){
                                            billAmt=billAmt+200;
                                        }
                                        else if (beer='2')
                                        {
                                           billAmt= billAmt+180;
                                        }
                                        else if(beer='3'){
                                            billAmt= billAmt+280;
                                        }
                                        else{
                                             cout<<"you entered the wrong key please try again..!"<<endl;
                                             goto bee;
                                        }

                                            cout<<"Do you Want to add more items please press YES for 'Y'  and NO for 'N' "<<endl;
                                                 item2:
                                                 cin>>items;
                                                 if(items=='y' || items=='Y'){
                                                    goto first;

                                                 }
                                                 else if (items=='n' || items=='N')
                                                 {
                                                   return billAmt;
                                                 }
                                                 else{
                                                   cout<<"please enter the correct key..!"<<endl;
                                                   goto item2;
                                                 }                                 

                                }
                                else if(drinks=='l' || drinks=='L'){
                                    char lassi;
                                    cout<<"[1]:- Mango lassi                                        Rs.60"<<endl;
                                    cout<<"[2]:- Salted lassi                                       Rs.40"<<endl;
                                    cout<<"[3]:- Sweet lassi                                        Rs.50"<<endl;
                                    cout<<"[4]:- plain lassi                                        Rs.90"<<endl;
                                    lass:
                                    cin>>lassi;
                                        if(lassi=='1'){
                                            billAmt=billAmt+60;
                                        }
                                        else if (lassi=='2')
                                        {
                                             billAmt=billAmt+40;
                                        }
                                        else if (lassi=='3')
                                        {
                                             billAmt=billAmt+50;
                                        }
                                        else if (lassi=='4')
                                        {
                                             billAmt=billAmt+90;
                                        }
                                        else{
                                               cout<<"you entered the wrong key please try again..!"<<endl;
                                               goto lass;
                                        }

                                            cout<<"Do you Want to add more items please press YES for 'Y'  and NO for 'N' "<<endl;
                                                 item3:
                                                 cin>>items;
                                                 if(items=='y' || items=='Y'){
                                                    goto first;

                                                 }
                                                 else if (items=='n' || items=='N')
                                                 {
                                                   return billAmt;
                                                 }
                                                 else{
                                                   cout<<"please enter the correct key..!"<<endl;
                                                   goto item3;
                                                 }                         
                                        


                                }
                                else if (drinks=='s' || drinks=='S'){
                                    char soda;
                                   cout<<"[1]:- Fresh Lime soda                                  Rs.40"<<endl;
                                   cout<<"[2]:- Rose soda                                        Rs.90"<<endl;
                                   cout<<"[3]:- Plain soda                                       Rs.30"<<endl;
                                   cout<<"[4]:- Tonic soda                                       Rs.50"<<endl;
                                   sodaa:
                                   cin>>soda;
                                    if(soda=='1'){
                                        billAmt=billAmt+40;
                                    }
                                    else if (soda=='2')
                                    {
                                      billAmt=billAmt+90;
                                    }
                                    else if (soda=='3')
                                    {
                                      billAmt=billAmt+30;
                                    }
                                    else if (soda=='4')
                                    {
                                      billAmt=billAmt+50;
                                    }
                                    else{
                                       cout<<"you entered the wrong key please try again..!"<<endl;
                                       goto sodaa;
                                    }

                                                cout<<"Do you Want to add more items please press YES for 'Y'  and NO for 'N' "<<endl;
                                                 item4:
                                                 cin>>items;
                                                 if(items=='y' || items=='Y'){
                                                    goto first;

                                                 }
                                                 else if (items=='n' || items=='N')
                                                 {
                                                   return billAmt;
                                                 }
                                                 else{
                                                   cout<<"please enter the correct key..!"<<endl;
                                                   goto item4;
                                                 }                         
                                    

                                }
                                else{
                                     cout<<"you entered the wrong key please try again..!"<<endl;
                                     goto drink;
                                }
                                

                            }
                            else{
                                cout<<"you entered the wrong key please try again..!"<<endl;
                                goto typ;
                            }

                    }
                    else{
                         cout<<"please enter the correct key..!"<<endl;
                        goto start;
                    }
                    
            }

     
