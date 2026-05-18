
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204c448(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  (*(code *)&SUB_ram_40010044)(0x32);
  uVar5 = FUN_ram_4204dcd6(param_1);
  if ((((*(byte *)(param_2 + 1) & 0x48) != 0) || (*(char *)(param_2 + 0x18) != '\x04')) ||
     (*(char *)(param_2 + 0x19) != '!')) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x1c) >> 0x14 & 0x7ff;
  if (0x3ff < uVar1) {
    uVar1 = 0x800 - uVar1;
  }
  uVar4 = *(uint *)(param_1 + 0xc) * 0x280;
  uVar3 = uVar4 - 0x3400;
  uVar2 = ((byte)param_1[0xb] & 0x7f) * 8 + uVar3;
  if (_DAT_ram_3fcb56e4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4204c444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcb56e4)
              (param_2 + 10,*(undefined1 *)(param_2 + 0x1a),uVar1 + uVar2,
               (uint)(uVar1 + uVar2 < uVar2) +
               (uint)(uVar3 < uVar4) +
               (int)((ulonglong)*(uint *)(param_1 + 0xc) * 0x280 >> 0x20) + -1 +
               (uint)(uVar2 < uVar3),(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)*param_1);
    return;
  }
  return;
}

