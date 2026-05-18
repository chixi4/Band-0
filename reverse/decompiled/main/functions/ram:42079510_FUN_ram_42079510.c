
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079510(char *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((byte)(*param_1 - 1U) < 0xe) {
    iVar3 = FUN_ram_420794ea(*param_1);
    if (iVar3 != 0) {
      uVar1 = *(undefined2 *)(iVar3 + 2);
      FUN_ram_42092a3e(param_1);
      iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 4))();
      if (iVar3 == 0) {
        (*(code *)&SUB_ram_40011d44)();
        FUN_ram_4039f0b8();
      }
      else {
        (*(code *)&SUB_ram_40011d44)();
        FUN_ram_4039f0b8();
      }
      FUN_ram_420ac4ac(uVar1,1,0,iVar3 == 0);
      FUN_ram_4039f0a8();
      (*(code *)&SUB_ram_40011d48)();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
      uVar2 = _DAT_ram_3fcdfdb4;
      iVar3 = _DAT_ram_3fcdfb1c;
      *(char *)(_DAT_ram_3fcdfb1c + 0x52) = *param_1;
      *(char *)(iVar3 + 0x53) = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x420795e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(uVar2);
      return;
    }
    puVar4 = &DAT_ram_3c0fe620;
  }
  else {
    puVar4 = &DAT_ram_3c0fe604;
  }
  FUN_ram_4207a038(1,8,1,puVar4);
  return;
}

