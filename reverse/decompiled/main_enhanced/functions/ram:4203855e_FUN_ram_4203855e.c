
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203855e(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4203848c();
  if (iVar1 == 0) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x5cc))(param_1);
    if (((param_2 == 1) && ((*(ushort *)(iVar2 + 0xc) & 1) != 0)) &&
       (*(int *)(_DAT_ram_3fcdff64 + 0x24) == 0)) {
      iVar1 = 7;
    }
    else {
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x72c))();
      if (iVar3 == 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x548))(iVar2,0x80);
      }
    }
  }
  return iVar1;
}

