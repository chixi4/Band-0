
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203d7d4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                     undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  undefined4 uVar4;
  
  uVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))
                    ((uint)*(ushort *)(param_6 + -0x1a8) + (uint)*(ushort *)(param_6 + -0x1a6) +
                     (*(ushort *)(param_3 + 0x24) - 1));
  puVar2 = _DAT_ram_3fcdff70;
  iVar1 = _DAT_ram_3fcdfed0;
  *(undefined1 *)(_DAT_ram_3fcdff70 + 1) = uVar3;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x570);
  uVar4 = *(undefined4 *)(iVar1 + 0x3a8);
  puVar2[2] = 0;
  puVar2[3] = puVar2 + 2;
                    /* WARNING: Could not recover jumptable at 0x4203d828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar2,uVar4,0);
  return;
}

