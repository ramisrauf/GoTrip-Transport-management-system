void destination(int trip_id[],string trip_name[],string trip_dest[],int trip_price[],
 int trip_seats[],int trip_seller[],int trip_status[],int trip_count,string dest){
 bool any=false;
for(int i=0;i<trip_count;i++){
if(trip_dest[i]==dest && trip_status[i]==1){
cout<<trip_id[i]<<endl;
cout<<trip_name[i]<<endl;
cout<<trip_dest[i]<<endl;
cout<<trip_price[i]<<endl;
cout<<trip_seats[i]<<" seats"<<endl;
cout<<"seller "<<trip_seller[i]<<endl;
any=true;
 }
}
if(any==false){
cout<<"No trips available";
} }
void userMenu(int trip_id[], string trip_name[], string trip_dest[], int trip_price[],
int trip_seats[], int trip_seller[], int trip_status[], int trip_count){
 int choice;
   do{
        cout<<"======USER MENU====="<<endl;
        cout<<"1.View trips"<<endl;
        cout<<"2.Search by destination"<<endl;
        cout<<"3. Set priorities"<<endl;
        cout<<"4. Book a trip"<<endl;
        cout<<"5. Cancel a booking"<<endl;
        cout<<"6. My bookings"<<endl;
        cout<<"7. Sort trips by price"<<endl;
        cout<<"8. Plan trips within budget"<<endl;
        cout<<"9. Logout"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
     
     switch(choice){
     case 1:
     {
      view_trips(trip_id,trip_name,trip_dest,
         trip_price,trip_seats,trip_seller,trip_status, trip_count);
         break;
     }
     case 2:{
      string dest;
cout<<"Enter your destination "; 
cin>>dest;
destination(trip_id,trip_name,trip_dest,trip_price,
 trip_seats,trip_seller,trip_status, trip_count,dest);
 break;
     }
case 3: case 4: case 5: case 6: case 7: case 8:
{ cout << "Pending" << endl;
break;
}
case 9:
{cout << "Logging out..." << endl;
 break;}

default:
{cout << "Invalid choice." << endl;
}
     }
}
 while (choice != 9);
}
