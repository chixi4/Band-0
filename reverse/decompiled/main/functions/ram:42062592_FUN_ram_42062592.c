
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42062592(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uStack_34;
  
  if (param_2 == 0) {
    piVar5 = &DAT_ram_3c0f7620;
    uVar1 = param_3 << (param_4 & 0x1f);
    uStack_34 = 0;
    do {
      param_2 = *piVar5;
      if ((param_2 == 9) && (_DAT_ram_3fcc53a0 == 0)) {
        iVar2 = FUN_ram_4204b67e();
        if (iVar2 != 0) {
          _DAT_ram_3fcc53a0 = FUN_ram_4204b6de();
          goto LAB_ram_42062618;
        }
      }
      else {
LAB_ram_42062618:
        FUN_ram_420b3d0c(param_2,0,&uStack_34);
        uVar3 = uStack_34 * 0x100 + (uVar1 >> 1);
        iVar2 = (*(code *)&SUB_ram_400109f0)
                          (uVar3,(uStack_34 >> 0x18) + (uint)(uVar3 < uStack_34 * 0x100),uVar1,0);
        if (iVar2 - 0x100U < 0x3ff00) goto LAB_ram_4206264a;
      }
      piVar5 = piVar5 + 1;
      if (piVar5 == (int *)&DAT_ram_3c0f762c) {
        return -1;
      }
    } while( true );
  }
  if (param_2 == 9) {
    if (_DAT_ram_3fcc53a0 == 0) {
      iVar2 = FUN_ram_4204b67e();
      if (iVar2 == 0) {
        return -1;
      }
      _DAT_ram_3fcc53a0 = FUN_ram_4204b6de();
    }
    uVar3 = param_3 << (param_4 & 0x1f);
    uVar1 = (uVar3 >> 1) + _DAT_ram_3fcc53a0 * 0x100;
    iVar2 = (*(code *)&SUB_ram_400109f0)
                      (uVar1,(_DAT_ram_3fcc53a0 >> 0x18) + (uint)(uVar1 < _DAT_ram_3fcc53a0 * 0x100)
                       ,uVar3,0);
    if (0x3feff < iVar2 - 0x100U) {
      return -1;
    }
  }
  else {
    uStack_34 = 0;
    FUN_ram_420b3d0c(param_2,0,&uStack_34);
    uVar3 = param_3 << (param_4 & 0x1f);
    uVar1 = (uVar3 >> 1) + uStack_34 * 0x100;
    iVar2 = (*(code *)&SUB_ram_400109f0)
                      (uVar1,(uStack_34 >> 0x18) + (uint)(uVar1 < uStack_34 * 0x100),uVar3,0);
    if (0x3feff < iVar2 - 0x100U) {
      return -1;
    }
LAB_ram_4206264a:
    if (param_2 == -1) goto LAB_ram_42062650;
  }
  FUN_ram_40396966();
  piVar5 = _DAT_ram_3fcc53a8;
  if (_DAT_ram_3fcc53a8[2] == -1) {
LAB_ram_4206279e:
    *(undefined1 *)((int)_DAT_ram_3fcc53a8 + param_1 + 0x10) = 1;
    piVar5[2] = param_2;
    iVar4 = FUN_ram_403948d2(param_2);
    piVar5 = _DAT_ram_3fcc53a8;
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar1 = 1;
    if (((param_2 != 6) && (uVar1 = 2, param_2 != 9)) && (uVar1 = 3, param_2 != 0xb)) {
      uVar1 = 0;
    }
    *(uint *)(*_DAT_ram_3fcc53a8 + 0xd0) = *(uint *)(*_DAT_ram_3fcc53a8 + 0xd0) & 0xfffffffc | uVar1
    ;
  }
  else {
    iVar4 = 0;
    if (_DAT_ram_3fcc53a8[2] != param_2) {
      do {
        if ((param_1 != iVar4) && (*(char *)((int)_DAT_ram_3fcc53a8 + iVar4 + 0x10) != '\0')) {
          FUN_ram_40396994();
          return -1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
      goto LAB_ram_4206279e;
    }
    *(undefined1 *)((int)_DAT_ram_3fcc53a8 + param_1 + 0x10) = 1;
  }
  if (((*(char *)((int)piVar5 + param_1 + 0x1e) != '\0') && (*(char *)((int)piVar5 + 0x22) == '\0'))
     && (iVar4 = FUN_ram_420623b2(1), iVar4 != 0)) {
    *(undefined1 *)((int)_DAT_ram_3fcc53a8 + param_1 + 0x1e) = 0;
  }
  FUN_ram_40396994();
  if (_DAT_ram_3fcc53a8 != (int *)0x0) {
    FUN_ram_42062442(param_1,iVar2,param_4);
  }
  FUN_ram_40396966();
  if ((*(char *)((int)_DAT_ram_3fcc53a8 + param_1 + 0x1e) == '\0') ||
     (*(char *)((int)_DAT_ram_3fcc53a8 + 0x22) != '\0')) {
    FUN_ram_40396994();
    return 0;
  }
LAB_ram_42062650:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

