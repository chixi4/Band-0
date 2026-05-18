
void FUN_ram_40391938(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  FUN_ram_40396966();
  uVar4 = *(uint *)(gp + -0x600);
  uVar3 = *(uint *)(gp + -0x5fc);
  uVar1 = *(uint *)(gp + -0x5f4);
  if ((uVar3 < uVar1) || ((uVar1 == uVar3 && (uVar4 < *(uint *)(gp + -0x5f8))))) {
    iVar2 = 0;
    uVar3 = uVar1;
    uVar4 = *(uint *)(gp + -0x5f8);
  }
  else {
    iVar2 = 1;
  }
  if ((uVar4 == 0xffffffff) && (uVar3 == 0xffffffff)) {
    puVar5 = (undefined4 *)(gp + -0x600 + iVar2 * 8);
    *puVar5 = 0xffffffff;
    puVar5[1] = 0xffffffff;
  }
  else {
    FUN_ram_403919d6(0xffffffff,0xffffffff);
  }
  FUN_ram_40396994();
  return;
}

