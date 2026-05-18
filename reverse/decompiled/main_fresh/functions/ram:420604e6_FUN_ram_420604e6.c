
int FUN_ram_420604e6(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int *param_5,
                    int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [44];
  
  if ((0xf < param_4) && (iVar1 = thunk_FUN_ram_403904a6(param_4 + 0x10), iVar1 != 0)) {
    (*(code *)&SUB_ram_40010488)(auStack_50,0,0x1e);
    FUN_ram_4206038c(param_2,param_3,auStack_50,&uStack_64,auStack_60);
    uVar3 = 8;
    if (param_6 != 0) {
      auStack_60[0] = 0;
      uVar3 = 0;
    }
    iVar2 = FUN_ram_42060e16(param_1,0x10,auStack_60,uVar3,param_3 + 8,param_4 - 0x10,auStack_50,
                             uStack_64,(param_4 - 8) + param_3,iVar1);
    if (-1 < iVar2) {
      *param_5 = param_4 - 0x10;
      return iVar1;
    }
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0;
}

