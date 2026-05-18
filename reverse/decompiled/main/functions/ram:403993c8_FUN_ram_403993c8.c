
void FUN_ram_403993c8(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                     uint param_6,uint param_7)

{
  int iVar1;
  uint extraout_a3;
  uint extraout_a4;
  uint extraout_a5;
  uint extraout_a6;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_3 != 0) {
    uVar2 = FUN_ram_4039bf1e();
    param_4 = extraout_a3;
    param_5 = extraout_a4;
    param_6 = extraout_a5;
    param_7 = extraout_a6;
  }
  iVar1 = *(int *)uVar2 + (int)((ulonglong)uVar2 >> 0x20) * 0x14 + ((int *)uVar2)[1] * 0x78;
  *(uint *)(iVar1 + 0xc) =
       (param_4 & 1) << 0x1e | *(uint *)(iVar1 + 0xc) & 0x80000000 | (param_7 & 0x3ff) << 0x14 |
       (param_5 & 0x3ff) << 10 | param_6 & 0x3ff;
  return;
}

