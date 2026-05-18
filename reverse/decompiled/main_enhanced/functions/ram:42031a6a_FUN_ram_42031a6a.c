
undefined4
FUN_ram_42031a6a(byte *param_1,undefined4 param_2,uint param_3,byte param_4,undefined4 param_5,
                int param_6)

{
  undefined4 *unaff_s0;
  short unaff_s1;
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *unaff_s2;
  
  if (param_6 != 0) {
    param_4 = param_4 | 0x20;
  }
  if ((param_3 & 0x40) != 0) {
    param_4 = param_4 | 0x40;
  }
  if ((param_3 & 0x180) != 0) {
    param_4 = param_4 | 0x80;
  }
  *param_1 = param_4;
  (*(code *)&SUB_ram_40011aac)(param_1 + 1,unaff_s1 + 1);
  uVar1 = *unaff_s2;
  uVar2 = FUN_ram_420301b4(*unaff_s0);
  iVar3 = (*(code *)&SUB_ram_40011a00)(uVar1,uVar2);
  if (iVar3 == 0) {
    uVar1 = 0x11;
  }
  else {
    FUN_ram_4203012a(*unaff_s0,iVar3);
    uVar1 = 0;
  }
  return uVar1;
}

