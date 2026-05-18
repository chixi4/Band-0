
undefined4 FUN_ram_4204af8c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = gp + 0x4d0 + param_1 * 0x14;
  *(short *)(iVar1 + 10) = (short)param_2;
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    iVar2 = FUN_ram_42078a88(iVar1,param_3,0);
    if (iVar2 == 0) break;
    FUN_ram_4039bab0();
  }
  FUN_ram_42033fd8(1,0x400,2,&DAT_ram_3c0800b4,param_1);
  return 0x101;
}

