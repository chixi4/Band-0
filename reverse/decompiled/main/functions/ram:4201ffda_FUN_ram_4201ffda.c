
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ffda(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_ram_4201ff9a(param_2,param_4);
  FUN_ram_4201fe48(0x10);
  iVar2 = 0;
  do {
    iVar1 = param_1;
    if ((param_1 != 0) || (uVar3 = param_3 & 0xff, iVar1 = _DAT_ram_3fcc5148, param_3 == 0xffffffff)
       ) {
      uVar3 = (uint)*(byte *)(iVar1 + iVar2);
    }
    iVar2 = iVar2 + 1;
    FUN_ram_4201fe50(uVar3);
  } while (iVar2 != 5000);
  FUN_ram_4201fe48(0x13);
  iVar2 = 0;
  do {
    if (param_2 == 0) {
      FUN_ram_4201fe50(param_4 & 0xff);
      *(char *)(_DAT_ram_3fcc5148 + iVar2) = (char)param_4;
    }
    else {
      FUN_ram_4201fe50(*(undefined1 *)(param_2 + iVar2));
      *(undefined1 *)(_DAT_ram_3fcc5148 + iVar2) = *(undefined1 *)(param_2 + iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 5000);
  return;
}

