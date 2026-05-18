
void FUN_ram_4039123a(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  puVar2 = (uint *)(gp + -0x6c0) + param_3 * 2;
  *puVar2 = param_1;
  puVar2[1] = param_2;
  uVar5 = *(uint *)(gp + -0x6bc);
  uVar4 = *(uint *)(gp + -0x6b4);
  uVar1 = *(uint *)(gp + -0x6c0);
  uVar3 = *(uint *)(gp + -0x6b8);
  if ((uVar5 < uVar4) || ((uVar4 == uVar5 && (uVar1 < uVar3)))) {
    uVar3 = uVar1;
    uVar4 = uVar5;
  }
  FUN_ram_403948ae(0x3fcb2074,2,uVar3,uVar4);
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return;
}

