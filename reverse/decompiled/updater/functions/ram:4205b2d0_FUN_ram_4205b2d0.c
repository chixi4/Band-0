
uint FUN_ram_4205b2d0(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,uint *param_5
                     )

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (*param_4 >> 0x10) + (*param_5 & 0xffff) + (*param_5 >> 0x10) + (*param_4 & 0xffff);
  uVar5 = (uVar5 & 0xffff) + (uVar5 >> 0x10);
  uVar5 = (uVar5 >> 0x10) + (uVar5 & 0xffff);
  bVar2 = false;
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    uVar1 = *(ushort *)((int)param_1 + 10);
    iVar3 = FUN_ram_4205b268(param_1[1],uVar1);
    uVar5 = (iVar3 + uVar5 >> 0x10) + (iVar3 + uVar5 & 0xffff);
    if ((uVar1 & 1) != 0) {
      bVar2 = (bool)(bVar2 ^ 1);
      uVar5 = uVar5 >> 8 & 0xff | (uVar5 & 0xff) << 8;
    }
  }
  if (bVar2) {
    uVar5 = uVar5 >> 8 & 0xff | (uVar5 & 0xff) << 8;
  }
  iVar3 = FUN_ram_4205073e(param_2);
  iVar4 = FUN_ram_4205073e(param_3);
  uVar5 = iVar4 + iVar3 + uVar5;
  uVar5 = (uVar5 >> 0x10) + (uVar5 & 0xffff);
  return ~((uVar5 >> 0x10) + (uVar5 & 0xffff)) & 0xffff;
}

