
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42043b60(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  if (_DAT_ram_3fcb4f84 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x218);
    if (iVar1 == 0) {
      return 0x101;
    }
    iVar4 = *(int *)(gp + -0x2b8);
    *(undefined4 *)(iVar1 + 0x120) = 0;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    DAT_ram_3fcb51d4 = *(char *)(iVar4 + 0x9c);
    _DAT_ram_3fcb4f84 = iVar1;
    *(char *)(iVar1 + 0x13c) = DAT_ram_3fcb51d4;
    *(undefined2 *)(iVar1 + 0x20e) = *(undefined2 *)(iVar4 + 0x47a);
    uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x3b8);
    *(undefined4 *)(iVar1 + 0xe8) = uVar2;
    uVar3 = FUN_ram_420339f4();
    DAT_ram_3fcb51ce = *(undefined1 *)(*(int *)(gp + -0x2b8) + 0x9d);
    if (uVar3 == 1) {
      cVar5 = DAT_ram_3fcb51d4;
      if (_DAT_ram_3fcb4f88 == iVar1) {
        cVar5 = DAT_ram_3fcb51d2;
      }
    }
    else {
      cVar5 = DAT_ram_3fcb51d5;
      if (_DAT_ram_3fcb4f88 == iVar1) {
        cVar5 = DAT_ram_3fcb51d3;
      }
    }
    if (*(int *)(iVar1 + 0xe8) == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
      _DAT_ram_3fcb4f84 = 0;
      return 0x101;
    }
    FUN_ram_40399daa(*(int *)(iVar1 + 0xe8) + 4,0x3c072e98,6);
    FUN_ram_42044966(iVar1,uVar3 & 0xff,cVar5);
    **(int **)(iVar1 + 0xe8) = iVar1;
    if (cVar5 == '\x03') {
      FUN_ram_42035a5e(iVar1);
    }
    thunk_FUN_ram_4204a1c8(0x40389ada,0);
    thunk_FUN_ram_4204a194(0x42030988);
    FUN_ram_42043b18();
  }
  thunk_FUN_ram_4204a3b6(0,_DAT_ram_3fcb4f84);
  return 0;
}

