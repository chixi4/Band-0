
undefined4
FUN_ram_403927a8(int param_1,uint param_2,uint param_3,uint param_4,int param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_ram_4039385e(param_2);
  if (uVar1 == 0) {
    uVar2 = param_2 + 0xc0360000 < 0x40000 ^ 1;
LAB_ram_4039282a:
    if (param_4 != 0) {
      uVar1 = 0;
      uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0xa0) + 8);
      uVar4 = 0x808;
      goto LAB_ram_40392844;
    }
    uVar1 = 0;
    uVar4 = 0x808;
  }
  else {
    uVar2 = uVar1;
    if (-1 < param_5 << 0x13) goto LAB_ram_4039282a;
    uVar2 = FUN_ram_40393816(param_2);
    uVar2 = (uVar2 ^ 1) & 0xff;
    if (param_4 != 0) {
      uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0xa0) + 0xc);
      uVar4 = 0x408;
      uVar1 = param_4;
      goto LAB_ram_40392844;
    }
    uVar4 = 0x408;
  }
  if (uVar1 == 0) {
    uVar5 = *(uint *)(*(int *)(param_1 + 0xa0) + 0x10);
    uVar6 = *(uint *)(*(int *)(param_1 + 0x9c) + 0x44);
  }
  else {
    uVar5 = *(uint *)(*(int *)(param_1 + 0xa0) + 0x14);
    uVar6 = *(uint *)(*(int *)(param_1 + 0x9c) + 0x48);
  }
  if (uVar6 < uVar5) {
    uVar6 = uVar5;
  }
  uVar6 = uVar6 & 0xffff;
LAB_ram_40392844:
  uVar5 = param_2;
  if (((param_2 | param_3) & uVar6 - 1) != 0 || uVar2 != 0) {
    if (param_5 << 0x14 < 0) {
      return 0x102;
    }
    param_3 = (param_3 - 1) + uVar6 & -uVar6;
    uVar5 = FUN_ram_403905ae(uVar6,param_3,uVar4);
    if (uVar5 == 0) {
      return 0x101;
    }
    if (param_4 != 0) {
      FUN_ram_40399daa(uVar5,param_2,param_3);
    }
  }
  *param_6 = uVar5;
  if (((uVar1 != 0) || (1 < *(uint *)(*(int *)(param_1 + 0x9c) + 0x44))) &&
     (iVar3 = FUN_ram_4039450a(uVar5,param_3,(param_4 == 0) * '\x02' + '\x06'), iVar3 != 0)) {
    return 0x102;
  }
  return 0;
}

