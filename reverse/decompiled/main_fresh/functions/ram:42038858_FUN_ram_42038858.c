
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42038858(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x5cc))(0);
  if (iVar2 == 0) {
    return 0x42;
  }
  uVar1 = *(undefined2 *)(iVar2 + 0xda);
  iVar3 = (*(code *)&SUB_ram_40011090)(param_1,param_2);
  if (iVar3 != 0) {
    return iVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x420388b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xbf4))(iVar2,uVar1);
  return iVar2;
}

