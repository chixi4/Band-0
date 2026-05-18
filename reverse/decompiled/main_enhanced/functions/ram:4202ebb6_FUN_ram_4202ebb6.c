
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202ebb6(char *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  iVar4 = _DAT_ram_3fcb6ba0;
  if (param_1 == (char *)0x0) {
    return 3;
  }
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      return 0;
    }
    if (cVar1 == '<') {
      iVar4 = FUN_ram_4202eba2();
      if (iVar4 == 0) {
        return 0;
      }
      FUN_ram_4202e20e(0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  bVar3 = false;
  if (param_1[4] == '\x01') {
    if ((*(char *)(_DAT_ram_3fcb6ba0 + 0xf4) != '\x02') ||
       ((*(byte *)(_DAT_ram_3fcb6ba0 + 0x105) & 1) != 0)) goto LAB_ram_4202ec30;
    cVar1 = param_1[5];
    FUN_ram_4039c11e((int)&uStack_28 + 1,param_1 + 6);
    cVar2 = *(char *)(iVar4 + 0x106);
    if (cVar1 == cVar2) {
LAB_ram_4202ed7a:
      iVar4 = FUN_ram_4039c0e0(iVar4 + 0x107,(int)&uStack_28 + 1,6);
      bVar3 = iVar4 == 0;
    }
    else {
      if (cVar2 == '\0') {
        if (cVar1 == '\x02') goto LAB_ram_4202ed7a;
      }
      else if (cVar2 == '\x02') {
        if (cVar1 == '\0') goto LAB_ram_4202ed7a;
      }
      else if (cVar2 == '\x01') {
        if (cVar1 == '\x03') goto LAB_ram_4202ed7a;
      }
      else if ((cVar2 == '\x03') && (cVar1 == '\x01')) goto LAB_ram_4202ed7a;
LAB_ram_4202ec30:
      bVar3 = false;
    }
  }
  iVar4 = FUN_ram_42036d04(*(undefined2 *)(param_1 + 2),0);
  if (iVar4 == 0) {
    return 0;
  }
  if (param_1[4] == '\0') {
    if (*(char *)(_DAT_ram_3fcb6ba0 + 0xf4) != '\x02') {
      return 5;
    }
  }
  else if (param_1[4] == '\x01') {
    if (1 < param_2) {
      return 5;
    }
    piVar9 = (int *)(_DAT_ram_3fcb6ba0 + (param_2 + 0x11) * 0x10);
    if ((char)*piVar9 != '\x01') {
      return 5;
    }
    if (-1 < *piVar9 << 0x14) {
      return 5;
    }
  }
  iVar5 = FUN_ram_4203650e(*(undefined2 *)(param_1 + 2));
  *(undefined2 *)(iVar5 + 0x1e) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)(iVar5 + 0x22) = *(undefined2 *)(param_1 + 0x10);
  *(char *)(iVar5 + 0x2e) = param_1[0x12];
  iVar4 = _DAT_ram_3fcb6ba0;
  if (param_1[4] == '\0') {
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0xfc);
    *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(iVar4 + 0x100);
    *(byte *)(iVar5 + 0x34) = *(byte *)(iVar5 + 0x34) | 1;
    *(byte *)(iVar5 + 4) = (byte)(*(uint *)(iVar4 + 0x104) >> 9) & 3;
LAB_ram_4202ecaa:
    FUN_ram_4202e11c();
  }
  else {
    iVar8 = param_2 * 0x10 + _DAT_ram_3fcb6ba0;
    uVar7 = *(undefined4 *)(iVar8 + 0x11c);
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(iVar8 + 0x118);
    *(undefined4 *)(iVar5 + 0x78) = uVar7;
    *(byte *)(iVar5 + 4) = (byte)((uint)*(undefined4 *)(iVar4 + (param_2 + 0x11) * 0x10) >> 8) & 3;
    FUN_ram_4202e0fa(param_2);
    if (bVar3) {
      uVar7 = *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x100);
      *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0xfc);
      *(undefined4 *)(iVar5 + 0x78) = uVar7;
      goto LAB_ram_4202ecaa;
    }
  }
  cVar1 = param_1[5];
  *(char *)(iVar5 + 8) = cVar1;
  FUN_ram_4039c11e(iVar5 + 9,param_1 + 6);
  *(undefined1 *)(iVar5 + 0xf) = 1;
  FUN_ram_4039c11e(iVar5 + 0x10,param_1 + 0x13,6);
  pcVar6 = param_1 + 0x19;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  iVar4 = FUN_ram_4039c0e0((int)&uStack_28 + 1,pcVar6,6);
  if (iVar4 == 0) {
    if ((cVar1 != '\x01') || ((*(byte *)(iVar5 + 0xe) & 0xc0) != 0x40)) goto LAB_ram_4202ed2a;
    uVar7 = 7;
    pcVar6 = (char *)(iVar5 + 8);
    iVar4 = iVar5 + 0x16;
  }
  else {
    *(undefined1 *)(iVar5 + 0x16) = 1;
    uVar7 = 6;
    iVar4 = iVar5 + 0x17;
  }
  FUN_ram_4039c11e(iVar4,pcVar6,uVar7);
LAB_ram_4202ed2a:
  thunk_FUN_ram_4202b7dc();
  FUN_ram_420365f8(iVar5);
  thunk_FUN_ram_4202b7f6();
  if (param_1[4] == '\x01') {
    FUN_ram_4202e2d0();
  }
  else {
    FUN_ram_4202e2ee(*(undefined2 *)(param_1 + 2));
  }
  return 0;
}

