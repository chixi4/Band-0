
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420386e4(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  
  pcVar4 = (char *)(**(code **)(_DAT_ram_3fcdfecc + 0x5cc))(param_3);
  if (pcVar4 == (char *)0x0) {
    return 0x42;
  }
  uVar1 = *(ushort *)(pcVar4 + 0xc);
  if ((uVar1 & 0x12) == 0) {
    return 0x12;
  }
  if (param_4 != 1) {
    if ((param_4 != 0) && (param_4 != 2)) {
      uVar5 = 0x12;
      if (param_4 != 3) {
        return 0x12;
      }
      if ((uVar1 & 0x10) == 0) {
        if (*pcVar4 != '\0') {
          if ((param_2 == 0) && (uVar5 = 0xc, (uVar1 & 2) != 0)) {
            return 0xc;
          }
          goto LAB_ram_4203874a;
        }
      }
      else {
        if (0x1f < param_2) {
          return 0x12;
        }
        if (*pcVar4 != '\0') {
LAB_ram_4203874a:
          iVar6 = _DAT_ram_3fcdfecc;
          if (*(int *)(pcVar4 + 0x48) != 0) {
            (**(code **)(_DAT_ram_3fcdfecc + 0x544))(pcVar4,0x400);
            uVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x904))(*(undefined4 *)(pcVar4 + 0x48));
            iVar6 = _DAT_ram_3fcdfecc;
            pcVar4[0x48] = '\0';
            pcVar4[0x49] = '\0';
            pcVar4[0x4a] = '\0';
            pcVar4[0x4b] = '\0';
          }
          pcVar3 = *(code **)(iVar6 + 0x604);
          iVar6 = (**(code **)(iVar6 + 0x114))(uVar5);
          (*pcVar3)(pcVar4 + 0x48,1,*(undefined2 *)(iVar6 + 0x44),param_1,param_2);
          if (*(int *)(pcVar4 + 0x48) == 0) {
            return 7;
          }
          if ((((pcVar4[0x194] & 2U) != 0) &&
              (puVar7 = *(uint **)(pcVar4 + 0x70), puVar7 != (uint *)0x0)) && ((*puVar7 & 3) != 0))
          {
            (**(code **)(_DAT_ram_3fcdfecc + 0x1bc))(puVar7,1);
            (**(code **)(_DAT_ram_3fcdfecc + 0x594))(pcVar4);
          }
          (**(code **)(_DAT_ram_3fcdfecc + 0x548))(pcVar4,0x400);
          return 0;
        }
      }
      bVar2 = true;
      goto LAB_ram_420387fa;
    }
    if (*(int *)(pcVar4 + 0x44) == 0) {
      return 0x12;
    }
  }
  if ((uVar1 & 0x10) != 0) {
    return 0x12;
  }
  if (*pcVar4 != '\0') {
    return 0xc;
  }
  if (param_2 == 0) {
    return 0x12;
  }
  bVar2 = param_4 == 1;
LAB_ram_420387fa:
  pcVar3 = *(code **)(_DAT_ram_3fcdfecc + 0x604);
  iVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))(0x12);
  (*pcVar3)(pcVar4 + 0x44,bVar2,*(undefined2 *)(iVar6 + 0x2e),param_1,param_2);
  if (*(int *)(pcVar4 + 0x44) == 0) {
    return 7;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x608))(pcVar4);
  return 0;
}

