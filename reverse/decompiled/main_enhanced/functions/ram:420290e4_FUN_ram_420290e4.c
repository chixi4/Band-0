
undefined4 FUN_ram_420290e4(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bStack_39;
  undefined4 uStack_38;
  undefined1 uStack_34;
  byte bStack_24;
  
  (*(code *)&SUB_ram_40010488)(&uStack_38,0,0x18);
  thunk_FUN_ram_4202b7dc();
  iVar3 = FUN_ram_420279b4(param_1,0xff,0xffffffff,0);
  if (iVar3 == 0) {
    thunk_FUN_ram_4202b7f6();
    return 5;
  }
  if ((*(byte *)(iVar3 + 8) & 2) != 0) {
    thunk_FUN_ram_4202b7f6();
    return 2;
  }
  iVar4 = FUN_ram_42027010(iVar3,&bStack_39);
  bVar1 = *param_2;
  if (((iVar4 == 0) && (bStack_39 != bVar1)) ||
     (uVar5 = FUN_ram_42028026(bVar1), uVar5 != *(byte *)(iVar3 + 0xd))) {
LAB_ram_42029182:
    thunk_FUN_ram_4202b7f6();
    return 3;
  }
  if (bVar1 == 4) {
    if (param_2[4] == 0) {
      uVar2 = 0xc;
      goto LAB_ram_420291ee;
    }
    bVar1 = *(byte *)(iVar3 + 8);
    *(byte *)(iVar3 + 8) = bVar1 | 2;
  }
  else {
    if (4 < bVar1) {
      if (bVar1 != 5) goto LAB_ram_42029182;
      iVar4 = FUN_ram_420314a0(iVar3,*(int *)(param_2 + 4) != 0,*(int *)(param_2 + 8) != 0);
      uVar2 = 2;
      if (iVar4 != 0) {
        *(byte *)(iVar3 + 8) = *(byte *)(iVar3 + 8) | 2;
        *(undefined4 *)(iVar3 + 0x184) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(iVar3 + 0x188) = *(undefined4 *)(param_2 + 8);
        FUN_ram_42030bd2(iVar3,&uStack_38);
        uVar2 = uStack_34;
      }
      goto LAB_ram_420291ee;
    }
    if (bVar1 == 1) {
      bVar1 = *(byte *)(iVar3 + 8);
      *(byte *)(iVar3 + 8) = bVar1 | 2;
      FUN_ram_4039c11e(iVar3 + 0x1e,param_2 + 4,0x10);
    }
    else {
      if ((1 < (byte)(bVar1 - 2)) || (999999 < *(uint *)(param_2 + 4))) goto LAB_ram_42029182;
      bVar1 = *(byte *)(iVar3 + 8);
      *(byte *)(iVar3 + 8) = bVar1 | 2;
      (*(code *)&SUB_ram_40010488)(iVar3 + 0x1e,0,0x10);
      uVar6 = *(undefined4 *)(param_2 + 4);
      *(undefined2 *)(iVar3 + 0x1e) = *(undefined2 *)(param_2 + 4);
      *(char *)(iVar3 + 0x20) = (char)((uint)uVar6 >> 0x10);
      *(char *)(iVar3 + 0x21) = (char)((uint)uVar6 >> 0x18);
    }
  }
  uVar2 = uStack_34;
  if ((bVar1 & 5) != 0) {
    bStack_24 = bStack_24 | 1;
  }
LAB_ram_420291ee:
  uStack_34 = uVar2;
  thunk_FUN_ram_4202b7f6();
  FUN_ram_42028608(param_1,&uStack_38,1);
  return uStack_38;
}

