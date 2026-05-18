
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202fdd4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((_DAT_ram_3fcb6ba0 == 0) &&
     (_DAT_ram_3fcb6ba0 = FUN_ram_403a5e02(1,0x16c), _DAT_ram_3fcb6ba0 == 0)) {
LAB_ram_4202fdfc:
    iVar1 = 6;
  }
  else {
    iVar3 = _DAT_ram_3fcb6ba0;
    if (*(int *)(_DAT_ram_3fcb6ba0 + 0x134) == 0) {
      uVar2 = FUN_ram_403a5e02(1,0x18);
      *(undefined4 *)(iVar3 + 0x134) = uVar2;
      if (*(int *)(_DAT_ram_3fcb6ba0 + 0x134) == 0) goto LAB_ram_4202fdfc;
    }
    iVar3 = _DAT_ram_3fcb6ba0;
    (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcb6ba0 + 0x110,0,0x20);
    iVar1 = (**(code **)(_DAT_ram_3fcb6a44 + 0x3c))(iVar3 + 0x158);
    iVar3 = _DAT_ram_3fcb6ba0;
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x134);
      *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x154) = 0;
      *(undefined4 *)(iVar3 + 0x130) = 0;
      iVar1 = (*(code *)&SUB_ram_40011a60)(iVar3 + 0x138,1,0x18,uVar2,&DAT_ram_3c0c26ec);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  if (_DAT_ram_3fcb6ba0 != 0) {
    iVar3 = _DAT_ram_3fcb6ba0;
    if (*(int *)(_DAT_ram_3fcb6ba0 + 0x134) != 0) {
      FUN_ram_403a5e1e();
      iVar3 = _DAT_ram_3fcb6ba0;
      *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x134) = 0;
    }
    FUN_ram_403a5e1e(iVar3);
    _DAT_ram_3fcb6ba0 = 0;
  }
  return iVar1;
}

