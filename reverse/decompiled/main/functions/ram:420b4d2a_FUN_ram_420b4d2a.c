
undefined4 FUN_ram_420b4d2a(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (2 < param_1) {
    return 0x102;
  }
  if (2 < param_2) {
    return 0x102;
  }
  FUN_ram_4039691e();
  FUN_ram_40396966();
  puVar3 = (uint *)(gp + -0x6f0 + param_1 * 8);
  if (*puVar3 == 2) {
    *(ushort *)(puVar3 + 1) = (ushort)(param_2 == 1);
LAB_ram_420b4d7a:
    *puVar3 = param_2;
  }
  else {
    if (param_2 == 2) {
      *(undefined2 *)(puVar3 + 1) = 0;
      goto LAB_ram_420b4d7a;
    }
    uVar1 = (ushort)puVar3[1];
    iVar2 = (int)(short)uVar1;
    if (param_2 == 1) {
      iVar4 = (int)((uVar1 + 1) * 0x10000) >> 0x10;
    }
    else {
      iVar2 = (int)((uVar1 - 1) * 0x10000) >> 0x10;
      iVar4 = iVar2;
    }
    puVar3 = (uint *)(gp + -0x6f0 + param_1 * 8);
    *(short *)(puVar3 + 1) = (short)iVar4;
    if (iVar2 == 0) {
      *puVar3 = param_2;
    }
    else if (iVar2 < 0) {
      *(undefined2 *)(puVar3 + 1) = 0;
      uVar5 = 0x103;
      goto LAB_ram_420b4d7e;
    }
  }
  uVar5 = 0;
LAB_ram_420b4d7e:
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return uVar5;
}

