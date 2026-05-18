
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40398d1e(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    FUN_ram_4039693c();
    cVar1 = *(char *)(param_1 + 0x14c);
    *(undefined1 *)(param_1 + 0x14c) = 2;
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
    iVar2 = _DAT_ram_3fcb8c90;
    if (cVar1 == '\x01') {
      if (*(int *)(param_1 + 0x28) != 0) goto LAB_ram_40398d28;
      uVar3 = *(uint *)(param_1 + 0x2c);
      if (_DAT_ram_3fcc4e64 == 0) {
        piVar5 = *(int **)(param_1 + 0x14);
        *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = *(undefined4 *)(param_1 + 8);
        iVar2 = param_1 + 4;
        if (piVar5[1] == iVar2) {
          piVar5[1] = *(int *)(param_1 + 0xc);
        }
        *(undefined4 *)(param_1 + 0x14) = 0;
        *piVar5 = *piVar5 + -1;
        _DAT_ram_3fcc4e84 = 1 << (uVar3 & 0x1f) | _DAT_ram_3fcc4e84;
        piVar5 = (int *)(&DAT_ram_3fcb8cc8 + uVar3 * 0x14);
        iVar4 = *(int *)(uVar3 * 0x14 + 0x3fcb8ccc);
        *(int *)(param_1 + 8) = iVar4;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 8);
        *(int *)(*(int *)(iVar4 + 8) + 4) = iVar2;
        *(int *)(iVar4 + 8) = iVar2;
        *(int **)(param_1 + 0x14) = piVar5;
      }
      else {
        piVar5 = (int *)&DAT_ram_3fcb8c8c;
        *(int *)(param_1 + 0x1c) = _DAT_ram_3fcb8c90;
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 8);
        *(int *)(*(int *)(iVar2 + 8) + 4) = param_1 + 0x18;
        *(int *)(iVar2 + 8) = param_1 + 0x18;
        *(undefined1 **)(param_1 + 0x28) = &DAT_ram_3fcb8c8c;
      }
      *piVar5 = *piVar5 + 1;
      if (*(uint *)(_DAT_ram_3fcc4e9c + 0x2c) < uVar3) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 1;
        }
        _DAT_ram_3fcc4e78 = 1;
      }
    }
    FUN_ram_40396956();
    return;
  }
LAB_ram_40398d28:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

