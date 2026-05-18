
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203d1e8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  
  if (param_1 == 0) {
    cVar1 = *(char *)(*(int *)(gp + -0x2b8) + 0x9c);
  }
  else {
    cVar1 = *(char *)(*(int *)(gp + -0x2b8) + 0x3fa);
  }
  if (((_DAT_ram_3fcb51d8 == (undefined2 *)0x0) || (puVar3 = _DAT_ram_3fcb51d8, param_1 != 0)) &&
     ((_DAT_ram_3fcb51dc == (undefined2 *)0x0 || (puVar3 = _DAT_ram_3fcb51dc, param_1 != 1)))) {
    puVar3 = (undefined2 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0xd);
    if (puVar3 == (undefined2 *)0x0) {
      return 0x101;
    }
    FUN_ram_4203528a(puVar3 + 1,7,1,9);
    *(undefined1 *)(puVar3 + 5) = 2;
    *(undefined1 *)((int)puVar3 + 0xb) = 0x20;
    *(undefined1 *)(puVar3 + 6) = 0x21;
    iVar2 = _DAT_ram_3fcdfdd8;
    *(bool *)((int)puVar3 + 9) = cVar1 == '\x04';
    (**(code **)(iVar2 + 0x54))(_DAT_ram_3fcdfdb4);
    if (param_1 == 0) {
      _DAT_ram_3fcb51d8 = puVar3;
      *puVar3 = 0xb;
    }
    else if (param_1 == 1) {
      _DAT_ram_3fcb51dc = puVar3;
      *puVar3 = 0xb;
      DAT_ram_3fcb5144 = 1;
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  }
  else {
    *(bool *)((int)puVar3 + 9) = cVar1 == '\x04';
  }
  return 0;
}

