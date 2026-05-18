
undefined4 FUN_ram_42061262(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0x102;
  }
  else {
    *(int *)(&DAT_ram_3fcc26c0 + param_2 * 4) = param_1;
    iVar1 = FUN_ram_420b5992(param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4205f5f4(param_1,iVar1);
      return uVar2;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

