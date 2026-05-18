
undefined4 FUN_ram_42066116(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = 0x102;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    iVar2 = param_1[0xc4];
    uVar4 = *(uint *)(iVar2 + 0x2c);
    uVar1 = 0xb005;
    if (uVar4 < *(ushort *)(*param_1 + 0x20)) {
      piVar3 = (int *)(*(int *)(iVar2 + 0x30) + uVar4 * 8);
      *piVar3 = param_2;
      piVar3[1] = param_3;
      *(uint *)(iVar2 + 0x2c) = uVar4 + 1;
      return 0;
    }
  }
  return uVar1;
}

