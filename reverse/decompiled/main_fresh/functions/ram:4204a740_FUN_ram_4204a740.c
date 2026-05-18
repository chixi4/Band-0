
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204a740(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char acStack_21 [9];
  
  puVar3 = (undefined4 *)FUN_ram_4039c08e(1,0x10);
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = 0x101;
  }
  else {
    if (param_1 == 0) {
      puVar3[2] = param_2;
    }
    else {
      puVar3[1] = param_2;
    }
    FUN_ram_40396966();
    puVar1 = _DAT_ram_3fcc5200;
    if (_DAT_ram_3fcc5200 == (undefined4 *)0x0) {
      uVar2 = 0x103;
    }
    else {
      if (param_1 == 0) {
        iVar4 = FUN_ram_403924bc(puVar3,acStack_21);
      }
      else {
        iVar4 = FUN_ram_403924ee(puVar3[1]);
      }
      if (iVar4 == 0) {
        *puVar3 = puVar1[1];
        puVar1[1] = puVar3;
        if (*(char *)((int)puVar1 + 0xd) != '\0') {
          FUN_ram_4204abf4(*puVar1);
          *(undefined1 *)((int)_DAT_ram_3fcc5200 + 0xd) = 0;
        }
        if (acStack_21[0] != '\0') {
          FUN_ram_40392522();
        }
        FUN_ram_40396994();
        *param_3 = (int)puVar3;
        return 0;
      }
      uVar2 = 0x102;
    }
    FUN_ram_40396994();
    thunk_FUN_ram_40390634(puVar3);
  }
  return uVar2;
}

