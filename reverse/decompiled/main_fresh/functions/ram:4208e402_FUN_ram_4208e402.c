
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208e402(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined1 param_6)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x58);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  if ((*(char *)(*(int *)(gp + -0xb4) + 0x415) != '\0') &&
     (iVar4 = *(int *)(param_2 + 100), iVar4 != 0)) {
    iVar5 = (uint)*(byte *)(iVar4 + 1) - (*(byte *)(iVar4 + 0xc) + 0xb);
    if (iVar5 == 1) {
LAB_ram_4208e462:
                    /* WARNING: Could not recover jumptable at 0x4208e47e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      return;
    }
    if (iVar5 == 2) {
      iVar4 = iVar4 + (uint)*(byte *)(iVar4 + 0xc);
      cVar1 = *(char *)(iVar4 + 0xd);
      *(char *)((int)puVar3 + 0x57) = cVar1;
      *(undefined1 *)((int)puVar3 + 0x56) = *(undefined1 *)(iVar4 + 0xe);
      if (*(int *)(param_2 + 0x3c) == 0) {
        if (cVar1 != 'Q') {
          _DAT_ram_3fcc43d0 = _DAT_ram_3fcc43d0 | 4;
        }
      }
      else if (cVar1 != 'Q') goto LAB_ram_4208e462;
    }
    else {
      *(undefined2 *)((int)puVar3 + 0x56) = 0;
    }
  }
  uVar2 = *(undefined1 *)(param_2 + 0x54);
  *(undefined1 *)((int)puVar3 + 0x55) = param_6;
  *(undefined1 *)(puVar3 + 0xd) = uVar2;
  FUN_ram_4208df38(puVar3,param_1,param_2,param_3,param_4,param_5);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  *puVar3 = 0;
  *_DAT_ram_3fcc412c = puVar3;
  _DAT_ram_3fcc43d4 = _DAT_ram_3fcc43d4 + 1;
  _DAT_ram_3fcc412c = puVar3;
                    /* WARNING: Could not recover jumptable at 0x4208e52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return;
}

