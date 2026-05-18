
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203012a(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_ram_4202ff82();
  uVar2 = 6;
  if (iVar3 == 0) {
    cVar1 = *param_1;
    uVar2 = 0;
    if (cVar1 == ' ') {
      FUN_ram_4039c11e(param_2,_DAT_ram_3fcb6ba4,0x10);
      (*(code *)&SUB_ram_40011ab4)(param_2 + 0xc,*(undefined4 *)(param_1 + 4));
    }
    else if (cVar1 == -0x80) {
      FUN_ram_4039c11e(param_2,param_1 + 1,0x10);
    }
    else if (cVar1 == '\x10') {
      (*(code *)&SUB_ram_40011aac)(param_2,*(undefined2 *)(param_1 + 2));
    }
    else {
      uVar2 = 3;
    }
  }
  return uVar2;
}

