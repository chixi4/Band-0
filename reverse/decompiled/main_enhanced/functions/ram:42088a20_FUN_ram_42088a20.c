
int FUN_ram_42088a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                    int param_5)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = 1;
  if (0xfa < param_4) {
    uVar1 = (int)(param_4 + 0xf9) / 0xfa & 0xff;
  }
  iVar5 = 8;
  if ((param_5 != 0) && (*(int *)(param_5 + 0xa0) != 0)) {
    iVar5 = *(int *)(*(int *)(param_5 + 0xa0) + 4) + 8;
  }
  iVar5 = uVar1 * 7 + param_4 + iVar5;
  uVar3 = (*(code *)&SUB_ram_40011ff0)(iVar5 + 0x18,4);
  iVar4 = (*(code *)&SUB_ram_40012108)(0,uVar3,0);
  if (iVar4 != 0) {
    iVar6 = *(int *)(*(int *)(iVar4 + 4) + 4);
    *(short *)(iVar4 + 0x16) = (short)iVar5;
    iVar5 = iVar6 + 0x18;
    if ((param_5 != 0) && (*(int *)(param_5 + 0xa0) != 0)) {
      uVar1 = *(uint *)(param_5 + 0x98) + 1;
      *(uint *)(param_5 + 0x9c) =
           (uint)(uVar1 < *(uint *)(param_5 + 0x98)) + *(int *)(param_5 + 0x9c);
      *(uint *)(param_5 + 0x98) = uVar1;
      *(char *)(iVar6 + 0x18) = (char)uVar1;
      uVar3 = *(undefined4 *)(param_5 + 0x98);
      *(undefined1 *)(iVar6 + 0x1a) = 0;
      *(char *)(iVar6 + 0x19) = (char)((uint)uVar3 >> 8);
      *(byte *)(iVar6 + 0x1b) = *(char *)(param_5 + 0xb9) << 6 | 0x20;
      *(char *)(iVar6 + 0x1c) = (char)*(undefined2 *)(param_5 + 0x9a);
      *(undefined1 *)(iVar6 + 0x1d) = *(undefined1 *)(param_5 + 0x9b);
      *(char *)(iVar6 + 0x1e) = (char)*(undefined4 *)(param_5 + 0x9c);
      *(char *)(iVar6 + 0x1f) = (char)((uint)*(undefined4 *)(param_5 + 0x9c) >> 8);
      iVar5 = iVar5 + *(int *)(*(int *)(param_5 + 0xa0) + 4);
    }
    uVar3 = FUN_ram_420889bc(iVar5,0);
    sVar2 = FUN_ram_4207b332(uVar3,param_3,param_4);
    *(undefined2 *)(iVar4 + 0x14) = 0x18;
    *(short *)(iVar4 + 0x16) = sVar2 - ((short)*(undefined4 *)(*(int *)(iVar4 + 4) + 4) + 0x18);
  }
  return iVar4;
}

