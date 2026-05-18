
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420389bc(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  uint *puVar6;
  code *pcVar7;
  
  pcVar4 = (char *)(**(code **)(_DAT_ram_3fcdfecc + 0x5cc))(param_3);
  if (pcVar4 == (char *)0x0) {
    return 0x42;
  }
  uVar2 = *(ushort *)(pcVar4 + 0xc);
  if ((uVar2 & 0x10) == 0) {
    if ((uVar2 & 2) != 0) {
      if (param_2 != 0) {
        return 0x12;
      }
      return 0;
    }
    if (param_4 == 2) goto LAB_ram_42038b42;
    if (param_4 < 3) {
      if (param_4 == 0) goto LAB_ram_42038b52;
      if (param_4 != 1) {
        return 0x12;
      }
LAB_ram_42038a22:
      if (*pcVar4 != '\0') {
        return 0xc;
      }
      if (param_2 == 0) {
        return 0x12;
      }
      bVar3 = param_4 == 1;
      (**(code **)(_DAT_ram_3fcdfecc + 0x548))(pcVar4,0x40);
      cVar1 = *pcVar4;
    }
    else {
      if (param_4 != 3) {
        if (param_4 != 4) {
          return 0x12;
        }
LAB_ram_42038b10:
        if (*pcVar4 == '\0') {
          return 0x12;
        }
        if (*(int *)(pcVar4 + 0x3c) == 0) {
          return 0x12;
        }
        if (*(short *)(*(int *)(pcVar4 + 0x3c) + 0x10) == 0) {
          return 0x12;
        }
        if (param_2 != 0) {
          return 0x12;
        }
        goto LAB_ram_42038b98;
      }
LAB_ram_42038bb6:
      bVar3 = true;
      (**(code **)(_DAT_ram_3fcdfecc + 0x544))(pcVar4,0x40);
      cVar1 = *pcVar4;
    }
    if (cVar1 != '\0') {
      iVar5 = _DAT_ram_3fcdfecc;
      if (*(int *)(pcVar4 + 0x40) != 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x544))(pcVar4,0x200);
        (**(code **)(_DAT_ram_3fcdfecc + 0x904))(*(undefined4 *)(pcVar4 + 0x40));
        iVar5 = _DAT_ram_3fcdfecc;
        pcVar4[0x40] = '\0';
        pcVar4[0x41] = '\0';
        pcVar4[0x42] = '\0';
        pcVar4[0x43] = '\0';
      }
      pcVar7 = *(code **)(iVar5 + 0x604);
      iVar5 = (**(code **)(iVar5 + 0x114))();
      (*pcVar7)(pcVar4 + 0x40,bVar3,*(undefined2 *)(iVar5 + 0x44),param_1,param_2);
      if (*(int *)(pcVar4 + 0x40) == 0) {
        return 7;
      }
      (**(code **)(_DAT_ram_3fcdfecc + 0x548))(pcVar4,0x200);
      if ((pcVar4[0x194] & 1U) == 0) {
        return 0;
      }
      puVar6 = *(uint **)(pcVar4 + 0x70);
      if (puVar6 != (uint *)0x0) {
        if ((*puVar6 & 3) != 0) {
          (**(code **)(_DAT_ram_3fcdfecc + 0x1bc))(puVar6,1);
          (**(code **)(_DAT_ram_3fcdfecc + 0x594))(pcVar4);
          return 0;
        }
        return 0;
      }
      return 0;
    }
  }
  else {
    if ((uVar2 & 4) == 0) {
      if (param_4 == 1) {
        return 0x12;
      }
      if (param_4 != 0) {
        if (param_4 != 2) {
          if (param_4 != 3) {
            return 0x12;
          }
          goto LAB_ram_42038bae;
        }
        goto LAB_ram_42038b42;
      }
    }
    else {
      iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x72c))();
      if ((iVar5 != 0) && (param_2 != 0)) {
        return 0x12;
      }
      if (param_4 == 2) {
LAB_ram_42038b42:
        (**(code **)(_DAT_ram_3fcdfecc + 0x544))(pcVar4,0x40);
      }
      else {
        if (2 < param_4) {
          if (param_4 != 3) {
            if (param_4 != 4) {
              return 0x12;
            }
            if ((*(ushort *)(pcVar4 + 0xc) & 0x10) != 0) {
              return 0x12;
            }
            goto LAB_ram_42038b10;
          }
          uVar2 = *(ushort *)(pcVar4 + 0xc);
LAB_ram_42038bae:
          if (((uVar2 & 0x10) != 0) && (0x1f < param_2)) {
            return 0x12;
          }
          goto LAB_ram_42038bb6;
        }
        if (param_4 != 0) {
          if (param_4 != 1) {
            return 0x12;
          }
          if ((*(ushort *)(pcVar4 + 0xc) & 0x10) != 0) {
            return 0x12;
          }
          goto LAB_ram_42038a22;
        }
      }
    }
LAB_ram_42038b52:
    if (((*(int *)(pcVar4 + 0x3c) == 0) || ((*(ushort *)(pcVar4 + 0xc) & 0x10) != 0)) ||
       (param_2 == 0)) {
      return 0x12;
    }
    if (*pcVar4 != '\0') {
      return 0xc;
    }
    if (param_4 == 3) {
      bVar3 = true;
    }
    else {
      bVar3 = param_4 == 1;
    }
  }
  pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x604);
  iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  (*pcVar7)(pcVar4 + 0x3c,bVar3,*(undefined2 *)(iVar5 + 0x44),param_1,param_2);
  if (*(int *)(pcVar4 + 0x3c) == 0) {
    return 7;
  }
LAB_ram_42038b98:
  (**(code **)(_DAT_ram_3fcdfecc + 0x608))(pcVar4);
  return 0;
}

