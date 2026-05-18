
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ff52(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc5148;
  for (; param_4 <= param_5; param_4 = param_4 + 1 & 0xff) {
    iVar3 = param_4 * 0x19 + param_2;
    for (iVar2 = iVar3; (iVar2 - iVar3 & 0xffU) < ((param_3 + 1) - param_2 & 0xffU);
        iVar2 = iVar2 + 1) {
      *(undefined1 *)(iVar1 + iVar2) = *(undefined1 *)(param_1 + iVar2);
    }
  }
  return;
}

