
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40398a10(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x2c) < *(uint *)(_DAT_ram_3fcc4e9c + 0x2c)) {
      if (-1 < *(int *)(param_1 + 0x18)) {
        *(int *)(param_1 + 0x18) = 0x19 - *(int *)(_DAT_ram_3fcc4e9c + 0x2c);
      }
      if (*(undefined1 **)(param_1 + 0x14) == &DAT_ram_3fcb8cc8 + *(uint *)(param_1 + 0x2c) * 0x14)
      {
        iVar5 = param_1 + 4;
        iVar2 = FUN_ram_40396d62(iVar5);
        if (iVar2 == 0) {
          _DAT_ram_3fcc4e84 = ~(1 << (*(uint *)(param_1 + 0x2c) & 0x1f)) & _DAT_ram_3fcc4e84;
        }
        uVar3 = *(uint *)(_DAT_ram_3fcc4e9c + 0x2c);
        _DAT_ram_3fcc4e84 = 1 << (uVar3 & 0x1f) | _DAT_ram_3fcc4e84;
        *(uint *)(param_1 + 0x2c) = uVar3;
        piVar4 = (int *)(&DAT_ram_3fcb8cc8 + uVar3 * 0x14);
        iVar2 = *(int *)(uVar3 * 0x14 + 0x3fcb8ccc);
        *(int *)(param_1 + 8) = iVar2;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 8);
        *(int *)(*(int *)(iVar2 + 8) + 4) = iVar5;
        *(int *)(iVar2 + 8) = iVar5;
        *(int **)(param_1 + 0x14) = piVar4;
        *piVar4 = *piVar4 + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(_DAT_ram_3fcc4e9c + 0x2c);
      }
      bVar1 = true;
    }
    else {
      bVar1 = *(uint *)(param_1 + 0x48) < *(uint *)(_DAT_ram_3fcc4e9c + 0x2c);
    }
    return bVar1;
  }
  return false;
}

