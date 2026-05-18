
uint FUN_ram_4205e786(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (uint)param_1 & 1;
  uVar4 = 0;
  if (uVar2 != 0) {
    iVar3 = 0;
    if (param_2 < 1) goto LAB_ram_4205e7b4;
    uVar1 = *param_1;
    param_2 = param_2 + -1;
    param_1 = (ushort *)((int)param_1 + 1);
    uVar4 = (uint)(byte)uVar1 << 8;
  }
  iVar3 = 0;
  for (; 1 < param_2; param_2 = param_2 + -2) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + (uint)uVar1;
  }
  if (param_2 == 1) {
    uVar4 = uVar4 | (byte)*param_1;
  }
LAB_ram_4205e7b4:
  uVar4 = (uVar4 + iVar3 & 0xffff) + (uVar4 + iVar3 >> 0x10);
  uVar4 = (uVar4 >> 0x10) + (uVar4 & 0xffff);
  if (uVar2 != 0) {
    uVar4 = uVar4 >> 8 & 0xff | (uVar4 & 0xff) << 8;
  }
  return uVar4 & 0xffff;
}

