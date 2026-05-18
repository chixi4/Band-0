
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420769e8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a3_00;
  undefined4 uVar2;
  byte *pbVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (_DAT_ram_3fcc2718 != (code *)0x0) {
    pbVar3 = *(byte **)(*(int *)(param_2 + 4) + 4);
    if (((*pbVar3 & 1) != 0) ||
       (iVar1 = FUN_ram_4039c0e0(pbVar3,&DAT_ram_3fcc41c8,6), uVar2 = extraout_a3, iVar1 != 0)) {
      FUN_ram_42075152(1,pbVar3,*(undefined2 *)(param_2 + 0x16));
      uVar2 = extraout_a3_00;
    }
                    /* WARNING: Could not recover jumptable at 0x42076a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcc2718)
              (*(undefined4 *)(*(int *)(param_2 + 4) + 4),*(undefined2 *)(param_2 + 0x16),param_2,
               uVar2,*(int *)(param_2 + 4),_DAT_ram_3fcc2718);
    return;
  }
  (*(code *)&SUB_ram_40011fa0)(param_2);
  return;
}

