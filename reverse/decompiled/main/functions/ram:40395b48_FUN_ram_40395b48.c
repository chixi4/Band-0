
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40395b48(undefined1 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  FUN_ram_40396966();
  if (DAT_ram_3fcc5248 != '\0') {
    uVar7 = FUN_ram_403919ae();
    uVar6 = (uint)uVar7 - _DAT_ram_3fcc5240;
    uVar2 = (uint)((uint)uVar7 < uVar6);
    uVar4 = (int)((ulonglong)uVar7 >> 0x20) - _DAT_ram_3fcc5244;
    if (((int)(uVar4 - uVar2) < 1) && ((uVar4 != uVar2 || (uVar6 < 200)))) {
      (*(code *)&SUB_ram_40010044)(200 - uVar6);
    }
    DAT_ram_3fcc5248 = '\0';
  }
  iVar3 = FUN_ram_4039270c();
  if (((*(int *)(gp + -0x758) == 999999) || (iVar3 < *(int *)(gp + -0x758))) ||
     (*(int *)(gp + -0x75c) < iVar3)) {
    iVar5 = 0;
    if ((iVar3 < _DAT_ram_3fcb8768) && (iVar5 = 1, iVar3 < _DAT_ram_3fcb877c)) {
      if (_DAT_ram_3fcb8778 < iVar3) {
        iVar5 = 4;
        if (_DAT_ram_3fcb878c < iVar3) {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = (iVar3 <= _DAT_ram_3fcb878c) + 3;
      }
    }
    *(char *)(gp + -0x760) = (char)iVar5;
    iVar5 = iVar5 * 0x14;
    *(undefined4 *)(gp + -0x758) = *(undefined4 *)(iVar5 + 0x3fcb8750);
    uVar1 = *(undefined1 *)(iVar5 + 0x3fcb874c);
    *(undefined4 *)(gp + -0x75c) = *(undefined4 *)(iVar5 + 0x3fcb8754);
    FUN_ram_40394b98(0x69,0,6,3,0,uVar1);
    (*(code *)&SUB_ram_40010044)(300);
    iVar3 = FUN_ram_4039270c();
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = 1;
    }
  }
  else if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  FUN_ram_40396994();
  return (int)(short)iVar3;
}

