
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203adc8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\0') {
    if (DAT_ram_3fcb5119 < 2) {
      return 0x3002;
    }
    FUN_ram_42031c04(1);
    uVar2 = FUN_ram_420399f0(3);
    FUN_ram_420439f6();
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x27c) != (code *)0x0) {
      (**(code **)(_DAT_ram_3fcdfb24 + 0x27c))();
    }
    (*(code *)&SUB_ram_40011d44)();
    DAT_ram_3fcb5119 = 1;
    if (DAT_ram_3fcb511b == '\x01') {
      FUN_ram_42049be4(2,1,0,2,0,DAT_ram_3fcb5104);
      return uVar2;
    }
    DAT_ram_3fcb5119 = 1;
    return uVar2;
  }
  if (cVar1 == '\x01') {
    iVar3 = FUN_ram_4203a53a();
    if (iVar3 != 0) {
      FUN_ram_42031c04(1);
      return 0;
    }
    return 0xffffffff;
  }
  if (cVar1 != '\x02') {
    FUN_ram_42033fd8(1,2,1,0x3c07d624);
    return 0xffffffff;
  }
  cVar1 = **(char **)(gp + -0x2b8);
  if (DAT_ram_3fcb511b == '\x01') {
    DAT_ram_3fcb511b = '\0';
    DAT_ram_3fcb5175 = DAT_ram_3fcb5175 & 0xfb;
    DAT_ram_3fcb5176 = DAT_ram_3fcb5176 & 0xfb;
  }
  uVar2 = 3;
  if ((cVar1 != '\0') && (uVar2 = 0, cVar1 != '\x01')) {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') goto LAB_ram_4203aea8;
      FUN_ram_4203a5ac(0);
    }
    uVar2 = 1;
  }
  FUN_ram_4203a5ac(uVar2);
LAB_ram_4203aea8:
  FUN_ram_4201bc4a();
  return 0;
}

