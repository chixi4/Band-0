
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203848c(undefined4 param_1,int param_2,int param_3,char param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  
  pcVar1 = (char *)(**(code **)(_DAT_ram_3fcdfecc + 0x5cc))();
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0x42;
  }
  else if (param_2 == 1) {
    if (((*(ushort *)(pcVar1 + 10) & 0x40) == 0) &&
       (((iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x72c))(), iVar2 == 0 ||
         ((*(ushort *)(pcVar1 + 0xc) & 0x12) != 2)) ||
        ((*(int *)(pcVar1 + 0x44) != 0 && (*(short *)(*(int *)(pcVar1 + 0x44) + 0x10) != 0)))))) {
      if (param_3 < 0) {
        uVar4 = *(ushort *)(pcVar1 + 0xc) & 8;
        if ((*(ushort *)(pcVar1 + 0xc) & 8) != 0) {
          uVar4 = 0x80;
        }
      }
      else {
        uVar4 = (ushort)param_3;
      }
      *(ushort *)(pcVar1 + 0xd8) = uVar4;
      pcVar1[0xe2] = param_4;
      pcVar1[0xe3] = '\0';
      uVar3 = 0;
      if (*pcVar1 == '\0') {
        uVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x5dc))(pcVar1);
      }
      *(undefined4 *)(_DAT_ram_3fcdff68 + 0x14) = 0;
    }
    else {
      uVar3 = 0xc;
    }
  }
  else {
    uVar3 = 0x12;
    if (param_2 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x5e4))();
      uVar3 = 0;
    }
  }
  return uVar3;
}

