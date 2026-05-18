
void FUN_ram_4039119c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  FUN_ram_40394d60();
  uVar4 = *(uint *)(gp + -0x6c0);
  uVar3 = *(uint *)(gp + -0x6bc);
  uVar1 = *(uint *)(gp + -0x6b4);
  if ((uVar3 < uVar1) || ((uVar1 == uVar3 && (uVar4 < *(uint *)(gp + -0x6b8))))) {
    iVar2 = 0;
    uVar3 = uVar1;
    uVar4 = *(uint *)(gp + -0x6b8);
  }
  else {
    iVar2 = 1;
  }
  if ((uVar4 == 0xffffffff) && (uVar3 == 0xffffffff)) {
    puVar5 = (undefined4 *)(gp + -0x6c0 + iVar2 * 8);
    *puVar5 = 0xffffffff;
    puVar5[1] = 0xffffffff;
  }
  else {
    FUN_ram_4039123a(0xffffffff,0xffffffff);
  }
  FUN_ram_40394d8e();
  return;
}

