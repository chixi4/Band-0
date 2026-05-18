
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204aff2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 < 0xb) {
    piVar3 = (int *)(gp + 0x4d0 + param_1 * 0x14);
    *(undefined2 *)((int)piVar3 + 0xe) = 0;
    while( true ) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
      uVar1 = _DAT_ram_3fcdfdb4;
      iVar4 = *piVar3;
      if (iVar4 == 0) break;
      *piVar3 = *(int *)(iVar4 + 0x20);
      iVar2 = _DAT_ram_3fcdfdd8;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      (**(code **)(iVar2 + 0x58))(uVar1);
      if (param_1 == 5) {
        (*(code *)&SUB_ram_40010488)(*(undefined4 *)(iVar4 + 0x24),0,0x24);
        (*(code *)&SUB_ram_40010488)(iVar4,0,0x28);
      }
      else {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar4);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x4204b04e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
    return;
  }
  return;
}

