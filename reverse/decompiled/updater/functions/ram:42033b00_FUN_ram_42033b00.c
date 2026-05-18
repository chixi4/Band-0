
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033b00(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((byte)(*param_1 - 1U) < 0xe) {
    iVar2 = FUN_ram_42033ada(*param_1);
    if (iVar2 != 0) {
      uVar1 = *(undefined2 *)(iVar2 + 2);
      FUN_ram_4204a02a(param_1);
      iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 4))();
      if (iVar2 == 0) {
        (*(code *)&SUB_ram_40011d44)();
        FUN_ram_4039cce4();
      }
      else {
        (*(code *)&SUB_ram_40011d44)();
        FUN_ram_4039cce4();
      }
      FUN_ram_42073e48(uVar1,1,0,iVar2 == 0);
      FUN_ram_4039ccd4();
      (*(code *)&SUB_ram_40011d48)();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
      uVar3 = _DAT_ram_3fcdfdb4;
      iVar2 = _DAT_ram_3fcdfb1c;
      *(char *)(_DAT_ram_3fcdfb1c + 0x52) = *param_1;
      *(char *)(iVar2 + 0x53) = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x42033bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(uVar3);
      return;
    }
    uVar3 = 0x3c07d014;
  }
  else {
    uVar3 = 0x3c07cff8;
  }
  FUN_ram_42033fd8(1,8,1,uVar3);
  return;
}

