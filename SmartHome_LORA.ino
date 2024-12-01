#include "DieuKhien.h"
//////////////LẦU 1///////////////
//////////////Phòng khách///////////////////////
DieuKhien denpk(2); 
DieuKhien quatpk(3);
DieuKhien tivi(4);

DieuKhien dkdenpk(24);
DieuKhien dkquatpk(25);
DieuKhien dktivi(26);
////Cầu thang
DieuKhien coi(5);
DieuKhien den(6);
DieuKhien mq2_1(7);
////Nhà vệ sinh
DieuKhien quatvs1(8);
DieuKhien denvs1(9);

DieuKhien dkquatvs1(20);
DieuKhien dkdenvs1(21);
//////////////////////////Phòng bếp
DieuKhien quatnb(10);
DieuKhien dennb(11);
DieuKhien mq2_2(12);

DieuKhien dkquatnb(22);
DieuKhien dkdennb(23);
//Cửa////// Servo


//Cửa cổng RFID


//////////////////Lầu 2///////////
DieuKhien denpn1(13);
DieuKhien quatpn1(14);
DieuKhien quatvs2(15);
DieuKhien denpn2(16);
DieuKhien quatpn2(17);
DieuKhien denvs2(18);

DieuKhien dkdenpn1(24);
DieuKhien dkquatpn1(25);
DieuKhien dkdenpn2(24);
DieuKhien dkquatpn2(25);
DieuKhien dkdenvs2(27);
DieuKhien dkquatvs2(27);
void setup() {

}
void guiLORA(){
  
}
void nhanLORA(){
  
}
int val1,val2,val3,val4,val5, val6, val7,val8,val9,val10,val11,val12,val13;
void loop() {
  ///////////////////////LẦU 1//////////////////////////////
  //////////////Phòng khách///////////////////////
  if(dkdenpk.doc() == 0){
    val1 =!val1;
    denpk.write(val1);
    guiLORA();
    delay(300);
  }

  if(dkquatpk.doc() == 0){
    val2 =!val2;
    quatpk.write(val2);
    guiLORA();
    delay(300);
  }
  if(dktivi.doc() == 0){
    val3 =!val3;
    tivi.write(val3);
    guiLORA();
    delay(300);
  }
  //////////////Cầu thang///////////////////////
  coi.write(mq2_1.doc());
  den.write(mq2_1.doc());
   //////////////Nhà vệ sinh///////////////////////
  if(dkdenvs1.doc() == 0){
    val4 =!val4;
    denvs1.write(val4);
    guiLORA();
    delay(300);
  }

  if(dkquatvs1.doc() == 0){
    val5 =!val5;
    quatvs1.write(val5);
    guiLORA();
    delay(300);
  }
  //////////////Phòng bếp///////////////////////
  if(dkdennb.doc() == 0){
    val6 =!val6;
    dennb.write(val6);
    guiLORA();
    delay(300);
  }

  if(dkquatnb.doc() == 0){
    val7 =!val7;
    quatnb.write(val7);
    guiLORA();
    delay(300);
  }

  //////////////Cầu thang///////////////////////
  quatnb.write(mq2_2.doc());
  ////////////////////////Lầu 2//////////////////////
  //////////////////Lầu 2///////////
 //////////////Phòng ngủ 1///////////////////////
  if(dkdenpn1.doc() == 0){
    val8 =!val8;
    denpk.write(val8);
    guiLORA();
    delay(300);
  }

  if(dkquatpn1.doc() == 0){
    val9 =!val9;
    quatpk.write(val9);
    guiLORA();
    delay(300);
  }
 //////////////Phòng ngủ 2///////////////////////
  if(dkdenpn2.doc() == 0){
    val10 =!val10;
    denpk.write(val10);
    guiLORA();
    delay(300);
  }

  if(dkquatpn2.doc() == 0){
    val11 =!val11;
    quatpk.write(val11);
    guiLORA();
    delay(300);
  }
  //////////////Nhà vệ sinh 2///////////////////////
  if(dkdenvs2.doc() == 0){
    val12 =!val12;
    denvs1.write(val12);
    guiLORA();
    delay(300);
  }

   if(dkquatvs2.doc() == 0){
    val13 =!val13;
    quatvs1.write(val13);
    guiLORA();
    delay(300);
  }
}
