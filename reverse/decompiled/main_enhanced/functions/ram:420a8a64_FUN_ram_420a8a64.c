
undefined4
FUN_ram_420a8a64(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = FUN_ram_4206f68c(uVar2);
  if (iVar1 == param_3) {
    uVar2 = FUN_ram_420703bc(uVar2,param_7,param_8,param_5,param_2,param_4,param_6);
    return uVar2;
  }
  return 0xffffbf80;
}

