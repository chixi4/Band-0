
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039bab0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x1a);
  uVar4 = uVar1 - 1 & 0xff;
  if (uVar4 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x4039bae0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar4 * 4 + 0x3c0791a8))();
    return;
  }
  iVar3 = FUN_ram_4204af6a(uVar1);
  if (iVar3 == 1) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
    iVar3 = gp + 0x4d0 + uVar1 * 0x14;
    if (*(short *)(iVar3 + 0x10) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
      if (*(short *)(iVar3 + 0xe) != 0) {
        *(short *)(iVar3 + 0xe) = *(short *)(iVar3 + 0xe) + -1;
      }
      uVar2 = _DAT_ram_3fcdfdb4;
      *(int *)(uVar1 * 0xc + 0x3fcb55dc) = *(int *)(uVar1 * 0xc + 0x3fcb55dc) + 1;
      UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x58);
      goto LAB_ram_4039bb48;
    }
  }
  else if (iVar3 == 2) {
    (*(code *)&SUB_ram_40010488)(*(undefined4 *)(param_1 + 0x24),0,0x24);
    uVar2 = _DAT_ram_3fcdfdb4;
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x54);
    *(undefined2 *)(param_1 + 0x14) = 0;
    (*UNRECOVERED_JUMPTABLE)(uVar2);
    uVar2 = _DAT_ram_3fcdfdb4;
    piVar5 = (int *)(gp + 0x4d0 + uVar1 * 0x14);
    *(int *)(param_1 + 0x20) = *piVar5;
    *piVar5 = param_1;
    *(int *)(uVar1 * 0xc + 0x3fcb55dc) = *(int *)(uVar1 * 0xc + 0x3fcb55dc) + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x58);
LAB_ram_4039bb48:
                    /* WARNING: Could not recover jumptable at 0x4039bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2);
    return;
  }
  return;
}

