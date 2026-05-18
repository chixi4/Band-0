
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a439e(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_ram_3fcdff64;
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  uVar2 = *(ushort *)(iVar1 + 0x40) + param_2;
  *(short *)(iVar1 + 0x40) = (short)(uVar2 * 0x10000 >> 0x10);
  if ((uint)*(ushort *)(iVar1 + 0x3e) < (uVar2 & 0xffff)) {
    *(ushort *)(iVar1 + 0x40) = *(ushort *)(iVar1 + 0x3e);
  }
  if (*(ushort *)(param_1 + 0x48) < param_2) {
    *(undefined2 *)(param_1 + 0x48) = 0;
  }
  else {
    *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) - (short)param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x403a43fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))();
  return;
}

