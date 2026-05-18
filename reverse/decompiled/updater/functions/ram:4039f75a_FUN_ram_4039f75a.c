
void FUN_ram_4039f75a(undefined4 param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 5;
  do {
    uVar2 = FUN_ram_42010e36(0x804);
    if (uVar2 <= param_2) {
      param_2 = FUN_ram_42010e36(0x804);
    }
    param_2 = param_2 + 3 & 0xfffffffc;
    iVar3 = FUN_ram_40390448(param_2,0x804);
    uVar2 = param_2;
    if (iVar3 != 0) break;
    iVar1 = iVar1 + -1;
    uVar2 = 0;
  } while (iVar1 != 0);
  *param_3 = uVar2;
  return;
}

