
undefined4 FUN_ram_420b1608(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  ushort uVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[10] == 0)) {
    FUN_ram_420afe2c();
  }
  uVar2 = *(ushort *)(param_2 + 3);
  param_2[1] = 0;
  if ((uVar2 & 0x20) != 0) {
    return 0xffffffff;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 0x10) != 0) {
      if ((uVar2 & 8) != 0) {
        iVar1 = (*(code *)&SUB_ram_40010594)(param_1,param_2);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        param_2[2] = 0;
        param_2[6] = 0;
        uVar2 = *(ushort *)(param_2 + 3) & 0xfff7;
      }
      *(ushort *)(param_2 + 3) = uVar2 | 4;
      goto LAB_ram_420b167e;
    }
    *param_1 = 9;
  }
  else {
    if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
      if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
        FUN_ram_4039c0c2(param_1);
      }
      param_2[0xd] = 0;
      param_2[1] = param_2[0x10];
      if (param_2[0x10] != 0) {
        *param_2 = param_2[0xf];
        return 0;
      }
    }
LAB_ram_420b167e:
    if (param_2[4] == 0) {
      (*(code *)&SUB_ram_400105a0)(param_1,param_2);
    }
    uVar2 = *(ushort *)(param_2 + 3);
    if ((uVar2 & 3) != 0) {
      *(undefined2 *)(param_2 + 3) = 1;
      FUN_ram_420aff60(0x3fcb8148,0x420a15dc,&DAT_ram_3fcb813c);
      *(ushort *)(param_2 + 3) = uVar2;
      if ((uVar2 & 9) == 9) {
        FUN_ram_420afa86(param_1,param_2);
      }
    }
    *param_2 = param_2[4];
    iVar1 = (*(code *)param_2[9])(param_1,param_2[8],param_2[4],param_2[5]);
    param_2[1] = iVar1;
    if (0 < iVar1) {
      return 0;
    }
    uVar2 = *(ushort *)(param_2 + 3);
    if (iVar1 == 0) {
      uVar2 = uVar2 | 0x20;
      goto LAB_ram_420b1642;
    }
    param_2[1] = 0;
  }
  uVar2 = uVar2 | 0x40;
LAB_ram_420b1642:
  *(ushort *)(param_2 + 3) = uVar2;
  return 0xffffffff;
}

