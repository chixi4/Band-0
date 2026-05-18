
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42096f18(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *extraout_a5;
  int iVar2;
  int iVar3;
  int extraout_a7;
  undefined8 uVar4;
  
  puVar1 = &DAT_ram_60040000;
  iVar3 = *(int *)(param_1 + 4);
  _DAT_ram_60040054 = _DAT_ram_60040054 & 0xff900000 | 0x40400f;
  _DAT_ram_60040000 = _DAT_ram_60040000 & 0xffff807f | 0xc0;
  iVar2 = param_2 * 8 + param_1;
  _DAT_ram_60040020 = _DAT_ram_60040020 & 0xfe7fffff | (*(uint *)(iVar2 + 0xc) & 3) << 0x17;
  iVar2 = *(int *)(iVar2 + 0x10);
  uVar4 = CONCAT44(param_2,param_1);
  if (iVar2 == 0xc) goto LAB_ram_42096fc4;
  uVar4 = CONCAT44(param_2,param_1);
  if (iVar2 == 0) goto LAB_ram_42096fc4;
  do {
    uVar4 = FUN_ram_4039bf1e();
    puVar1 = extraout_a5;
    iVar3 = extraout_a7;
LAB_ram_42096fc4:
  } while (iVar3 != 0);
  *(uint *)(puVar1 + 0x20) =
       *(uint *)(puVar1 + 0x20) & 0xe1ffffff | ((uint)((ulonglong)uVar4 >> 0x20) & 0xf) << 0x19;
  FUN_ram_42096cc0(0,*(undefined4 *)((int)uVar4 + 8));
  return;
}

