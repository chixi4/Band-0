
undefined4 FUN_ram_420939a4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = gp + 0x604 + param_1 * 0x14;
  *(short *)(iVar1 + 10) = (short)param_2;
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    iVar2 = FUN_ram_420b218a(iVar1,param_3,0);
    if (iVar2 == 0) break;
    FUN_ram_4039de84();
  }
  FUN_ram_4207a038(1,0x400,2,&DAT_ram_3c1022e4,param_1);
  return 0x101;
}

