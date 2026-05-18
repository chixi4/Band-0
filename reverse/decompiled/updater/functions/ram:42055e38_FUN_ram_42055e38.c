
int FUN_ram_42055e38(int param_1,int param_2,uint *param_3,undefined4 param_4,int param_5,
                    int param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return -0x10;
  }
  if (param_2 == 0) {
    return -0x10;
  }
  if (param_3 == (uint *)0x0) {
    return -0x10;
  }
  if (param_6 == 0) {
    return -0x10;
  }
  if (param_5 == 0) {
    return -0x10;
  }
  if ((*(short *)(param_1 + 0x12) == 0) && (iVar5 = FUN_ram_42055d82(param_1,param_1,0), iVar5 != 0)
     ) {
    return iVar5;
  }
  if (*(ushort *)(param_2 + 8) < 0xfff8) {
    iVar2 = FUN_ram_42051cac(param_2,8);
    iVar5 = param_2;
    if (iVar2 != 0) {
      iVar5 = FUN_ram_42051d86(0x22,8,0x280);
      if (iVar5 == 0) goto LAB_ram_42055e78;
      if (*(short *)(param_2 + 8) != 0) {
        FUN_ram_42051faa(iVar5,param_2);
      }
    }
    puVar3 = *(undefined1 **)(iVar5 + 4);
    uVar4 = FUN_ram_4205073e(*(undefined2 *)(param_1 + 0x12));
    *puVar3 = (char)uVar4;
    puVar3[1] = (char)((ushort)uVar4 >> 8);
    uVar4 = FUN_ram_4205073e(param_4);
    puVar3[2] = (char)uVar4;
    puVar3[3] = (char)((ushort)uVar4 >> 8);
    puVar3[6] = 0;
    puVar3[7] = 0;
    if (((*(byte *)(param_1 + 0x10) & 8) != 0) && ((*param_3 & 0xf0) == 0xe0)) {
      *(byte *)(iVar5 + 0xd) = *(byte *)(iVar5 + 0xd) | 4;
    }
    uVar4 = FUN_ram_4205073e(*(undefined2 *)(iVar5 + 8));
    puVar3[4] = (char)uVar4;
    puVar3[5] = (char)((ushort)uVar4 >> 8);
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      iVar2 = thunk_FUN_ram_4205b2d0(iVar5,0x11,*(undefined2 *)(iVar5 + 8),param_6,param_3);
      if (iVar2 == 0) {
        iVar2 = 0xffff;
      }
      puVar3[6] = (char)iVar2;
      puVar3[7] = (char)((uint)iVar2 >> 8);
    }
    if ((*param_3 & 0xf0) == 0xe0) {
      uVar1 = *(undefined1 *)(param_1 + 0x1d);
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 0xb);
    }
    iVar2 = FUN_ram_42058ff4(iVar5,param_6,param_3,uVar1,*(undefined1 *)(param_1 + 10),0x11,param_5)
    ;
    if (iVar5 != param_2) {
      FUN_ram_42051d02(iVar5);
    }
  }
  else {
LAB_ram_42055e78:
    iVar2 = -1;
  }
  return iVar2;
}

