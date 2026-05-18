
int FUN_ram_42057e98(int param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar2 = FUN_ram_42059006(*param_2,param_1);
  if (((iVar2 != 0) || ((*param_2 & 0xf0) == 0xe0)) || (*param_2 == 0)) {
    return -0x10;
  }
  iVar2 = FUN_ram_42057996(param_2,1,param_1);
  if (iVar2 < 0) {
    return (int)(char)iVar2;
  }
  iVar5 = iVar2 * 0x18;
  if ((&DAT_ram_3fcb5d38)[iVar5] == '\0') {
    bVar1 = true;
    (&DAT_ram_3fcb5d38)[iVar5] = 1;
    *(int *)(&DAT_ram_3fcb5d2c + iVar5) = param_1;
LAB_ram_42057f1a:
    iVar5 = FUN_ram_42057d4e(param_1,param_2);
    if (((iVar5 == 0) && ((&DAT_ram_3fcb5d38)[iVar2 * 0x18] == '\x01')) && (!bVar1)) {
      *(undefined2 *)(&DAT_ram_3fcb5d36 + iVar2 * 0x18) = 0;
    }
    if (param_3 == (int *)0x0) {
      return iVar5;
    }
  }
  else {
    iVar5 = -1;
    if (param_3 == (int *)0x0) {
      bVar1 = false;
      goto LAB_ram_42057f1a;
    }
  }
  if (1 < (byte)(&DAT_ram_3fcb5d38)[iVar2 * 0x18]) {
    DAT_ram_3fcb6814 = (char)iVar2;
    iVar2 = FUN_ram_42059422(param_1,param_3,param_1 + 0x32,iVar2 * 0x18 + 0x3fcb5d30,0x800);
    return iVar2;
  }
  piVar7 = param_3;
  if ((&DAT_ram_3fcb5d38)[iVar2 * 0x18] != 1) {
    return iVar5;
  }
  do {
    if ((*(byte *)(piVar7 + 3) & 0x40) != 0) {
      param_3 = (int *)FUN_ram_42052212(0xe,0x280,param_3);
      if (param_3 != (int *)0x0) goto LAB_ram_42057fea;
      goto LAB_ram_42057fca;
    }
    piVar7 = (int *)*piVar7;
  } while (piVar7 != (int *)0x0);
  FUN_ram_42051f64(param_3);
LAB_ram_42057fea:
  puVar3 = (undefined4 *)FUN_ram_42051500(9);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_ram_42051d02(param_3);
LAB_ram_42057fca:
    iVar2 = -1;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = param_3;
    uVar4 = 1;
    puVar6 = *(undefined4 **)(&DAT_ram_3fcb5d24 + iVar2 * 0x18);
    if (puVar6 == (undefined4 *)0x0) {
      *(undefined4 **)(&DAT_ram_3fcb5d24 + iVar2 * 0x18) = puVar3;
    }
    else {
      while ((undefined4 *)*puVar6 != (undefined4 *)0x0) {
        uVar4 = uVar4 + 1;
        puVar6 = (undefined4 *)*puVar6;
      }
      *puVar6 = puVar3;
      if (2 < uVar4) {
        *puVar6 = 0;
        FUN_ram_42051d02(param_3);
        FUN_ram_4205151c(9,puVar3);
        goto LAB_ram_42057fca;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

