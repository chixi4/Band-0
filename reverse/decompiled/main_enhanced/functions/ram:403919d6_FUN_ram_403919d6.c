
void FUN_ram_403919d6(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_4039691e();
  FUN_ram_40396966();
  puVar1 = (uint *)(gp + -0x600) + param_3 * 2;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  uVar5 = *(uint *)(gp + -0x5fc);
  uVar4 = *(uint *)(gp + -0x5f4);
  uVar2 = *(uint *)(gp + -0x600);
  uVar3 = *(uint *)(gp + -0x5f8);
  if ((uVar5 < uVar4) || ((uVar4 == uVar5 && (uVar2 < uVar3)))) {
    uVar3 = uVar2;
    uVar4 = uVar5;
  }
  FUN_ram_403963d6(&DAT_ram_3fcb9574,2,uVar3,uVar4);
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

