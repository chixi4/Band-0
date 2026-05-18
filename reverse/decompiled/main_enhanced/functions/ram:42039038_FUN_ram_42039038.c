
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42039038(undefined1 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  pcVar1 = (char *)(**(code **)(_DAT_ram_3fcdfecc + 0x5cc))(*param_1);
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0x42;
  }
  else {
    uVar2 = 0xc;
    if ((*pcVar1 == '\0') && ((pcVar1[0x108] & 1U) == 0)) {
      iVar3 = _DAT_ram_3fcdfecc;
      if (*(int *)(pcVar1 + 0xe8) != 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x904))();
        iVar3 = _DAT_ram_3fcdfecc;
        pcVar1[0xe8] = '\0';
        pcVar1[0xe9] = '\0';
        pcVar1[0xea] = '\0';
        pcVar1[0xeb] = '\0';
      }
      if (*(int *)(pcVar1 + 0x3c) != 0) {
        (**(code **)(iVar3 + 0x904))();
        iVar3 = _DAT_ram_3fcdfecc;
        pcVar1[0x3c] = '\0';
        pcVar1[0x3d] = '\0';
        pcVar1[0x3e] = '\0';
        pcVar1[0x3f] = '\0';
      }
      if (*(int *)(pcVar1 + 0x44) != 0) {
        (**(code **)(iVar3 + 0x904))();
        iVar3 = _DAT_ram_3fcdfecc;
        pcVar1[0x44] = '\0';
        pcVar1[0x45] = '\0';
        pcVar1[0x46] = '\0';
        pcVar1[0x47] = '\0';
      }
      (**(code **)(iVar3 + 0x9fc))(0x3015,*param_1);
      (**(code **)(_DAT_ram_3fcdfecc + 0x5d4))(pcVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

