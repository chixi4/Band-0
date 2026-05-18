
undefined4
FUN_ram_42029638(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 6;
  if (*param_5 != '\x10') {
    iVar1 = 0x14;
  }
  uVar2 = 4;
  if ((int)((uint)*(ushort *)(param_1 + 0x10) + iVar1) <= param_2) {
    iVar1 = (*(code *)&SUB_ram_40011a00)();
    uVar2 = 6;
    if (iVar1 != 0) {
      (*(code *)&SUB_ram_40011aac)(iVar1,param_3);
      (*(code *)&SUB_ram_40011aac)(iVar1 + 2,param_4);
      FUN_ram_4203012a(param_5,iVar1 + 4);
      uVar2 = 0;
    }
  }
  return uVar2;
}

