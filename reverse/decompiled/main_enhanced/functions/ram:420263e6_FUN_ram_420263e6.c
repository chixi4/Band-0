
undefined4 FUN_ram_420263e6(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(ushort *)(param_1 + 0x10) <= param_2) {
    iVar1 = FUN_ram_4202d538(param_1,param_3,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xe;
    }
    return uVar2;
  }
  return 0xd;
}

