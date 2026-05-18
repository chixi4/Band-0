
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420348e2(int *param_1,short param_2,short param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  
  sVar4 = _DAT_ram_3fcb51a0;
  if ((*(int *)(*param_1 + 0x120) != 0) && (sVar4 = 0, *(int *)(*param_1 + 0x120) == 1)) {
    sVar4 = _DAT_ram_3fcb51a2;
  }
  uVar3 = param_2 << 10 | param_3 << 0xb;
  uVar2 = param_1[3] & 0xfff7ffff;
  param_1[3] = uVar2;
  if (sVar4 == 0x400) {
    if (uVar3 == 0) {
      param_1[3] = uVar2 | 0x80000;
      uVar1 = 0;
      goto LAB_ram_42034930;
    }
  }
  else if (sVar4 != 0xc00) {
    uVar1 = 0;
    if ((sVar4 == 0) && ((param_2 << 10 & 0xf800U) == 0 && (ushort)(param_3 << 0xb) == 0)) {
      param_1[3] = uVar2 | 0x80000;
    }
    goto LAB_ram_42034930;
  }
  uVar1 = 0;
  if ((uVar3 & 0xf7ff) == 0x400) {
    param_1[3] = uVar2 | 0x80000;
    uVar1 = 1;
  }
LAB_ram_42034930:
  *(undefined1 *)((int)param_1 + 0x2f5) = uVar1;
  return;
}

