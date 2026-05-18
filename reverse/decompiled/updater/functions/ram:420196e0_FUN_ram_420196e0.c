
undefined4 FUN_ram_420196e0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_420192d6(0xff,0xff,0);
  do {
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = FUN_ram_4201936e(iVar1);
    if (*(char *)(iVar2 + 0x2a) != '\0') {
      uVar3 = *(uint *)(iVar2 + 0xc);
      if (param_1 < uVar3) {
        if (uVar3 < param_2 + param_1) {
          return 0;
        }
      }
      else if (param_1 < uVar3 + *(int *)(iVar2 + 0x10)) {
        return 0;
      }
    }
    iVar1 = FUN_ram_42019248(iVar1);
  } while( true );
}

