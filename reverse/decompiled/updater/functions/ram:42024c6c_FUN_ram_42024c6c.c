
undefined4 FUN_ram_42024c6c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_42024bac();
  uVar3 = iVar1 + param_2;
  if (((uint)*(ushort *)((int)param_1 + 6) << 5 < uVar3) &&
     (iVar1 = FUN_ram_4202479e(param_1,(uint)((uVar3 & 0x1f) != 0) + (uVar3 >> 5)), iVar1 != 0)) {
    uVar2 = 0xfffffff0;
  }
  else {
    FUN_ram_420264fe(*param_1,*(undefined2 *)((int)param_1 + 6),param_2);
    uVar2 = 0;
  }
  return uVar2;
}

