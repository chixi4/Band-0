
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203b2f0(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_5 != 0) + 1 < param_2) {
    return 0x12;
  }
  if (1 < param_1) {
    return 0x12;
  }
  cVar6 = (char)param_5;
  if (param_1 == 0) {
    pcVar2 = *(char **)(_DAT_ram_3fcdfee0 + 0xc);
    pcVar2[0x58] = cVar6;
    if (*pcVar2 != '\0') {
      (**(code **)(_DAT_ram_3fcdfecc + 0x330))(1);
    }
    (**(code **)(_DAT_ram_3fcdfed0 + 0x114))(pcVar2);
    if (_DAT_ram_3fcdfea8 == (undefined4 *)0x0) {
      return 0;
    }
    if ((code *)*_DAT_ram_3fcdfea8 == (code *)0x0) {
      return 0;
    }
    uVar4 = 3;
    if (param_5 == 0) {
      uVar4 = 1;
    }
    (*(code *)*_DAT_ram_3fcdfea8)(0,uVar4,0);
    return 0;
  }
  if (param_2 == 0) {
LAB_ram_4203b322:
    pcVar2 = *(char **)(_DAT_ram_3fcdfee0 + 0xc);
    pcVar2[0x58] = cVar6;
    if (param_5 != 0) {
      if (param_4 == 0) {
        uVar9 = 0;
      }
      else {
        uVar8 = param_3 * 0x500;
        uVar9 = param_4 * 10;
        if (uVar8 != 0) {
          if (uVar8 <= uVar9) {
            return 0x12;
          }
          goto LAB_ram_4203b33c;
        }
      }
      uVar8 = 0;
      goto LAB_ram_4203b33c;
    }
  }
  else {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (((*(byte *)(iVar1 + 0x5d) & 1) != 0) && (_DAT_ram_3fcdfee4 == 0)) {
      return 0x12;
    }
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (((*(byte *)(iVar1 + 0x5d) & 2) != 0) && (_DAT_ram_3fcdfee8 == 0)) {
      return 0x12;
    }
    if (param_2 != 2) goto LAB_ram_4203b322;
    if (param_3 == 0) {
      return 0x12;
    }
    if (param_4 == 0) {
      return 0x12;
    }
    pcVar2 = *(char **)(_DAT_ram_3fcdfee0 + 0xc);
    pcVar2[0x58] = cVar6;
    if (param_5 != 0) {
      uVar8 = param_3 * 0x500;
      uVar9 = param_4 * 10;
      if (uVar8 <= uVar9) {
        return 0x12;
      }
      goto LAB_ram_4203b33c;
    }
  }
  uVar9 = 0;
  uVar8 = 0;
LAB_ram_4203b33c:
  pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x114);
  if (*pcVar2 == '\0') {
    iVar1 = (*pcVar7)();
    if (*(short *)(iVar1 + 0xe) != 0) {
      pcVar2[3] = (char)param_2;
    }
    iVar1 = _DAT_ram_3fcdfecc;
    pcVar2[0x60] = '\0';
    pcVar2[0x61] = '\0';
    pcVar2[0x62] = '\0';
    pcVar2[99] = '\0';
    pcVar2[100] = '\0';
    pcVar2[0x65] = '\0';
    pcVar2[0x66] = '\0';
    pcVar2[0x67] = '\0';
    iVar3 = 0;
    iVar1 = (**(code **)(iVar1 + 0x114))();
    iVar5 = 0;
    if (*(char *)(iVar1 + 0x22) != '\0') {
      do {
        iVar1 = *(int *)(*(int *)(_DAT_ram_3fcdfee0 + 8) + iVar5);
        if (*(char *)(iVar1 + 3) != '\0') {
          iVar5 = *(int *)(iVar5 + *(int *)(pcVar2 + 0x6c));
          *(char *)(iVar5 + 3) = *(char *)(iVar1 + 3);
          *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(iVar1 + 4);
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar1 + 8);
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
          *(undefined1 *)(iVar5 + 2) = *(undefined1 *)(iVar1 + 2);
          cVar6 = *(char *)(iVar1 + 1);
          *(char *)(iVar5 + 1) = cVar6;
          if (*(int *)(pcVar2 + 0x60) == 0) {
            *(int *)(pcVar2 + 0x60) = iVar5;
            pcVar2[2] = cVar6;
          }
          else {
            *(int *)(pcVar2 + 100) = iVar5;
          }
        }
        iVar3 = iVar3 + 1;
        iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        iVar5 = iVar3 * 4;
      } while (iVar3 < (int)(uint)*(byte *)(iVar1 + 0x22));
    }
    iVar1 = _DAT_ram_3fcdfecc;
    if (*(int *)(pcVar2 + 0x60) == 0) {
      iVar3 = **(int **)(pcVar2 + 0x6c);
      pcVar2[2] = '\0';
      *(int *)(pcVar2 + 0x60) = iVar3;
      *(undefined1 *)(iVar3 + 3) = 1;
      *(undefined1 *)(iVar3 + 4) = 0;
      uVar4 = (**(code **)(iVar1 + 0x9ec))(0x10);
      iVar1 = _DAT_ram_3fcdfecc;
      *(undefined4 *)(iVar3 + 8) = uVar4;
      uVar4 = (**(code **)(iVar1 + 0x9ec))(0x10);
      *(undefined1 *)(iVar3 + 2) = 0;
      *(undefined1 *)(iVar3 + 1) = 0;
      iVar1 = _DAT_ram_3fcdfecc;
      *(undefined4 *)(iVar3 + 0xc) = uVar4;
    }
    iVar3 = _DAT_ram_3fcdfee0;
    if (*(char *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0xe) != '\0') {
      *(undefined4 *)(_DAT_ram_3fcdfee0 + 0x2c) = 0;
    }
    *(undefined1 *)(iVar3 + 0x10) = 0;
    (**(code **)(iVar1 + 0x854))(*(undefined4 *)(iVar3 + 0x20));
    iVar1 = _DAT_ram_3fcdfee0;
    iVar3 = _DAT_ram_3fcdfee0 + 0x24;
    pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x32c);
    *(undefined4 *)(_DAT_ram_3fcdfee0 + 0x24) = 0;
    *(int *)(iVar1 + 0x28) = iVar3;
    *(uint *)(pcVar2 + 0x50) = uVar9;
    *(uint *)(pcVar2 + 0x54) = uVar8;
    iVar1 = (*pcVar7)(pcVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    (**(code **)(_DAT_ram_3fcdfed0 + 0x16c))(pcVar2);
    if ((_DAT_ram_3fcdfea8 != (undefined4 *)0x0) && ((code *)*_DAT_ram_3fcdfea8 != (code *)0x0)) {
      uVar4 = 3;
      if (param_5 == 0) {
        uVar4 = 1;
      }
      (*(code *)*_DAT_ram_3fcdfea8)(0,uVar4,1);
      return 0;
    }
  }
  else {
    iVar1 = 0;
    while( true ) {
      iVar3 = (*pcVar7)();
      iVar5 = iVar1 * 4;
      if ((int)(uint)*(byte *)(iVar3 + 0x22) <= iVar1) break;
      iVar1 = iVar1 + 1;
      iVar3 = *(int *)(*(int *)(pcVar2 + 0x6c) + iVar5);
      if ((*(char *)(iVar3 + 3) != '\0') && (*(char *)(iVar3 + 4) == '\x02')) {
        return 0xc;
      }
      pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x114);
    }
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (*(short *)(iVar1 + 0xe) != 0) {
      pcVar2[3] = (char)param_2;
    }
    iVar1 = _DAT_ram_3fcdfed0;
    *(uint *)(pcVar2 + 0x50) = uVar9;
    *(uint *)(pcVar2 + 0x54) = uVar8;
    (**(code **)(iVar1 + 0x16c))(pcVar2);
    if (*(char *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0xe) != '\0') {
      *(undefined4 *)(_DAT_ram_3fcdfee0 + 0x2c) = 0;
      return 0;
    }
  }
  return 0;
}

