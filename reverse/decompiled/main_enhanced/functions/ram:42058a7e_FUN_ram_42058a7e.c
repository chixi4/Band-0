
int FUN_ram_42058a7e(int param_1,int param_2,uint *param_3,undefined4 param_4,int param_5,
                    int param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  int iVar5;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (uint *)0x0)) ||
     ((param_6 == 0 || (param_5 == 0)))) {
    return -0x10;
  }
  if ((*(short *)(param_1 + 0x12) == 0) && (iVar5 = FUN_ram_420589c8(param_1,param_1,0), iVar5 != 0)
     ) {
    return iVar5;
  }
  if (*(ushort *)(param_2 + 8) < 0xfff8) {
    iVar2 = FUN_ram_42053a64(param_2,8);
    iVar5 = param_2;
    if (iVar2 != 0) {
      iVar5 = FUN_ram_42053b52(0x22,8,0x280);
      if (iVar5 == 0) goto LAB_ram_42058ac4;
      if (*(short *)(param_2 + 8) != 0) {
        FUN_ram_42053df8(iVar5,param_2);
      }
    }
    if (*(ushort *)(iVar5 + 10) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    puVar3 = *(undefined1 **)(iVar5 + 4);
    uVar4 = FUN_ram_420523aa(*(undefined2 *)(param_1 + 0x12));
    *puVar3 = (char)uVar4;
    puVar3[1] = (char)((ushort)uVar4 >> 8);
    uVar4 = FUN_ram_420523aa(param_4);
    puVar3[2] = (char)uVar4;
    puVar3[3] = (char)((ushort)uVar4 >> 8);
    puVar3[6] = 0;
    puVar3[7] = 0;
    if (((*(byte *)(param_1 + 0x10) & 8) != 0) && ((*param_3 & 0xf0) == 0xe0)) {
      *(byte *)(iVar5 + 0xd) = *(byte *)(iVar5 + 0xd) | 4;
    }
    uVar4 = FUN_ram_420523aa(*(undefined2 *)(iVar5 + 8));
    puVar3[4] = (char)uVar4;
    puVar3[5] = (char)((ushort)uVar4 >> 8);
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      iVar2 = thunk_FUN_ram_4205e7ee(iVar5,0x11,*(undefined2 *)(iVar5 + 8),param_6,param_3);
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
    iVar2 = FUN_ram_4205be32(iVar5,param_6,param_3,uVar1,*(undefined1 *)(param_1 + 10),0x11,param_5)
    ;
    if (iVar5 != param_2) {
      FUN_ram_42053ac4(iVar5);
    }
  }
  else {
LAB_ram_42058ac4:
    iVar2 = -1;
  }
  return iVar2;
}

