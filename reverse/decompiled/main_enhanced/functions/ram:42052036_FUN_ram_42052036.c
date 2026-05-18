
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42052036(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar1 = FUN_ram_42053b52(0x36,0x30,0x280);
  if (iVar1 == 0) {
    FUN_ram_42058690(0x420420e8,0);
    uVar2 = 0x420420e8;
  }
  else {
    puVar3 = *(undefined1 **)(iVar1 + 4);
    (*(code *)&SUB_ram_40010488)(puVar3 + 1,0,0x2f);
    *puVar3 = 0x23;
    FUN_ram_42058c24(_DAT_ram_3fcc52c4,iVar1,param_1,0x7b);
    FUN_ram_42053ac4(iVar1);
    DAT_ram_3fcc203c = DAT_ram_3fcc203c << 1;
    FUN_ram_42058690(0x42041fe6,0);
    uVar2 = 0x42041fe6;
  }
  FUN_ram_420585b0(15000,uVar2,0);
  return;
}

