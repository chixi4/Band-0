
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203a84a(byte *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0x12;
  if (param_2 == 1) {
    bVar1 = *param_1;
    uVar2 = 0x12;
    if (bVar1 < 2) {
      uVar2 = 0;
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      if (*(byte *)(iVar3 + 99) != bVar1) {
        iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x19c))();
        if (iVar3 == 0) {
          iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
          *(byte *)(iVar3 + 99) = *param_1;
          uVar2 = 0;
        }
        else {
          uVar2 = 0xc;
        }
      }
    }
  }
  return uVar2;
}

